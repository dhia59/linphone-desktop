/****************************************************************************
** Meta object code from reading C++ file 'ParticipantModel.hpp'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.13.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../linphone-app/src/components/participant/ParticipantModel.hpp"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ParticipantModel.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.13.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ParticipantModel_t {
    QByteArrayData data[32];
    char stringdata0[529];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ParticipantModel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ParticipantModel_t qt_meta_stringdata_ParticipantModel = {
    {
QT_MOC_LITERAL(0, 0, 16), // "ParticipantModel"
QT_MOC_LITERAL(1, 17, 20), // "securityLevelChanged"
QT_MOC_LITERAL(2, 38, 0), // ""
QT_MOC_LITERAL(3, 39, 26), // "deviceSecurityLevelChanged"
QT_MOC_LITERAL(4, 66, 40), // "std::shared_ptr<const linphon..."
QT_MOC_LITERAL(5, 107, 6), // "device"
QT_MOC_LITERAL(6, 114, 17), // "sipAddressChanged"
QT_MOC_LITERAL(7, 132, 17), // "updateAdminStatus"
QT_MOC_LITERAL(8, 150, 38), // "std::shared_ptr<linphone::Par..."
QT_MOC_LITERAL(9, 189, 11), // "participant"
QT_MOC_LITERAL(10, 201, 7), // "isAdmin"
QT_MOC_LITERAL(11, 209, 18), // "adminStatusChanged"
QT_MOC_LITERAL(12, 228, 18), // "deviceCountChanged"
QT_MOC_LITERAL(13, 247, 15), // "invitingChanged"
QT_MOC_LITERAL(14, 263, 17), // "invitationTimeout"
QT_MOC_LITERAL(15, 281, 17), // "ParticipantModel*"
QT_MOC_LITERAL(16, 299, 5), // "model"
QT_MOC_LITERAL(17, 305, 22), // "onSecurityLevelChanged"
QT_MOC_LITERAL(18, 328, 28), // "onDeviceSecurityLevelChanged"
QT_MOC_LITERAL(19, 357, 17), // "onEndOfInvitation"
QT_MOC_LITERAL(20, 375, 15), // "getProxyDevices"
QT_MOC_LITERAL(21, 391, 28), // "ParticipantDeviceProxyModel*"
QT_MOC_LITERAL(22, 420, 12), // "contactModel"
QT_MOC_LITERAL(23, 433, 13), // "ContactModel*"
QT_MOC_LITERAL(24, 447, 10), // "sipAddress"
QT_MOC_LITERAL(25, 458, 11), // "adminStatus"
QT_MOC_LITERAL(26, 470, 4), // "isMe"
QT_MOC_LITERAL(27, 475, 12), // "creationTime"
QT_MOC_LITERAL(28, 488, 5), // "focus"
QT_MOC_LITERAL(29, 494, 13), // "securityLevel"
QT_MOC_LITERAL(30, 508, 11), // "deviceCount"
QT_MOC_LITERAL(31, 520, 8) // "inviting"

    },
    "ParticipantModel\0securityLevelChanged\0"
    "\0deviceSecurityLevelChanged\0"
    "std::shared_ptr<const linphone::Address>\0"
    "device\0sipAddressChanged\0updateAdminStatus\0"
    "std::shared_ptr<linphone::Participant>\0"
    "participant\0isAdmin\0adminStatusChanged\0"
    "deviceCountChanged\0invitingChanged\0"
    "invitationTimeout\0ParticipantModel*\0"
    "model\0onSecurityLevelChanged\0"
    "onDeviceSecurityLevelChanged\0"
    "onEndOfInvitation\0getProxyDevices\0"
    "ParticipantDeviceProxyModel*\0contactModel\0"
    "ContactModel*\0sipAddress\0adminStatus\0"
    "isMe\0creationTime\0focus\0securityLevel\0"
    "deviceCount\0inviting"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ParticipantModel[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       9,   96, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       8,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   74,    2, 0x06 /* Public */,
       3,    1,   75,    2, 0x06 /* Public */,
       6,    0,   78,    2, 0x06 /* Public */,
       7,    2,   79,    2, 0x06 /* Public */,
      11,    0,   84,    2, 0x06 /* Public */,
      12,    0,   85,    2, 0x06 /* Public */,
      13,    0,   86,    2, 0x06 /* Public */,
      14,    1,   87,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      17,    0,   90,    2, 0x0a /* Public */,
      18,    1,   91,    2, 0x0a /* Public */,
      19,    0,   94,    2, 0x0a /* Public */,

 // methods: name, argc, parameters, tag, flags
      20,    0,   95,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 8, QMetaType::Bool,    9,   10,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 15,   16,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void,

 // methods: parameters
    0x80000000 | 21,

 // properties: name, type, flags
      22, 0x80000000 | 23, 0x00095409,
      24, QMetaType::QString, 0x00495103,
      25, QMetaType::Bool, 0x00495103,
      26, QMetaType::Bool, 0x00095401,
      27, QMetaType::QDateTime, 0x00095401,
      28, QMetaType::Bool, 0x00095401,
      29, QMetaType::Int, 0x00495001,
      30, QMetaType::Int, 0x00495001,
      31, QMetaType::Bool, 0x00495001,

 // properties: notify_signal_id
       0,
       2,
       4,
       0,
       0,
       0,
       0,
       5,
       6,

       0        // eod
};

void ParticipantModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ParticipantModel *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->securityLevelChanged(); break;
        case 1: _t->deviceSecurityLevelChanged((*reinterpret_cast< std::shared_ptr<const linphone::Address>(*)>(_a[1]))); break;
        case 2: _t->sipAddressChanged(); break;
        case 3: _t->updateAdminStatus((*reinterpret_cast< const std::shared_ptr<linphone::Participant>(*)>(_a[1])),(*reinterpret_cast< const bool(*)>(_a[2]))); break;
        case 4: _t->adminStatusChanged(); break;
        case 5: _t->deviceCountChanged(); break;
        case 6: _t->invitingChanged(); break;
        case 7: _t->invitationTimeout((*reinterpret_cast< ParticipantModel*(*)>(_a[1]))); break;
        case 8: _t->onSecurityLevelChanged(); break;
        case 9: _t->onDeviceSecurityLevelChanged((*reinterpret_cast< std::shared_ptr<const linphone::Address>(*)>(_a[1]))); break;
        case 10: _t->onEndOfInvitation(); break;
        case 11: { ParticipantDeviceProxyModel* _r = _t->getProxyDevices();
            if (_a[0]) *reinterpret_cast< ParticipantDeviceProxyModel**>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 7:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< ParticipantModel* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (ParticipantModel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ParticipantModel::securityLevelChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (ParticipantModel::*)(std::shared_ptr<const linphone::Address> );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ParticipantModel::deviceSecurityLevelChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (ParticipantModel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ParticipantModel::sipAddressChanged)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (ParticipantModel::*)(const std::shared_ptr<linphone::Participant> , const bool & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ParticipantModel::updateAdminStatus)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (ParticipantModel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ParticipantModel::adminStatusChanged)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (ParticipantModel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ParticipantModel::deviceCountChanged)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (ParticipantModel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ParticipantModel::invitingChanged)) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (ParticipantModel::*)(ParticipantModel * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ParticipantModel::invitationTimeout)) {
                *result = 7;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<ParticipantModel *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< ContactModel**>(_v) = _t->getContactModel(); break;
        case 1: *reinterpret_cast< QString*>(_v) = _t->getSipAddress(); break;
        case 2: *reinterpret_cast< bool*>(_v) = _t->getAdminStatus(); break;
        case 3: *reinterpret_cast< bool*>(_v) = _t->isMe(); break;
        case 4: *reinterpret_cast< QDateTime*>(_v) = _t->getCreationTime(); break;
        case 5: *reinterpret_cast< bool*>(_v) = _t->isFocus(); break;
        case 6: *reinterpret_cast< int*>(_v) = _t->getSecurityLevel(); break;
        case 7: *reinterpret_cast< int*>(_v) = _t->getDeviceCount(); break;
        case 8: *reinterpret_cast< bool*>(_v) = _t->getInviting(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<ParticipantModel *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 1: _t->setSipAddress(*reinterpret_cast< QString*>(_v)); break;
        case 2: _t->setAdminStatus(*reinterpret_cast< bool*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject ParticipantModel::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_ParticipantModel.data,
    qt_meta_data_ParticipantModel,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *ParticipantModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ParticipantModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ParticipantModel.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int ParticipantModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 9;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 9;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 9;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 9;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 9;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void ParticipantModel::securityLevelChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void ParticipantModel::deviceSecurityLevelChanged(std::shared_ptr<const linphone::Address> _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void ParticipantModel::sipAddressChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void ParticipantModel::updateAdminStatus(const std::shared_ptr<linphone::Participant> _t1, const bool & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void ParticipantModel::adminStatusChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void ParticipantModel::deviceCountChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}

// SIGNAL 6
void ParticipantModel::invitingChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 6, nullptr);
}

// SIGNAL 7
void ParticipantModel::invitationTimeout(ParticipantModel * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
