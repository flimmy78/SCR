/****************************************************************************
** Meta object code from reading C++ file 'ImageScene.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../ImageScene.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ImageScene.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_ImageScene_t {
    QByteArrayData data[17];
    char stringdata0[171];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ImageScene_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ImageScene_t qt_meta_stringdata_ImageScene = {
    {
QT_MOC_LITERAL(0, 0, 10), // "ImageScene"
QT_MOC_LITERAL(1, 11, 12), // "pointChanged"
QT_MOC_LITERAL(2, 24, 0), // ""
QT_MOC_LITERAL(3, 25, 6), // "zoomIn"
QT_MOC_LITERAL(4, 32, 5), // "ratio"
QT_MOC_LITERAL(5, 38, 7), // "zoomOut"
QT_MOC_LITERAL(6, 46, 14), // "zoomInMatching"
QT_MOC_LITERAL(7, 61, 15), // "zoomOutMatching"
QT_MOC_LITERAL(8, 77, 12), // "loadDCMImage"
QT_MOC_LITERAL(9, 90, 8), // "FilePath"
QT_MOC_LITERAL(10, 99, 12), // "loadBMPImage"
QT_MOC_LITERAL(11, 112, 9), // "loadImage"
QT_MOC_LITERAL(12, 122, 7), // "cv::Mat"
QT_MOC_LITERAL(13, 130, 5), // "Image"
QT_MOC_LITERAL(14, 136, 17), // "loadMatchingImage"
QT_MOC_LITERAL(15, 154, 6), // "Pixmap"
QT_MOC_LITERAL(16, 161, 9) // "saveImage"

    },
    "ImageScene\0pointChanged\0\0zoomIn\0ratio\0"
    "zoomOut\0zoomInMatching\0zoomOutMatching\0"
    "loadDCMImage\0FilePath\0loadBMPImage\0"
    "loadImage\0cv::Mat\0Image\0loadMatchingImage\0"
    "Pixmap\0saveImage"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ImageScene[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   69,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    1,   70,    2, 0x0a /* Public */,
       5,    1,   73,    2, 0x0a /* Public */,
       6,    1,   76,    2, 0x0a /* Public */,
       7,    1,   79,    2, 0x0a /* Public */,
       8,    1,   82,    2, 0x0a /* Public */,
      10,    1,   85,    2, 0x0a /* Public */,
      11,    1,   88,    2, 0x0a /* Public */,
      14,    1,   91,    2, 0x0a /* Public */,
      14,    1,   94,    2, 0x0a /* Public */,
      16,    1,   97,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::Float,    4,
    QMetaType::Void, QMetaType::Float,    4,
    QMetaType::Void, QMetaType::Float,    4,
    QMetaType::Void, QMetaType::Float,    4,
    QMetaType::Void, QMetaType::QString,    9,
    QMetaType::Void, QMetaType::QString,    9,
    QMetaType::Void, 0x80000000 | 12,   13,
    QMetaType::Void, 0x80000000 | 12,   13,
    QMetaType::Void, QMetaType::QPixmap,   15,
    QMetaType::Void, QMetaType::QString,    9,

       0        // eod
};

void ImageScene::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ImageScene *_t = static_cast<ImageScene *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->pointChanged(); break;
        case 1: _t->zoomIn((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 2: _t->zoomOut((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 3: _t->zoomInMatching((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 4: _t->zoomOutMatching((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 5: _t->loadDCMImage((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 6: _t->loadBMPImage((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 7: _t->loadImage((*reinterpret_cast< cv::Mat(*)>(_a[1]))); break;
        case 8: _t->loadMatchingImage((*reinterpret_cast< cv::Mat(*)>(_a[1]))); break;
        case 9: _t->loadMatchingImage((*reinterpret_cast< QPixmap(*)>(_a[1]))); break;
        case 10: _t->saveImage((*reinterpret_cast< QString(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (ImageScene::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ImageScene::pointChanged)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject ImageScene::staticMetaObject = {
    { &QGraphicsScene::staticMetaObject, qt_meta_stringdata_ImageScene.data,
      qt_meta_data_ImageScene,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *ImageScene::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ImageScene::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_ImageScene.stringdata0))
        return static_cast<void*>(const_cast< ImageScene*>(this));
    return QGraphicsScene::qt_metacast(_clname);
}

int ImageScene::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QGraphicsScene::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 11)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 11;
    }
    return _id;
}

// SIGNAL 0
void ImageScene::pointChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE