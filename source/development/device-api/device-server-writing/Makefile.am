
if TANGO_DOC_ENABLED
pdf-local: img.eps
endif

img_src = \
    command \
    r_pipe \
    device_et \
    w_attribute \
    r_attribute \
    complete_server \
    w_pipe \
    startup

img.eps: Makefile
	(cd  $(srcdir); \
	for i in $(img_src) ; do \
	@FIG2DEV@ -L eps $$i.fig > $$i.eps ; \
	done \
	)

