/****************************************************************************
** Meta object code from reading C++ file 'TunnelConfigModel.hpp'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.13.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../linphone-app/src/components/tunnel/TunnelConfigModel.hpp"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'TunnelConfigModel.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.13.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_TunnelConfigModel_t {
    QByteArrayData data[14];
    char stringdata0[157];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_TunnelConfigModel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_TunnelConfigModel_t qt_meta_stringdata_TunnelConfigModel = {
    {
QT_MOC_LITERAL(0, 0, 17), // "TunnelConfigModel"
QT_MOC_LITERAL(1, 18, 11), // "hostChanged"
QT_MOC_LITERAL(2, 30, 0), // ""
QT_MOC_LITERAL(3, 31, 12), // "host2Changed"
QT_MOC_LITERAL(4, 44, 11), // "portChanged"
QT_MOC_LITERAL(5, 56, 12), // "port2Changed"
QT_MOC_LITERAL(6, 69, 26), // "remoteUdpMirrorPortChanged"
QT_MOC_LITERAL(7, 96, 12), // "delayChanged"
QT_MOC_LITERAL(8, 109, 4), // "host"
QT_MOC_LITERAL(9, 114, 5), // "host2"
QT_MOC_LITERAL(10, 120, 4), // "port"
QT_MOC_LITERAL(11, 125, 5), // "port2"
QT_MOC_LITERAL(12, 131, 19), // "remoteUdpMirrorPort"
QT_MOC_LITERAL(13, 151, 5) // "delay"

    },
    "TunnelConfigModel\0hostChanged\0\0"
    "host2Changed\0portChanged\0port2Changed\0"
    "remoteUdpMirrorPortChanged\0delayChanged\0"
    "host\0host2\0port\0port2\0remoteUdpMirrorPort\0"
    "delay"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_TunnelConfigModel[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       6,   50, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       6,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   44,    2, 0x06 /* Public */,
       3,    0,   45,    2, 0x06 /* Public */,
       4,    0,   46,    2, 0x06 /* Public */,
       5,    0,   47,    2, 0x06 /* Public */,
       6,    0,   48,    2, 0x06 /* Public */,
       7,    0,   49,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags
       8, QMetaType::QString, 0x00495103,
       9, QMetaType::QString, 0x00495103,
      10, QMetaType::Int, 0x00495103,
      11, QMetaType::Int, 0x00495103,
      12, QMetaType::Int, 0x00495103,
      13, QMetaType::Int, 0x00495103,

 // properties: notify_signal_id
       0,
       1,
       2,
       3,
       4,
       5,

       0        // eod
};

void TunnelConfigModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<TunnelConfigModel *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->hostChanged(); break;
        case 1: _t->host2Changed(); break;
        case 2: _t->portChanged(); break;
        case 3: _t->port2Changed(); break;
        case 4: _t->remoteUdpMirrorPortChanged(); break;
        case 5: _t->delayChanged(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (TunnelConfigModel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TunnelConfigModel::hostChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (TunnelConfigModel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TunnelConfigModel::host2Changed)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (TunnelConfigModel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TunnelConfigModel::portChanged)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (TunnelConfigModel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TunnelConfigModel::port2Changed)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (TunnelConfigModel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TunnelConfigModel::remoteUdpMirrorPortChanged)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (TunnelConfigModel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TunnelConfigModel::delayChanged)) {
                *result = 5;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<TunnelConfigModel *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->getHost(); break;
        case 1: *reinterpret_cast< QString*>(_v) = _t->getHost2(); break;
        case 2: *reinterpret_cast< int*>(_v) = _t->getPort(); break;
        case 3: *reinterpret_cast< int*>(_v) = _t->getPort2(); break;
        case 4: *reinterpret_cast< int*>(_v) = _t->getRemoteUdpMirrorPort(); break;
        case 5: *reinterpret_cast< int*>(_v) = _t->getDelay(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<TunnelConfigModel *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setHost(*reinterpret_cast< QString*>(_v)); break;
        case 1: _t->setHost2(*reinterpret_cast< QString*>(_v)); break;
        case 2: _t->setPort(*reinterpret_cast< int*>(_v)); break;
        case 3: _t->setPort2(*reinterpret_cast< int*>(_v)); break;
        case 4: _t->setRemoteUdpMirrorPort(*reinterpret_cast< int*>(_v)); break;
        case 5: _t->setDelay(*reinterpret_cast< int*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject TunnelConfigModel::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_TunnelConfigModel.data,
    qt_meta_data_TunnelConfigModel,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *TunnelConfigModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TunnelConfigModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_TunnelConfigModel.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int TunnelConfigModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 6;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void TunnelConfigModel::hostChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void TunnelConfigModel::host2Changed()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void TunnelConfigModel::portChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void TunnelConfigModel::port2Changed()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void TunnelConfigModel::remoteUdpMirrorPortChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void TunnelConfigModel::delayChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
