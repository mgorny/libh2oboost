AC_PREREQ([2.60])
AC_INIT([libh2oboost], [0],
		[https://bitbucket.org/mgorny/libh2oboost/issues/],
		[libh2oboost],
		[https://bitbucket.org/mgorny/libh2oboost/])
AC_CONFIG_AUX_DIR([build-aux])
AC_CONFIG_MACRO_DIR([m4])
AM_INIT_AUTOMAKE([1.6 foreign dist-bzip2 subdir-objects])

PKG_CHECK_MODULES([LIBH2OXX], [libh2oxx >= 0.2])

AC_PROG_CXX

LT_INIT([disable-static win32-dll])

BOOST_REQUIRE

AC_CONFIG_HEADERS([config.h])
AC_CONFIG_FILES([Makefile libh2oboost.pc])
AC_OUTPUT
