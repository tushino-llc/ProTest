AUTOMAKE_OPTIONS = subdir-objects
ACLOCAL_AMFLAGS = $(ACLOCAL_FLAGS)
#SUBDIRS = libs/libtomcrypt

#$(SUBDIRS):
#	$(MAKE) install -f makefile.shared PREFIX=../libcrypt && $(MAKE) clean

bin_PROGRAMS = ProTest

ProTest_SOURCES = main.cpp
ProTest_CPPFLAGS = $(CXXFLAGS) $(QT_CXXFLAGS) -Wall -Wextra -std=c++11
ProTest_LDADD = libmainmenu.la libdatabse.la libqt_cpp.la # libteacher.la
ProTest_LDFLAGS = $(LDFLAGS) $(QT_LIBS)

include_HEADERS = headers/tests_main_header.h headers/database.h headers/main_menu.h headers/sqlite3.h qt/dialog1.h \
qt/mainwindow.h qt/mainwindow_teach.h build-qt-Desktop-Debug/ui_dialog1.h build-qt-Desktop-Debug/ui_mainwindow.h \
build-qt-Desktop-Debug/ui_mainwindow_teach.h libs/libcrypt/include/tomcrypt_prng.h libs/libcrypt/include/tomcrypt_pkcs.h \
libs/libcrypt/include/tomcrypt_pk.h libs/libcrypt/include/tomcrypt_misc.h libs/libcrypt/include/tomcrypt_math.h \
libs/libcrypt/include/tomcrypt_macros.h libs/libcrypt/include/tomcrypt_mac.h libs/libcrypt/include/tomcrypt_hash.h \
libs/libcrypt/include/tomcrypt_custom.h libs/libcrypt/include/tomcrypt_cipher.h libs/libcrypt/include/tomcrypt_cfg.h \
libs/libcrypt/include/tomcrypt_argchk.h libs/libcrypt/include/tomcrypt.h build-qt-Desktop-Debug/moc_predefs.h
# headers/teacher_menu.h

lib_LTLIBRARIES = libmainmenu.la libdatabse.la libqt_cpp.la # libteacher.la

# libmainmenu.la
libmainmenu_la_LDFLAGS = -version-info 0:0:0
libmainmenu_la_SOURCES = libs/main_menu.cpp
libmainmenu_la_CPPFLAGS = $(ProTest_CPPFLAGS)

# libdatabse.la
libdatabse_la_LDFLAGS = -version-info 0:0:0
libdatabse_la_SOURCES = libs/db/database.cpp libs/db/sqlite3.c
libdatabse_la_CPPFLAGS = $(ProTest_CPPFLAGS)

# libqt_cpp.la
libqt_cpp_la_LDFLAGS = -version-info 0:0:0 $(QT_LIBS)
libqt_cpp_la_SOURCES = qt/dialog1.cpp qt/mainwindow.cpp qt/mainwindow_teach.cpp qt/qt_main.cpp build-qt-Desktop-Debug/moc_dialog1.cpp \
build-qt-Desktop-Debug/moc_mainwindow.cpp build-qt-Desktop-Debug/moc_mainwindow_teach.cpp
libqt_cpp_la_CPPFLAGS = $(ProTest_CPPFLAGS)

# libteacher.la
#libteacher_la_LDFLAGS = -version-info 0:0:0
#libteacher_la_SOURCES = libs/teacher.cpp libs/teacher_menu.cpp
#libteacher_la_CPPFLAGS = $(ProTest_CPPFLAGS)