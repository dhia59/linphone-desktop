/****************************************************************************
** Meta object code from reading C++ file 'AbstractCodecsModel.hpp'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.13.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../linphone-app/src/components/codecs/AbstractCodecsModel.hpp"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'AbstractCodecsModel.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.13.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_AbstractCodecsModel_t {
    QByteArrayData data[16];
    char stringdata0[150];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AbstractCodecsModel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AbstractCodecsModel_t qt_meta_stringdata_AbstractCodecsModel = {
    {
QT_MOC_LITERAL(0, 0, 19), // "AbstractCodecsModel"
QT_MOC_LITERAL(1, 20, 11), // "enableCodec"
QT_MOC_LITERAL(2, 32, 0), // ""
QT_MOC_LITERAL(3, 33, 2), // "id"
QT_MOC_LITERAL(4, 36, 6), // "status"
QT_MOC_LITERAL(5, 43, 9), // "moveCodec"
QT_MOC_LITERAL(6, 53, 6), // "source"
QT_MOC_LITERAL(7, 60, 11), // "destination"
QT_MOC_LITERAL(8, 72, 10), // "setBitrate"
QT_MOC_LITERAL(9, 83, 7), // "bitrate"
QT_MOC_LITERAL(10, 91, 11), // "setRecvFmtp"
QT_MOC_LITERAL(11, 103, 8), // "recvFmtp"
QT_MOC_LITERAL(12, 112, 6), // "reload"
QT_MOC_LITERAL(13, 119, 12), // "getCodecInfo"
QT_MOC_LITERAL(14, 132, 4), // "mime"
QT_MOC_LITERAL(15, 137, 12) // "codecsFolder"

    },
    "AbstractCodecsModel\0enableCodec\0\0id\0"
    "status\0moveCodec\0source\0destination\0"
    "setBitrate\0bitrate\0setRecvFmtp\0recvFmtp\0"
    "reload\0getCodecInfo\0mime\0codecsFolder"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AbstractCodecsModel[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       1,   68, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // methods: name, argc, parameters, tag, flags
       1,    2,   44,    2, 0x02 /* Public */,
       5,    2,   49,    2, 0x02 /* Public */,
       8,    2,   54,    2, 0x02 /* Public */,
      10,    2,   59,    2, 0x02 /* Public */,
      12,    0,   64,    2, 0x02 /* Public */,
      13,    1,   65,    2, 0x02 /* Public */,

 // methods: parameters
    QMetaType::Void, QMetaType::Int, QMetaType::Bool,    3,    4,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    6,    7,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    3,    9,
    QMetaType::Void, QMetaType::Int, QMetaType::QString,    3,   11,
    QMetaType::Void,
    QMetaType::QVariantMap, QMetaType::QString,   14,

 // properties: name, type, flags
      15, QMetaType::QString, 0x00095401,

       0        // eod
};

void AbstractCodecsModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<AbstractCodecsModel *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->enableCodec((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 1: _t->moveCodec((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 2: _t->setBitrate((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 3: _t->setRecvFmtp((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 4: _t->reload(); break;
        case 5: { QVariantMap _r = _t->getCodecInfo((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QVariantMap*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<AbstractCodecsModel *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->getCodecsFolder(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject AbstractCodecsModel::staticMetaObject = { {
    &ProxyAbstractListModel<QVariantMap>::staticMetaObject,
    qt_meta_stringdata_AbstractCodecsModel.data,
    qt_meta_data_AbstractCodecsModel,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *AbstractCodecsModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AbstractCodecsModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_AbstractCodecsModel.stringdata0))
        return static_cast<void*>(this);
    return ProxyAbstractListModel<QVariantMap>::qt_metacast(_clname);
}

int AbstractCodecsModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ProxyAbstractListModel<QVariantMap>::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 6;
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 1;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
