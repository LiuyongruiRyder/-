/****************************************************************************
** Meta object code from reading C++ file 'myfindui.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.14.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "D:/QT5.9/CODE/demo_notepad/myfindui.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'myfindui.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.14.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Myfindui_t {
    QByteArrayData data[16];
    char stringdata0[225];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Myfindui_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Myfindui_t qt_meta_stringdata_Myfindui = {
    {
QT_MOC_LITERAL(0, 0, 8), // "Myfindui"
QT_MOC_LITERAL(1, 9, 8), // "sendData"
QT_MOC_LITERAL(2, 18, 0), // ""
QT_MOC_LITERAL(3, 19, 10), // "sendDataup"
QT_MOC_LITERAL(4, 30, 9), // "sendData1"
QT_MOC_LITERAL(5, 40, 9), // "sendData2"
QT_MOC_LITERAL(6, 50, 9), // "sendData3"
QT_MOC_LITERAL(7, 60, 11), // "sendDataup1"
QT_MOC_LITERAL(8, 72, 11), // "sendDataup2"
QT_MOC_LITERAL(9, 84, 11), // "sendDataup3"
QT_MOC_LITERAL(10, 96, 17), // "send_replace_Data"
QT_MOC_LITERAL(11, 114, 16), // "send_replace_all"
QT_MOC_LITERAL(12, 131, 21), // "on_pushButton_clicked"
QT_MOC_LITERAL(13, 153, 23), // "on_pushButton_2_clicked"
QT_MOC_LITERAL(14, 177, 23), // "on_pushButton_4_clicked"
QT_MOC_LITERAL(15, 201, 23) // "on_pushButton_3_clicked"

    },
    "Myfindui\0sendData\0\0sendDataup\0sendData1\0"
    "sendData2\0sendData3\0sendDataup1\0"
    "sendDataup2\0sendDataup3\0send_replace_Data\0"
    "send_replace_all\0on_pushButton_clicked\0"
    "on_pushButton_2_clicked\0on_pushButton_4_clicked\0"
    "on_pushButton_3_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Myfindui[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      14,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      10,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   84,    2, 0x06 /* Public */,
       3,    1,   87,    2, 0x06 /* Public */,
       4,    1,   90,    2, 0x06 /* Public */,
       5,    1,   93,    2, 0x06 /* Public */,
       6,    1,   96,    2, 0x06 /* Public */,
       7,    1,   99,    2, 0x06 /* Public */,
       8,    1,  102,    2, 0x06 /* Public */,
       9,    1,  105,    2, 0x06 /* Public */,
      10,    2,  108,    2, 0x06 /* Public */,
      11,    2,  113,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      12,    0,  118,    2, 0x08 /* Private */,
      13,    0,  119,    2, 0x08 /* Private */,
      14,    0,  120,    2, 0x08 /* Private */,
      15,    0,  121,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    2,    2,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    2,    2,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void Myfindui::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Myfindui *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->sendData((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->sendDataup((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: _t->sendData1((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 3: _t->sendData2((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 4: _t->sendData3((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 5: _t->sendDataup1((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 6: _t->sendDataup2((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 7: _t->sendDataup3((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 8: _t->send_replace_Data((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 9: _t->send_replace_all((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 10: _t->on_pushButton_clicked(); break;
        case 11: _t->on_pushButton_2_clicked(); break;
        case 12: _t->on_pushButton_4_clicked(); break;
        case 13: _t->on_pushButton_3_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (Myfindui::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Myfindui::sendData)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (Myfindui::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Myfindui::sendDataup)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (Myfindui::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Myfindui::sendData1)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (Myfindui::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Myfindui::sendData2)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (Myfindui::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Myfindui::sendData3)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (Myfindui::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Myfindui::sendDataup1)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (Myfindui::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Myfindui::sendDataup2)) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (Myfindui::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Myfindui::sendDataup3)) {
                *result = 7;
                return;
            }
        }
        {
            using _t = void (Myfindui::*)(QString , QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Myfindui::send_replace_Data)) {
                *result = 8;
                return;
            }
        }
        {
            using _t = void (Myfindui::*)(QString , QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Myfindui::send_replace_all)) {
                *result = 9;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject Myfindui::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_Myfindui.data,
    qt_meta_data_Myfindui,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Myfindui::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Myfindui::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Myfindui.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int Myfindui::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 14)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 14)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 14;
    }
    return _id;
}

// SIGNAL 0
void Myfindui::sendData(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Myfindui::sendDataup(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void Myfindui::sendData1(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void Myfindui::sendData2(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void Myfindui::sendData3(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void Myfindui::sendDataup1(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void Myfindui::sendDataup2(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void Myfindui::sendDataup3(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void Myfindui::send_replace_Data(QString _t1, QString _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void Myfindui::send_replace_all(QString _t1, QString _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
