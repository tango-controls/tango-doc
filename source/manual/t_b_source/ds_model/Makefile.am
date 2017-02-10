
if TANGO_DOC_ENABLED
pdf-local: img.eps
endif

img_src = \
    event_schematic_zmq

img.eps: Makefile
	(cd  $(srcdir); \
	for i in $(img_src) ; do \
	@FIG2DEV@ -L eps $$i.fig > $$i.eps ; \
	done \
	)

