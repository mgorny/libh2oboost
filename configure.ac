AC_PREREQ([2.60])
AC_INIT([libh2oboost], [0])
AC_CONFIG_AUX_DIR([build-aux])
AC_CONFIG_MACRO_DIR([m4])
AM_INIT_AUTOMAKE([1.6 foreign dist-bzip2 subdir-objects])

PKG_CHECK_MODULES([LIBH2OXX], [libh2oxx])

AC_PROG_CXX

LT_INIT([disable-static])

BOOST_REQUIRE

AC_CONFIG_HEADERS([config.h])
AC_CONFIG_FILES([Makefile libh2oboost.pc])
AC_OUTPUT
