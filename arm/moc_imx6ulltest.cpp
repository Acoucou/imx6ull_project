/****************************************************************************
** Meta object code from reading C++ file 'imx6ulltest.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.9)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../project/form/imx6ulltest.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'imx6ulltest.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.9. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_imx6ullTest_t {
    QByteArrayData data[12];
    char stringdata0[191];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_imx6ullTest_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_imx6ullTest_t qt_meta_stringdata_imx6ullTest = {
    {
QT_MOC_LITERAL(0, 0, 11), // "imx6ullTest"
QT_MOC_LITERAL(1, 12, 12), // "slotBtnClear"
QT_MOC_LITERAL(2, 25, 0), // ""
QT_MOC_LITERAL(3, 26, 19), // "slotBtnStartAndStop"
QT_MOC_LITERAL(4, 46, 11), // "slotTimeout"
QT_MOC_LITERAL(5, 58, 14), // "getAp3216cData"
QT_MOC_LITERAL(6, 73, 21), // "on_pushButton_clicked"
QT_MOC_LITERAL(7, 95, 15), // "getIcm20608Data"
QT_MOC_LITERAL(8, 111, 16), // "on_ledBt_clicked"
QT_MOC_LITERAL(9, 128, 17), // "on_beepBt_clicked"
QT_MOC_LITERAL(10, 146, 22), // "on_start2060Bt_clicked"
QT_MOC_LITERAL(11, 169, 21) // "on_stop2060Bt_clicked"

    },
    "imx6ullTest\0slotBtnClear\0\0slotBtnStartAndStop\0"
    "slotTimeout\0getAp3216cData\0"
    "on_pushButton_clicked\0getIcm20608Data\0"
    "on_ledBt_clicked\0on_beepBt_clicked\0"
    "on_start2060Bt_clicked\0on_stop2060Bt_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_imx6ullTest[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   64,    2, 0x08 /* Private */,
       3,    0,   65,    2, 0x08 /* Private */,
       4,    0,   66,    2, 0x08 /* Private */,
       5,    0,   67,    2, 0x08 /* Private */,
       6,    0,   68,    2, 0x08 /* Private */,
       7,    0,   69,    2, 0x08 /* Private */,
       8,    0,   70,    2, 0x08 /* Private */,
       9,    0,   71,    2, 0x08 /* Private */,
      10,    0,   72,    2, 0x08 /* Private */,
      11,    0,   73,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void imx6ullTest::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<imx6ullTest *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->slotBtnClear(); break;
        case 1: _t->slotBtnStartAndStop(); break;
        case 2: _t->slotTimeout(); break;
        case 3: _t->getAp3216cData(); break;
        case 4: _t->on_pushButton_clicked(); break;
        case 5: _t->getIcm20608Data(); break;
        case 6: _t->on_ledBt_clicked(); break;
        case 7: _t->on_beepBt_clicked(); break;
        case 8: _t->on_start2060Bt_clicked(); break;
        case 9: _t->on_stop2060Bt_clicked(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject imx6ullTest::staticMetaObject = { {
    &QMainWindow::staticMetaObject,
    qt_meta_stringdata_imx6ullTest.data,
    qt_meta_data_imx6ullTest,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *imx6ullTest::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *imx6ullTest::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_imx6ullTest.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int imx6ullTest::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
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
QT_WARNING_POP
QT_END_MOC_NAMESPACE
