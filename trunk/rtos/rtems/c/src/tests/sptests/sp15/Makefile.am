##
## $Id: Makefile.am,v 1.2 2001-09-27 12:02:33 chris Exp $
##

AUTOMAKE_OPTIONS = foreign 1.4

TEST = sp15

MANAGERS = io partition

C_FILES = init.c task1.c
C_O_FILES = $(C_FILES:%.c=${ARCH}/%.o)

H_FILES = system.h
noinst_HEADERS = $(H_FILES)

DOCTYPES = scn doc
DOCS = $(DOCTYPES:%=$(TEST).%)

SRCS = $(C_FILES) $(H_FILES)
OBJS = $(C_O_FILES)

PRINT_SRCS = $(DOCS)

PGM = ${ARCH}/$(TEST).exe

include $(RTEMS_ROOT)/make/custom/@RTEMS_BSP@.cfg
include $(RTEMS_ROOT)/make/leaf.cfg
include $(top_srcdir)/sptests.am

${PGM}: $(OBJS) $(LINK_FILES)
	$(make-exe)

all-local: $(ARCH) $(TMPINSTALL_FILES)

EXTRA_DIST = $(C_FILES) $(DOCS)

include $(top_srcdir)/../../../../automake/local.am
