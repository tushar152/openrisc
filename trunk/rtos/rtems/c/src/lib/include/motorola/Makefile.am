##
## $Id: Makefile.am,v 1.2 2001-09-27 11:59:35 chris Exp $
##

AUTOMAKE_OPTIONS = foreign 1.4

H_FILES = mc68230.h mc68681.h

noinst_HEADERS = $(H_FILES)

PREINSTALL_FILES += $(PROJECT_INCLUDE)/motorola \
    $(noinst_HEADERS:%=$(PROJECT_INCLUDE)/motorola/%)

$(PROJECT_INCLUDE)/motorola:
	@$(mkinstalldirs) $@
$(PROJECT_INCLUDE)/motorola/%.h: %.h
	$(INSTALL_DATA) $< $@

all-local: $(PREINSTALL_FILES)

include $(top_srcdir)/../../../automake/local.am
