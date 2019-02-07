import ast

from docutils.parsers.rst.roles import set_classes
# import pprint

from sphinx.directives.other import TocTree, int_or_nothing

from docutils import nodes
from docutils.parsers.rst import directives
from sphinx import addnodes
from copy import deepcopy

def metalabel_role(name, rawtext, text, lineno, inliner, options={}, content=[]):
    """Meta-label role

    Returns 2 part tuple containing list of nodes to insert into the
    document and a list of system messages.  Both are allowed to be
    empty.

    :param name: The role name used in the document.
    :param rawtext: The entire markup snippet, with role.
    :param text: The text marked with the role.
    :param lineno: The line number where rawtext appears in the input.
    :param inliner: The inliner instance that called us.
    :param options: Directive options for customization.
    :param content: The directive content for customization.
    """
    try:
        meta_labels = inliner.document.settings.env.app.config.meta_labels
        assert isinstance(meta_labels, dict)

        label_config = meta_labels.get(name)
        assert isinstance(label_config, dict)
        set_classes(options)

        node = nodes.emphasis(rawtext='', text='', **options)
        node['classes'].append('meta-label')

        node1 = nodes.strong(raw=rawtext, text=label_config.get('label', name), **options)
        node1['classes'].append('label')

        node2 = nodes.emphasis(rawtext=rawtext, text=text, **options)

        node += node1
        node += node2

        # Add information about the document meta labels to Spinx environment
        env = inliner.document.settings.env
        if not hasattr(env, "doc_metalabels"):

            metalabel = dict()
            metalabel[env.docname] = dict()

            metalabel[env.docname][name] = [text]
            setattr(env, "doc_metalabels", metalabel)

        if env.docname not in env.doc_metalabels:

            env.doc_metalabels[env.docname] = dict()

        # Create a list if one metalabel have a lot of values (split by ',')
        env.doc_metalabels[env.docname][name] = [text.strip() for text in text.split(",")]

    except AssertionError:
        msg = inliner.reporter.error(
            'Cannot create meta-label "%s: %s". '
            'Please check "meta_labels" in conf.py.' % (name, text), line=lineno)
        prb = inliner.problematic(rawtext, rawtext, msg)
        return [prb], [msg]

    return [node, ], []


class FilteredTree(TocTree):
    """
    Directive extends the base Sphinx TocTree class.
    Add information about the meta label used in the document.
    Feature this work as a filter, that shows only this
    document that has the specific meta lebel in the content.
    """

    option_spec = {
        'maxdepth': int,
        'name': directives.unchanged,
        'caption': directives.unchanged_required,
        'glob': directives.flag,
        'hidden': directives.flag,
        'includehidden': directives.flag,
        'numbered': int_or_nothing,
        'titlesonly': directives.flag,
        'reversed': directives.flag,
        # add new filter options, it uses python notation
        # e.q {"audience": ["administrators", "all"]}
        'metalabel': str
    }

    def run(self):
        ret = super(FilteredTree, self).run()

        if "metalabel" not in self.options:
            return ret

        # Add the information about the wanted toctree meta labels
        # to the Sphinx environment
        env = self.state.document.settings.env
        if not hasattr(env, 'tocs_metalabel'):
            env.tocs_metalabel = dict()

        env.tocs_metalabel[env.docname] = ast.literal_eval(self.options["metalabel"])

        # add metalabel filter settings to toctree subnode
        for node in ret:
            if hasattr(node, 'traverse'):
                for toctree_node in node.traverse(addnodes.toctree, include_self=True, siblings=True):
                    toctree_node['metalabel'] = ast.literal_eval(self.options["metalabel"])

        return ret


def env_purge_metalabel(app, env, docname):
    """

    This function is used to remove not use meta labels from documents
    or not used filters (tocs_metalabel) from toctree

    :param app: reference to the Sphinx application
    :param env: reference to the Sphinx environment
    :param docname: name of the document
    :return:
    """
    if not hasattr(env, 'doc_metalabels'):
        return

    # If metalabels is deleted from a specific document,
    # delete it too from doc_metalabels.
    # metalable[0] - this is a key for doc_metalabels dict
    env.doc_metalabels = dict(filter(lambda metalabel: metalabel[0] != docname,
                                     env.doc_metalabels.iteritems()))

    if not hasattr(env, 'tocs_metalabel'):
        return

    env.tocs_metalabel = dict(filter(lambda metalabel: metalabel[0] != docname,
                                     env.tocs_metalabel.iteritems()))


