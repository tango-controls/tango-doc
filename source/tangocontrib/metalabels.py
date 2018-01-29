def metalabel_role(name, rawtext, text, lineno, inliner, options={}, content=[]):
    """Meta label role

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
        issue_num = int(text)
        if issue_num <= 0:
            raise ValueError
    except ValueError:
        msg = inliner.reporter.error(
            'BitBucket issue number must be a number greater than or equal to 1; '
            '"%s" is invalid.' % text, line=lineno)
        prb = inliner.problematic(rawtext, rawtext, msg)
        return [prb], [msg]
    app = inliner.document.settings.env.app
    node = make_link_node(rawtext, app, 'issue', str(issue_num), options)
    return [node], []

def setup(app):
    """Install the plugin.

    :param app: Sphinx application context.
    """
    app.add_role('bbissue', bbissue_role)
    app.add_role('bbchangeset', bbchangeset_role)
    app.add_config_value('meta_labels', None, 'env')

    return