/****************************************************************************
** Meta object code from reading C++ file 'musicplay.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.9)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../project/form/musicplay.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'musicplay.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.9. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MusicPlay_t {
    QByteArrayData data[13];
    char stringdata0[254];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MusicPlay_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MusicPlay_t qt_meta_stringdata_MusicPlay = {
    {
QT_MOC_LITERAL(0, 0, 9), // "MusicPlay"
QT_MOC_LITERAL(1, 10, 16), // "btn_play_clicked"
QT_MOC_LITERAL(2, 27, 0), // ""
QT_MOC_LITERAL(3, 28, 16), // "btn_next_clicked"
QT_MOC_LITERAL(4, 45, 20), // "btn_previous_clicked"
QT_MOC_LITERAL(5, 66, 23), // "mediaPlayerStateChanged"
QT_MOC_LITERAL(6, 90, 19), // "QMediaPlayer::State"
QT_MOC_LITERAL(7, 110, 16), // "listWidgetCliked"
QT_MOC_LITERAL(8, 127, 16), // "QListWidgetItem*"
QT_MOC_LITERAL(9, 144, 32), // "mediaPlaylistCurrentIndexChanged"
QT_MOC_LITERAL(10, 177, 26), // "musicPlayerDurationChanged"
QT_MOC_LITERAL(11, 204, 26), // "mediaPlayerPositionChanged"
QT_MOC_LITERAL(12, 231, 22) // "durationSliderReleased"

    },
    "MusicPlay\0btn_play_clicked\0\0"
    "btn_next_clicked\0btn_previous_clicked\0"
    "mediaPlayerStateChanged\0QMediaPlayer::State\0"
    "listWidgetCliked\0QListWidgetItem*\0"
    "mediaPlaylistCurrentIndexChanged\0"
    "musicPlayerDurationChanged\0"
    "mediaPlayerPositionChanged\0"
    "durationSliderReleased"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MusicPlay[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   59,    2, 0x08 /* Private */,
       3,    0,   60,    2, 0x08 /* Private */,
       4,    0,   61,    2, 0x08 /* Private */,
       5,    1,   62,    2, 0x08 /* Private */,
       7,    1,   65,    2, 0x08 /* Private */,
       9,    1,   68,    2, 0x08 /* Private */,
      10,    1,   71,    2, 0x08 /* Private */,
      11,    1,   74,    2, 0x08 /* Private */,
      12,    0,   77,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 6,    2,
    QMetaType::Void, 0x80000000 | 8,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::LongLong,    2,
    QMetaType::Void, QMetaType::LongLong,    2,
    QMetaType::Void,

       0        // eod
};

void MusicPlay::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MusicPlay *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->btn_play_clicked(); break;
        case 1: _t->btn_next_clicked(); break;
        case 2: _t->btn_previous_clicked(); break;
        case 3: _t->mediaPlayerStateChanged((*reinterpret_cast< QMediaPlayer::State(*)>(_a[1]))); break;
        case 4: _t->listWidgetCliked((*reinterpret_cast< QListWidgetItem*(*)>(_a[1]))); break;
        case 5: _t->mediaPlaylistCurrentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->musicPlayerDurationChanged((*reinterpret_cast< qint64(*)>(_a[1]))); break;
        case 7: _t->mediaPlayerPositionChanged((*reinterpret_cast< qint64(*)>(_a[1]))); break;
        case 8: _t->durationSliderReleased(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 3:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QMediaPlayer::State >(); break;
            }
            break;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject MusicPlay::staticMetaObject = { {
    &QMainWindow::staticMetaObject,
    qt_meta_stringdata_MusicPlay.data,
    qt_meta_data_MusicPlay,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *MusicPlay::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MusicPlay::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MusicPlay.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int MusicPlay::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
