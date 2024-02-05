/****************************************************************************
** Meta object code from reading C++ file 'mytestedit.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.14.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "D:/QT5.9/CODE/demo_notepad/mytestedit.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mytestedit.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.14.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MyTestEdit_t {
    QByteArrayData data[20];
    char stringdata0[254];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MyTestEdit_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MyTestEdit_t qt_meta_stringdata_MyTestEdit = {
    {
QT_MOC_LITERAL(0, 0, 10), // "MyTestEdit"
QT_MOC_LITERAL(1, 11, 24), // "textEditScrollBarChanged"
QT_MOC_LITERAL(2, 36, 0), // ""
QT_MOC_LITERAL(3, 37, 16), // "scrollBarChanged"
QT_MOC_LITERAL(4, 54, 13), // "onTextChanged"
QT_MOC_LITERAL(5, 68, 25), // "textEditVScrollBarChanged"
QT_MOC_LITERAL(6, 94, 28), // "textBrowserVScrollBarChanged"
QT_MOC_LITERAL(7, 123, 11), // "receiveline"
QT_MOC_LITERAL(8, 135, 6), // "target"
QT_MOC_LITERAL(9, 142, 6), // "findup"
QT_MOC_LITERAL(10, 149, 9), // "finddown1"
QT_MOC_LITERAL(11, 159, 9), // "finddown2"
QT_MOC_LITERAL(12, 169, 9), // "finddown3"
QT_MOC_LITERAL(13, 179, 7), // "findup1"
QT_MOC_LITERAL(14, 187, 7), // "findup2"
QT_MOC_LITERAL(15, 195, 7), // "findup3"
QT_MOC_LITERAL(16, 203, 11), // "replace_one"
QT_MOC_LITERAL(17, 215, 13), // "beforereplace"
QT_MOC_LITERAL(18, 229, 12), // "afterreplace"
QT_MOC_LITERAL(19, 242, 11) // "replace_all"

    },
    "MyTestEdit\0textEditScrollBarChanged\0"
    "\0scrollBarChanged\0onTextChanged\0"
    "textEditVScrollBarChanged\0"
    "textBrowserVScrollBarChanged\0receiveline\0"
    "target\0findup\0finddown1\0finddown2\0"
    "finddown3\0findup1\0findup2\0findup3\0"
    "replace_one\0beforereplace\0afterreplace\0"
    "replace_all"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MyTestEdit[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      15,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   89,    2, 0x08 /* Private */,
       3,    0,   90,    2, 0x08 /* Private */,
       4,    0,   91,    2, 0x08 /* Private */,
       5,    0,   92,    2, 0x08 /* Private */,
       6,    0,   93,    2, 0x08 /* Private */,
       7,    1,   94,    2, 0x08 /* Private */,
       9,    1,   97,    2, 0x08 /* Private */,
      10,    1,  100,    2, 0x08 /* Private */,
      11,    1,  103,    2, 0x08 /* Private */,
      12,    1,  106,    2, 0x08 /* Private */,
      13,    1,  109,    2, 0x08 /* Private */,
      14,    1,  112,    2, 0x08 /* Private */,
      15,    1,  115,    2, 0x08 /* Private */,
      16,    2,  118,    2, 0x08 /* Private */,
      19,    2,  123,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    8,
    QMetaType::Void, QMetaType::QString,    8,
    QMetaType::Void, QMetaType::QString,    8,
    QMetaType::Void, QMetaType::QString,    8,
    QMetaType::Void, QMetaType::QString,    8,
    QMetaType::Void, QMetaType::QString,    8,
    QMetaType::Void, QMetaType::QString,    8,
    QMetaType::Void, QMetaType::QString,    8,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,   17,   18,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,   17,   18,

       0        // eod
};

void MyTestEdit::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MyTestEdit *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->textEditScrollBarChanged(); break;
        case 1: _t->scrollBarChanged(); break;
        case 2: _t->onTextChanged(); break;
        case 3: _t->textEditVScrollBarChanged(); break;
        case 4: _t->textBrowserVScrollBarChanged(); break;
        case 5: _t->receiveline((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 6: _t->findup((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 7: _t->finddown1((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 8: _t->finddown2((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 9: _t->finddown3((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 10: _t->findup1((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 11: _t->findup2((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 12: _t->findup3((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 13: _t->replace_one((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 14: _t->replace_all((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject MyTestEdit::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_MyTestEdit.data,
    qt_meta_data_MyTestEdit,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *MyTestEdit::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MyTestEdit::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MyTestEdit.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int MyTestEdit::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 15)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 15;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 15)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 15;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
