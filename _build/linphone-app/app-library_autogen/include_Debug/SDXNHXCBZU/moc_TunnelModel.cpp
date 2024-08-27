/****************************************************************************
** Meta object code from reading C++ file 'TunnelModel.hpp'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.13.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../linphone-app/src/components/tunnel/TunnelModel.hpp"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'TunnelModel.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.13.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_TunnelModel_t {
    QByteArrayData data[26];
    char stringdata0[343];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_TunnelModel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_TunnelModel_t qt_meta_stringdata_TunnelModel = {
    {
QT_MOC_LITERAL(0, 0, 11), // "TunnelModel"
QT_MOC_LITERAL(1, 12, 13), // "domainChanged"
QT_MOC_LITERAL(2, 26, 0), // ""
QT_MOC_LITERAL(3, 27, 15), // "usernameChanged"
QT_MOC_LITERAL(4, 43, 17), // "sipAddressChanged"
QT_MOC_LITERAL(5, 61, 22), // "dualModeEnabledChanged"
QT_MOC_LITERAL(6, 84, 11), // "modeChanged"
QT_MOC_LITERAL(7, 96, 17), // "sipEnabledChanged"
QT_MOC_LITERAL(8, 114, 21), // "getTunnelProxyConfigs"
QT_MOC_LITERAL(9, 136, 23), // "TunnelConfigProxyModel*"
QT_MOC_LITERAL(10, 160, 5), // "apply"
QT_MOC_LITERAL(11, 166, 15), // "addTunnelConfig"
QT_MOC_LITERAL(12, 182, 18), // "removeTunnelConfig"
QT_MOC_LITERAL(13, 201, 18), // "TunnelConfigModel*"
QT_MOC_LITERAL(14, 220, 5), // "model"
QT_MOC_LITERAL(15, 226, 12), // "getActivated"
QT_MOC_LITERAL(16, 239, 12), // "setHttpProxy"
QT_MOC_LITERAL(17, 252, 4), // "host"
QT_MOC_LITERAL(18, 257, 4), // "port"
QT_MOC_LITERAL(19, 262, 8), // "username"
QT_MOC_LITERAL(20, 271, 6), // "passwd"
QT_MOC_LITERAL(21, 278, 6), // "domain"
QT_MOC_LITERAL(22, 285, 15), // "dualModeEnabled"
QT_MOC_LITERAL(23, 301, 4), // "mode"
QT_MOC_LITERAL(24, 306, 25), // "LinphoneEnums::TunnelMode"
QT_MOC_LITERAL(25, 332, 10) // "sipEnabled"

    },
    "TunnelModel\0domainChanged\0\0usernameChanged\0"
    "sipAddressChanged\0dualModeEnabledChanged\0"
    "modeChanged\0sipEnabledChanged\0"
    "getTunnelProxyConfigs\0TunnelConfigProxyModel*\0"
    "apply\0addTunnelConfig\0removeTunnelConfig\0"
    "TunnelConfigModel*\0model\0getActivated\0"
    "setHttpProxy\0host\0port\0username\0passwd\0"
    "domain\0dualModeEnabled\0mode\0"
    "LinphoneEnums::TunnelMode\0sipEnabled"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_TunnelModel[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       5,   96, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       6,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   74,    2, 0x06 /* Public */,
       3,    0,   75,    2, 0x06 /* Public */,
       4,    0,   76,    2, 0x06 /* Public */,
       5,    0,   77,    2, 0x06 /* Public */,
       6,    0,   78,    2, 0x06 /* Public */,
       7,    0,   79,    2, 0x06 /* Public */,

 // methods: name, argc, parameters, tag, flags
       8,    0,   80,    2, 0x02 /* Public */,
      10,    0,   81,    2, 0x02 /* Public */,
      11,    0,   82,    2, 0x02 /* Public */,
      12,    1,   83,    2, 0x02 /* Public */,
      15,    0,   86,    2, 0x02 /* Public */,
      16,    4,   87,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // methods: parameters
    0x80000000 | 9,
    QMetaType::Bool,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 13,   14,
    QMetaType::Bool,
    QMetaType::Void, QMetaType::QString, QMetaType::Int, QMetaType::QString, QMetaType::QString,   17,   18,   19,   20,

 // properties: name, type, flags
      21, QMetaType::QString, 0x00495103,
      19, QMetaType::QString, 0x00495103,
      22, QMetaType::Bool, 0x00495103,
      23, 0x80000000 | 24, 0x0049510b,
      25, QMetaType::Bool, 0x00495103,

 // properties: notify_signal_id
       0,
       1,
       3,
       4,
       5,

       0        // eod
};

void TunnelModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<TunnelModel *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->domainChanged(); break;
        case 1: _t->usernameChanged(); break;
        case 2: _t->sipAddressChanged(); break;
        case 3: _t->dualModeEnabledChanged(); break;
        case 4: _t->modeChanged(); break;
        case 5: _t->sipEnabledChanged(); break;
        case 6: { TunnelConfigProxyModel* _r = _t->getTunnelProxyConfigs();
            if (_a[0]) *reinterpret_cast< TunnelConfigProxyModel**>(_a[0]) = std::move(_r); }  break;
        case 7: { bool _r = _t->apply();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 8: _t->addTunnelConfig(); break;
        case 9: _t->removeTunnelConfig((*reinterpret_cast< TunnelConfigModel*(*)>(_a[1]))); break;
        case 10: { bool _r = _t->getActivated();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 11: _t->setHttpProxy((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const QString(*)>(_a[4]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (TunnelModel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TunnelModel::domainChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (TunnelModel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TunnelModel::usernameChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (TunnelModel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TunnelModel::sipAddressChanged)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (TunnelModel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TunnelModel::dualModeEnabledChanged)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (TunnelModel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TunnelModel::modeChanged)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (TunnelModel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TunnelModel::sipEnabledChanged)) {
                *result = 5;
                return;
            }
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 3:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< LinphoneEnums::TunnelMode >(); break;
        }
    }

#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<TunnelModel *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->getDomain(); break;
        case 1: *reinterpret_cast< QString*>(_v) = _t->getUsername(); break;
        case 2: *reinterpret_cast< bool*>(_v) = _t->getDualModeEnabled(); break;
        case 3: *reinterpret_cast< LinphoneEnums::TunnelMode*>(_v) = _t->getMode(); break;
        case 4: *reinterpret_cast< bool*>(_v) = _t->getSipEnabled(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<TunnelModel *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setDomain(*reinterpret_cast< QString*>(_v)); break;
        case 1: _t->setUsername(*reinterpret_cast< QString*>(_v)); break;
        case 2: _t->setDualModeEnabled(*reinterpret_cast< bool*>(_v)); break;
        case 3: _t->setMode(*reinterpret_cast< LinphoneEnums::TunnelMode*>(_v)); break;
        case 4: _t->setSipEnabled(*reinterpret_cast< bool*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject TunnelModel::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_TunnelModel.data,
    qt_meta_data_TunnelModel,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *TunnelModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TunnelModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_TunnelModel.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int TunnelModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 12)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 12;
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 5;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void TunnelModel::domainChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void TunnelModel::usernameChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void TunnelModel::sipAddressChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void TunnelModel::dualModeEnabledChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void TunnelModel::modeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void TunnelModel::sipEnabledChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
