#
#	$Id$
#
# Makefile for pre- and cross-compiling .machine files
#
ALL_TARGETS=show-all-dependencies
NO_DEFAULT_DEPENDENCIES_TARGETS=yes


CMAKE_SUBDIR_NAMES?=guunits guunits_generator
SUBDIR_NAMES?=${CMAKE_SUBDIR_NAMES} swift_GUUnits

.include "../../mk/subdir.mk"

generate:
	$Ecd guunits && ${MAKE} generate

.include "../../mk/mipal.mk"	# comes last!

