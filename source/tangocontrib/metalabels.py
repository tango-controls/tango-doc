from docutils import nodes
from docutils.parsers.rst.roles import set_classes
import pprint

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

    except AssertionError :
        msg = inliner.reporter.error(
            'Cannot create meta-label "%s: %s". '
            'Please check "meta_labels" in conf.py.' % (name, text), line=lineno)
        prb = inliner.problematic(rawtext, rawtext, msg)
        return [prb], [msg]

    return [node, ], []


def setup(app):
    """Install the plugin.

    :param app: Sphinx application context.
    """

    print ("Registering meta-labels...")

    app.add_config_value('meta_labels', None, 'env')

    #pprint.PrettyPrinter(indent=2).pprint(app.config.__dict__)

    meta_labels = app.config._raw_config.get('meta_labels', {})
    print (meta_labels)

    assert isinstance(meta_labels, dict)

    for key in meta_labels.keys():
        print ('registering %s ' % key)
        app.add_role(key, metalabel_role)

    print ("... meta-labels registered.")

    return {'varsion':'0.1'}
