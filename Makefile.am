ACLOCAL_AMFLAGS = -I m4

h2oxxdir = $(includedir)/h2o/cxx
pkgconfigdir = $(libdir)/pkgconfig

lib_LTLIBRARIES = libh2oboost.la

libh2oboost_la_SOURCES =
libh2oboost_la_CPPFLAGS = $(LIBH2OXX_CFLAGS) -I$(top_srcdir)/include
libh2oboost_la_LIBADD = $(LIBH2OXX_LIBS)
libh2oboost_la_LDFLAGS = -version-info 0:0:0

h2oxx_HEADERS =

pkgconfig_DATA = libh2oboost.pc
