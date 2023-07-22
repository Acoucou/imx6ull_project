/****************************************************************************
** Meta object code from reading C++ file 'mqtt_demo.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.9)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../project/form/mqtt_demo.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mqtt_demo.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.9. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Mqtt_demo_t {
    QByteArrayData data[11];
    char stringdata0[191];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Mqtt_demo_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Mqtt_demo_t qt_meta_stringdata_Mqtt_demo = {
    {
QT_MOC_LITERAL(0, 0, 9), // "Mqtt_demo"
QT_MOC_LITERAL(1, 10, 13), // "setClientPort"
QT_MOC_LITERAL(2, 24, 0), // ""
QT_MOC_LITERAL(3, 25, 4), // "port"
QT_MOC_LITERAL(4, 30, 24), // "on_buttonConnect_clicked"
QT_MOC_LITERAL(5, 55, 21), // "on_buttonQuit_clicked"
QT_MOC_LITERAL(6, 77, 20), // "updateLogStateChange"
QT_MOC_LITERAL(7, 98, 18), // "brokerDisconnected"
QT_MOC_LITERAL(8, 117, 24), // "on_buttonPublish_clicked"
QT_MOC_LITERAL(9, 142, 26), // "on_buttonSubscribe_clicked"
QT_MOC_LITERAL(10, 169, 21) // "on_buttonPing_clicked"

    },
    "Mqtt_demo\0setClientPort\0\0port\0"
    "on_buttonConnect_clicked\0on_buttonQuit_clicked\0"
    "updateLogStateChange\0brokerDisconnected\0"
    "on_buttonPublish_clicked\0"
    "on_buttonSubscribe_clicked\0"
    "on_buttonPing_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Mqtt_demo[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   54,    2, 0x0a /* Public */,
       4,    0,   57,    2, 0x08 /* Private */,
       5,    0,   58,    2, 0x08 /* Private */,
       6,    0,   59,    2, 0x08 /* Private */,
       7,    0,   60,    2, 0x08 /* Private */,
       8,    0,   61,    2, 0x08 /* Private */,
       9,    0,   62,    2, 0x08 /* Private */,
      10,    0,   63,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void Mqtt_demo::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Mqtt_demo *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->setClientPort((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject Mqtt_demo::staticMetaObject = { {
    &QWidget::staticMetaObject,
    qt_meta_stringdata_Mqtt_demo.data,
    qt_meta_data_Mqtt_demo,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Mqtt_demo::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Mqtt_demo::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Mqtt_demo.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int Mqtt_demo::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 8;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
