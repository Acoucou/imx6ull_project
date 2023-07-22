/****************************************************************************
** Meta object code from reading C++ file 'mqtt_client.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.9)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../project/form/mqtt_client.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mqtt_client.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.9. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_mqtt_client_t {
    QByteArrayData data[8];
    char stringdata0[96];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_mqtt_client_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_mqtt_client_t qt_meta_stringdata_mqtt_client = {
    {
QT_MOC_LITERAL(0, 0, 11), // "mqtt_client"
QT_MOC_LITERAL(1, 12, 13), // "setClientPort"
QT_MOC_LITERAL(2, 26, 0), // ""
QT_MOC_LITERAL(3, 27, 4), // "port"
QT_MOC_LITERAL(4, 32, 20), // "updateLogStateChange"
QT_MOC_LITERAL(5, 53, 14), // "connect_client"
QT_MOC_LITERAL(6, 68, 15), // "Subscribe_topic"
QT_MOC_LITERAL(7, 84, 11) // "publish_msg"

    },
    "mqtt_client\0setClientPort\0\0port\0"
    "updateLogStateChange\0connect_client\0"
    "Subscribe_topic\0publish_msg"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_mqtt_client[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   39,    2, 0x0a /* Public */,
       4,    0,   42,    2, 0x08 /* Private */,
       5,    0,   43,    2, 0x08 /* Private */,
       6,    0,   44,    2, 0x08 /* Private */,
       7,    0,   45,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void mqtt_client::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<mqtt_client *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->setClientPort((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->updateLogStateChange(); break;
        case 2: _t->connect_client(); break;
        case 3: _t->Subscribe_topic(); break;
        case 4: _t->publish_msg(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject mqtt_client::staticMetaObject = { {
    &QWidget::staticMetaObject,
    qt_meta_stringdata_mqtt_client.data,
    qt_meta_data_mqtt_client,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *mqtt_client::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *mqtt_client::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_mqtt_client.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int mqtt_client::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
