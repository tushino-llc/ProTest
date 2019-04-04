#-------------------------------------------------
#
# Project created by QtCreator 2019-04-03T10:19:08
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = qt
TEMPLATE = app

SOURCES += mainwindow.cpp \
    dialog1.cpp \
    ../libs/db/database.cpp \
    #../libs/teacher.cpp \
    #../libs/teacher_menu.cpp \
    ../libs/db/sqlite3.c \
    ../libs/main_menu.cpp \
    ../main.cpp \
    qt_main.cpp

HEADERS  += mainwindow.h \
    dialog1.h \
    ../libs/libcrypt/include/tomcrypt.h \
    ../libs/libcrypt/include/tomcrypt_argchk.h \
    ../libs/libcrypt/include/tomcrypt_cfg.h \
    ../libs/libcrypt/include/tomcrypt_cipher.h \
    ../libs/libcrypt/include/tomcrypt_custom.h \
    ../libs/libcrypt/include/tomcrypt_hash.h \
    ../libs/libcrypt/include/tomcrypt_mac.h \
    ../libs/libcrypt/include/tomcrypt_macros.h \
    ../libs/libcrypt/include/tomcrypt_math.h \
    ../libs/libcrypt/include/tomcrypt_misc.h \
    ../libs/libcrypt/include/tomcrypt_pk.h \
    ../libs/libcrypt/include/tomcrypt_pkcs.h \
    ../libs/libcrypt/include/tomcrypt_prng.h \
    ../headers/database.h \
    ../headers/sqlite3.h \
    ../headers/teacher_menu.h \
    ../headers/tests_main_header.h \
    ../headers/main_menu.h

FORMS    += mainwindow.ui \
    dialog1.ui

LIBS += \
    ../libs/libcrypt/lib/libtomcrypt.a \
    -ldl \

DISTFILES += \
    ../Makefile.am \
