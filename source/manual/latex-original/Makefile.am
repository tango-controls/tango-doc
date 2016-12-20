SUBDIRS = ds_writing ds_model dance java_api gen_api advanced

if TANGO_DOC_ENABLED
pdf-local: tango.pdf
endif

tango.pdf: $(srcdir)/tango.lyx
	cd $(srcdir); @LYX@ --export pdf2 tango.lyx
	mv $(srcdir)/tango.pdf .
