AUTOMAKE_OPTIONS = subdir-objects
ACLOCAL_AMFLAGS = $(ACLOCAL_FLAGS)

bin_PROGRAMS = ProTest

ProTest_SOURCES = main.cpp
if HAVE_QT
ProTest_CPPFLAGS = $(CXXFLAGS) $(QT_CXXFLAGS) -Wall -Wextra -std=c++11
ProTest_LDADD = libmainmenu.la libqt_cpp.la libdatabse.la libteacher.la libstudent.la
ProTest_LDFLAGS = $(LDFLAGS) $(QT_LIBS)
else
ProTest_CPPFLAGS = $(CXXFLAGS) -Wall -Wextra -std=c++11
ProTest_LDADD = libmainmenu.la libdatabse.la libteacher.la libstudent.la
ProTest_LDFLAGS = $(LDFLAGS)
endif

include_HEADERS = headers/tests_main_header.h headers/database.h headers/main_menu.h headers/sqlite3.h qt/dialog1.h \
qt/mainwindow.h qt/mainwindow_teach.h build-qt-Desktop-Debug/ui_dialog1.h build-qt-Desktop-Debug/ui_mainwindow.h \
build-qt-Desktop-Debug/ui_mainwindow_teach.h libs/libcrypt/include/tomcrypt_prng.h libs/libcrypt/include/tomcrypt_pkcs.h \
build-qt-Desktop-Debug/moc_predefs.h headers/teacher_menu.h headers/student_menu.h headers/config.h

if HAVE_QT
lib_LTLIBRARIES = libmainmenu.la libqt_cpp.la libdatabse.la libteacher.la libstudent.la
else 
lib_LTLIBRARIES = libmainmenu.la libdatabse.la libteacher.la libstudent.la
endif

# libmainmenu.la
libmainmenu_la_LDFLAGS = -version-info 0:0:0
libmainmenu_la_SOURCES = libs/main_menu.cpp
libmainmenu_la_CPPFLAGS = $(ProTest_CPPFLAGS)

# libqt_cpp.la
if HAVE_QT
libqt_cpp_la_LDFLAGS = -version-info 0:0:0 $(QT_LIBS)
libqt_cpp_la_SOURCES = qt/dialog1.cpp qt/mainwindow.cpp qt/mainwindow_teach.cpp qt/qt_main.cpp build-qt-Desktop-Debug/moc_dialog1.cpp \
build-qt-Desktop-Debug/moc_mainwindow.cpp build-qt-Desktop-Debug/moc_mainwindow_teach.cpp
libqt_cpp_la_CPPFLAGS = $(ProTest_CPPFLAGS)
endif

# libdatabse.la
libdatabse_la_LDFLAGS = -version-info 0:0:0
libdatabse_la_SOURCES = libs/db/database.cpp libs/db/sqlite3.c
libdatabse_la_CPPFLAGS = $(ProTest_CPPFLAGS)

# libteacher.la
libteacher_la_LDFLAGS = -version-info 0:0:0
libteacher_la_SOURCES = libs/teacher.cpp libs/teacher_menu.cpp
libteacher_la_CPPFLAGS = $(ProTest_CPPFLAGS)

# libstudent.la
libstudent_la_LDFLAGS = -version-info 0:0:0
libstudent_la_SOURCES = libs/SM.cpp libs/func_student.cpp
libstudent_la_CPPFLAGS = $(ProTest_CPPFLAGS)