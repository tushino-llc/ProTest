/****************************************************************************
** Meta object code from reading C++ file 'mainwindow_teach.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../qt/mainwindow_teach.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow_teach.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MainWindow_teach_t {
    QByteArrayData data[10];
    char stringdata0[224];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MainWindow_teach_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MainWindow_teach_t qt_meta_stringdata_MainWindow_teach = {
    {
QT_MOC_LITERAL(0, 0, 16), // "MainWindow_teach"
QT_MOC_LITERAL(1, 17, 29), // "on_actionStudents_2_triggered"
QT_MOC_LITERAL(2, 47, 0), // ""
QT_MOC_LITERAL(3, 48, 28), // "on_actionQuestions_triggered"
QT_MOC_LITERAL(4, 77, 23), // "on_actionExit_triggered"
QT_MOC_LITERAL(5, 101, 31), // "on_comboBox_currentIndexChanged"
QT_MOC_LITERAL(6, 133, 5), // "index"
QT_MOC_LITERAL(7, 139, 24), // "on_actionAllow_triggered"
QT_MOC_LITERAL(8, 164, 26), // "on_actionLog_out_triggered"
QT_MOC_LITERAL(9, 191, 32) // "on_actionOpen_Database_triggered"

    },
    "MainWindow_teach\0on_actionStudents_2_triggered\0"
    "\0on_actionQuestions_triggered\0"
    "on_actionExit_triggered\0"
    "on_comboBox_currentIndexChanged\0index\0"
    "on_actionAllow_triggered\0"
    "on_actionLog_out_triggered\0"
    "on_actionOpen_Database_triggered"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow_teach[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   49,    2, 0x08 /* Private */,
       3,    0,   50,    2, 0x08 /* Private */,
       4,    0,   51,    2, 0x08 /* Private */,
       5,    1,   52,    2, 0x08 /* Private */,
       7,    0,   55,    2, 0x08 /* Private */,
       8,    0,   56,    2, 0x08 /* Private */,
       9,    0,   57,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    6,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void MainWindow_teach::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MainWindow_teach *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_actionStudents_2_triggered(); break;
        case 1: _t->on_actionQuestions_triggered(); break;
        case 2: _t->on_actionExit_triggered(); break;
        case 3: _t->on_comboBox_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->on_actionAllow_triggered(); break;
        case 5: _t->on_actionLog_out_triggered(); break;
        case 6: _t->on_actionOpen_Database_triggered(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject MainWindow_teach::staticMetaObject = { {
    &QMainWindow::staticMetaObject,
    qt_meta_stringdata_MainWindow_teach.data,
    qt_meta_data_MainWindow_teach,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *MainWindow_teach::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow_teach::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow_teach.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow_teach::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 7;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