def filtered_process(app, doctree, docname):
    """
    The main filter algorithm used to filter the tocree's
    entries for specific meta labels

    :param app: reference to the Sphinx application
    :param doctree: reference to the resolved doctree
    :param docname: name of the resolved document
    :return:
    """

    env = app.builder.env
    builder = app.builder
    if not hasattr(env, 'tocs'):
        return

    if not hasattr(env, 'tocs_metalabel'):
        return


    def _filer_all_toctrees():
        """"
        Method used to filter all toctrees
        that use FilteredTree features

        """
        for tosc_name, _filter in env.tocs_metalabel.iteritems():
            # extract toctree from listitem,  buletlist, toctrees list
            toctree = env.tocs[tosc_name][0][1][0]
            _filter_the_toctree(toctree, _filter)

    def _filter_the_toctree(toctree, _filter):
        """
        Method used to filter specific toctrees

        :param toctree: the toctree to filter
        :param _filter: the configuration dict use to filtering
        :return:
        """

        entries = toctree["entries"]
        parsed_entries = []

        for ent in entries:

            ent_name = ent[1]

            if ent_name in env.doc_metalabels:
                ent_metalabels = env.doc_metalabels[ent_name]

                _add = [False for _ in range(len(_filter.keys()))]
                index = 0
                # base filtering - parse all values in toctree filter.
                # The entry metalabes must have the same value in the metalabels
                # and in the toctree filter e.q  'audience', 'lang' role must have
                # the same value in the entries and filter toctree
                for key in _filter.keys():
                    filter_values = _filter[key]
                    if type(filter_values) is not list:
                        filter_values = [filter_values]

                    for filter_value in filter_values:
                        # Checking the metalabels value, not all document in the
                        # entry must have the same values in the meta labels filters,
                        # only one value from metalabels must be correct
                        # in the current filter e.q (one value from the list
                        # ['developers', 'all'] must be in the 'entry' meta label)
                        try:
                            if filter_value in ent_metalabels[key]:
                                _add[index] = True
                                break
                        except KeyError:
                            break

                    index += 1

                if all(_add):
                    parsed_entries.append((None, ent_name))

        toctree["entries"] = parsed_entries

    if docname.__eq__(env.config.master_doc):
        # The first parse the toctrees entries,
        # prevent errors with rendering the sidebar menu
        _filer_all_toctrees()

    elif docname in env.tocs_metalabel.keys():

        # make backup of already parsed ToC, before we modify it
        tocs_origin = deepcopy(env.tocs)

        # process toctrees in the doc
        for toctree in doctree.traverse(addnodes.toctree):

            # filter this toctree and all ist subtrees.
            _filter_the_toctree(toctree, toctree['metalabel'])
            for subtoctree in toctree.traverse(addnodes.toctree, include_self=False, siblings=True):
                _filter_the_toctree(subtoctree, toctree['metalabel'])

            # filter all other tocs entries
            for doc, toc in env.tocs.items():
                for subtoctree in toc.traverse(addnodes.toctree, include_self=False, siblings=True):
                    _filter_the_toctree(subtoctree, toctree['metalabel'])

            # resolve toctree to bullet list and replace it to avoid default processing
            result = env.resolve_toctree(docname, builder, toctree)
            if result is None:
                toctree.replace_self([])
            else:
                toctree.replace_self(result)
                # tocs_origin[docname] = result

        # revert ToC from backup
        env.tocs = tocs_origin



def setup(app):
    """Install the plugin.

    :param app: Sphinx application context.
    """

    print ("Registering meta-labels...")
    app.add_config_value('meta_labels', None, 'env')

    meta_labels = app.config._raw_config.get('meta_labels', {})
    assert isinstance(meta_labels, dict)

    for key in meta_labels.keys():
        print ('registering %s ' % key)
        app.add_role(key, metalabel_role)

    print ("... meta-labels registered.")

    # register toctree directive
    # and event used to do filter feature
    directives.register_directive('toctree', FilteredTree)
    app.connect("env-purge-doc", env_purge_metalabel)
    app.connect("doctree-resolved", filtered_process)

    return {'version': '0.2'}
