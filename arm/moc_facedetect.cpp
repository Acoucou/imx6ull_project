/****************************************************************************
** Meta object code from reading C++ file 'facedetect.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.9)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../project/form/facedetect.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'facedetect.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.9. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_faceDetect_t {
    QByteArrayData data[7];
    char stringdata0[90];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_faceDetect_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_faceDetect_t qt_meta_stringdata_faceDetect = {
    {
QT_MOC_LITERAL(0, 0, 10), // "faceDetect"
QT_MOC_LITERAL(1, 11, 16), // "faceHaar_clicked"
QT_MOC_LITERAL(2, 28, 0), // ""
QT_MOC_LITERAL(3, 29, 9), // "showImage"
QT_MOC_LITERAL(4, 39, 13), // "setButtonText"
QT_MOC_LITERAL(5, 53, 16), // "saveImageToLocal"
QT_MOC_LITERAL(6, 70, 19) // "closeDetect_clicked"

    },
    "faceDetect\0faceHaar_clicked\0\0showImage\0"
    "setButtonText\0saveImageToLocal\0"
    "closeDetect_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_faceDetect[] = {

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
       1,    0,   39,    2, 0x08 /* Private */,
       3,    1,   40,    2, 0x08 /* Private */,
       4,    1,   43,    2, 0x08 /* Private */,
       5,    0,   46,    2, 0x08 /* Private */,
       6,    0,   47,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QImage,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void faceDetect::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<faceDetect *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->faceHaar_clicked(); break;
        case 1: _t->showImage((*reinterpret_cast< const QImage(*)>(_a[1]))); break;
        case 2: _t->setButtonText((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->saveImageToLocal(); break;
        case 4: _t->closeDetect_clicked(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject faceDetect::staticMetaObject = { {
    &QWidget::staticMetaObject,
    qt_meta_stringdata_faceDetect.data,
    qt_meta_data_faceDetect,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *faceDetect::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *faceDetect::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_faceDetect.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int faceDetect::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
