/****************************************************************************
** Meta object code from reading C++ file 'dialog1.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../qt/dialog1.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'dialog1.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_Dialog1_t {
    QByteArrayData data[14];
    char stringdata0[297];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Dialog1_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Dialog1_t qt_meta_stringdata_Dialog1 = {
    {
QT_MOC_LITERAL(0, 0, 7), // "Dialog1"
QT_MOC_LITERAL(1, 8, 29), // "on_lineEditPass_2_textChanged"
QT_MOC_LITERAL(2, 38, 0), // ""
QT_MOC_LITERAL(3, 39, 4), // "arg1"
QT_MOC_LITERAL(4, 44, 33), // "on_lineEditPass_2_editingFini..."
QT_MOC_LITERAL(5, 78, 25), // "on_lineEditFN_textChanged"
QT_MOC_LITERAL(6, 104, 25), // "on_lineEditLN_textChanged"
QT_MOC_LITERAL(7, 130, 28), // "on_lineEditLogin_textChanged"
QT_MOC_LITERAL(8, 159, 27), // "on_lineEditPass_textChanged"
QT_MOC_LITERAL(9, 187, 23), // "on_radioStudent_toggled"
QT_MOC_LITERAL(10, 211, 7), // "checked"
QT_MOC_LITERAL(11, 219, 23), // "on_radioTeacher_toggled"
QT_MOC_LITERAL(12, 243, 31), // "on_lineEditPass_editingFinished"
QT_MOC_LITERAL(13, 275, 21) // "on_pushSignUp_clicked"

    },
    "Dialog1\0on_lineEditPass_2_textChanged\0"
    "\0arg1\0on_lineEditPass_2_editingFinished\0"
    "on_lineEditFN_textChanged\0"
    "on_lineEditLN_textChanged\0"
    "on_lineEditLogin_textChanged\0"
    "on_lineEditPass_textChanged\0"
    "on_radioStudent_toggled\0checked\0"
    "on_radioTeacher_toggled\0"
    "on_lineEditPass_editingFinished\0"
    "on_pushSignUp_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Dialog1[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   64,    2, 0x08 /* Private */,
       4,    0,   67,    2, 0x08 /* Private */,
       5,    1,   68,    2, 0x08 /* Private */,
       6,    1,   71,    2, 0x08 /* Private */,
       7,    1,   74,    2, 0x08 /* Private */,
       8,    1,   77,    2, 0x08 /* Private */,
       9,    1,   80,    2, 0x08 /* Private */,
      11,    1,   83,    2, 0x08 /* Private */,
      12,    0,   86,    2, 0x08 /* Private */,
      13,    0,   87,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::Bool,   10,
    QMetaType::Void, QMetaType::Bool,   10,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void Dialog1::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Dialog1 *_t = static_cast<Dialog1 *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_lineEditPass_2_textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->on_lineEditPass_2_editingFinished(); break;
        case 2: _t->on_lineEditFN_textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->on_lineEditLN_textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: _t->on_lineEditLogin_textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 5: _t->on_lineEditPass_textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 6: _t->on_radioStudent_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 7: _t->on_radioTeacher_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 8: _t->on_lineEditPass_editingFinished(); break;
        case 9: _t->on_pushSignUp_clicked(); break;
        default: ;
        }
    }
}

const QMetaObject Dialog1::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_Dialog1.data,
      qt_meta_data_Dialog1,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *Dialog1::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Dialog1::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_Dialog1.stringdata0))
        return static_cast<void*>(const_cast< Dialog1*>(this));
    return QDialog::qt_metacast(_clname);
}

int Dialog1::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 10;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
