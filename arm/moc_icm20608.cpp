/****************************************************************************
** Meta object code from reading C++ file 'icm20608.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.9)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../project/hardware/icm20608.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'icm20608.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.9. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Icm20608_t {
    QByteArrayData data[13];
    char stringdata0[110];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Icm20608_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Icm20608_t qt_meta_stringdata_Icm20608 = {
    {
QT_MOC_LITERAL(0, 0, 8), // "Icm20608"
QT_MOC_LITERAL(1, 9, 19), // "icm20608DataChanged"
QT_MOC_LITERAL(2, 29, 0), // ""
QT_MOC_LITERAL(3, 30, 13), // "timer_timeout"
QT_MOC_LITERAL(4, 44, 10), // "setCapture"
QT_MOC_LITERAL(5, 55, 3), // "str"
QT_MOC_LITERAL(6, 59, 6), // "gxData"
QT_MOC_LITERAL(7, 66, 6), // "gyData"
QT_MOC_LITERAL(8, 73, 6), // "gzData"
QT_MOC_LITERAL(9, 80, 6), // "axData"
QT_MOC_LITERAL(10, 87, 6), // "ayData"
QT_MOC_LITERAL(11, 94, 6), // "azData"
QT_MOC_LITERAL(12, 101, 8) // "tempData"

    },
    "Icm20608\0icm20608DataChanged\0\0"
    "timer_timeout\0setCapture\0str\0gxData\0"
    "gyData\0gzData\0axData\0ayData\0azData\0"
    "tempData"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Icm20608[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       7,   34, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   29,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    0,   30,    2, 0x0a /* Public */,

 // methods: name, argc, parameters, tag, flags
       4,    1,   31,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,

 // methods: parameters
    QMetaType::Void, QMetaType::Bool,    5,

 // properties: name, type, flags
       6, QMetaType::QString, 0x00495001,
       7, QMetaType::QString, 0x00495001,
       8, QMetaType::QString, 0x00495001,
       9, QMetaType::QString, 0x00495001,
      10, QMetaType::QString, 0x00495001,
      11, QMetaType::QString, 0x00495001,
      12, QMetaType::QString, 0x00495001,

 // properties: notify_signal_id
       0,
       0,
       0,
       0,
       0,
       0,
       0,

       0        // eod
};

void Icm20608::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Icm20608 *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->icm20608DataChanged(); break;
        case 1: _t->timer_timeout(); break;
        case 2: _t->setCapture((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (Icm20608::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Icm20608::icm20608DataChanged)) {
                *result = 0;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<Icm20608 *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->gxData(); break;
        case 1: *reinterpret_cast< QString*>(_v) = _t->gyData(); break;
        case 2: *reinterpret_cast< QString*>(_v) = _t->gzData(); break;
        case 3: *reinterpret_cast< QString*>(_v) = _t->axData(); break;
        case 4: *reinterpret_cast< QString*>(_v) = _t->ayData(); break;
        case 5: *reinterpret_cast< QString*>(_v) = _t->azData(); break;
        case 6: *reinterpret_cast< QString*>(_v) = _t->tempData(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject Icm20608::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_Icm20608.data,
    qt_meta_data_Icm20608,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Icm20608::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Icm20608::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Icm20608.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int Icm20608::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 3;
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 7;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void Icm20608::icm20608DataChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
