dnl qt.m4
dnl Copyright (C) 2016 Intevation GmbH
dnl
dnl This file is part of gpgme and is provided under the same license as gpgme

dnl Autoconf macro to find either Qt4 or Qt5
dnl
dnl sets GPGME_QT_LIBS and GPGME_QT_CFLAGS
dnl
dnl if QT5 was found have_qt5_libs is set to yes

AC_DEFUN([FIND_QT],
[
  have_qt5_libs="no";

  PKG_CHECK_MODULES(GPGME_QT,
                    Qt5Core >= 5.0.0,
                    [have_qt5_libs="yes"],
                    [have_qt5_libs="no"])

  PKG_CHECK_MODULES(GPGME_QTTEST,
                    Qt5Test >= 5.0.0,
                    [have_qt5test_libs="yes"],
                    [have_qt5test_libs="no"])

  if ! test "$have_w32_system" = yes; then
    if "$PKG_CONFIG" --variable qt_config Qt5Core | grep -q "reduce_relocations"; then
      GPGME_QT_CFLAGS="$GPGME_QT_CFLAGS -fpic"
    fi
  fi
  if test "$have_qt5_libs" = "yes"; then
    GPGME_QT_CFLAGS="$GPGME_QT_CFLAGS -I../qt -I. -isystem /usr/include/x86_64-linux-gnu/qt5 -isystem /usr/include/x86_64-linux-gnu/qt5/QtWidgets -isystem /usr/include/x86_64-linux-gnu/qt5/QtGui -isystem /usr/include/x86_64-linux-gnu/qt5/QtCore -I. -I. -I/usr/lib/x86_64-linux-gnu/qt5/mkspecs/linux-g++-64"
    GPGME_QT_LIBS="$GPGME_QT_LIBS -lQt5Widgets -lQt5Gui -lGL -lpthread"
    AC_SUBST(GPGME_QT_LIBS)
    AC_SUBST(GPGME_QT_CFLAGS)
    AC_CHECK_TOOL(MOC, moc)
    AC_MSG_CHECKING([moc version])
    mocversion=`$MOC -v 2>&1`
    mocversiongrep=`echo $mocversion | grep -E "Qt 5|moc 5"`
    if test x"$mocversiongrep" != x"$mocversion"; then
      AC_MSG_RESULT([no])
      # moc was not the qt5 one, try with moc-qt5
      AC_CHECK_TOOL(MOC2, moc-qt5)
      mocversion=`$MOC2 -v 2>&1`
      mocversiongrep=`echo $mocversion | grep -E "Qt 5|moc-qt5 5|moc 5"`
      if test x"$mocversiongrep" != x"$mocversion"; then
        AC_CHECK_TOOL(QTCHOOSER, qtchooser)
        qt5tooldir=`QT_SELECT=qt5 qtchooser -print-env | grep QTTOOLDIR | cut -d '=' -f 2 | cut -d \" -f 2`
        mocversion=`$qt5tooldir/moc -v 2>&1`
        mocversiongrep=`echo $mocversion | grep -E "Qt 5|moc 5"`
        if test x"$mocversiongrep" != x"$mocversion"; then
          # no valid moc found
          have_qt5_libs="no";
        else
          MOC=$qt5tooldir/moc
        fi
      else
        MOC=$MOC2
      fi
    fi
    AC_MSG_RESULT([$mocversion])
    dnl Check that a binary can actually be build with this qt.
    dnl pkg-config may be set up in a way that it looks also for libaries
    dnl of the build system and not only for the host system. In that case
    dnl we check here that we can actually compile / link a qt application
    dnl for host.
    OLDCPPFLAGS=$CPPFLAGS
    CPPFLAGS=$GPGME_QT_CFLAGS
    OLDLIBS=$LIBS
    LIBS=$GPGME_QT_LIBS
    AC_LANG_PUSH(C++)
    AC_MSG_CHECKING([whether a simple qt program can be built])
    AC_LINK_IFELSE([AC_LANG_SOURCE([
    #include <QCoreApplication>
    int main (int argc, char **argv) {
    QCoreApplication app(argc, argv);
    app.exec();
    }])], [have_qt5_libs='yes'], [have_qt5_libs='no'])
    AC_MSG_RESULT([$have_qt5_libs])
    AC_LANG_POP()
    CPPFLAGS=$OLDCPPFLAGS
    LIBS=$OLDLIBS
  fi
])