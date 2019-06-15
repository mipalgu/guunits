#
# Makefile
# Callum McColl, 2019-06-05 11:58
#

ALL_TARGETS=host-local robot-local

C_SRCS!=ls *.c
CC_SRCS!=ls *.cc
ALL_HDRS!=ls *.h

.include "../../mk/c++17.mk"

${MODULE_BASE}_HDRS=${ALL_HDRS}
PKGCONFIG_NAME=guunits
PKGCONFIG_VERSION=1.0
PKGCONFIG_DESCRIPTION=Simple units library.

all:	all-real

generate:
	cd guunits_generator && swift build
	./guunits_generator/.build/debug/guunits_generator


.include "../../mk/mipal.mk"


# vim:ft=make
#
