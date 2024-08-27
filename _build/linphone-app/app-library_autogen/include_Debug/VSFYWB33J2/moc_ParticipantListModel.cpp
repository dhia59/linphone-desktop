/****************************************************************************
** Meta object code from reading C++ file 'ParticipantListModel.hpp'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.13.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../linphone-app/src/components/participant/ParticipantListModel.hpp"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ParticipantListModel.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.13.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ParticipantListModel_t {
    QByteArrayData data[37];
    char stringdata0[778];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ParticipantListModel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ParticipantListModel_t qt_meta_stringdata_ParticipantListModel = {
    {
QT_MOC_LITERAL(0, 0, 20), // "ParticipantListModel"
QT_MOC_LITERAL(1, 21, 20), // "securityLevelChanged"
QT_MOC_LITERAL(2, 42, 0), // ""
QT_MOC_LITERAL(3, 43, 26), // "deviceSecurityLevelChanged"
QT_MOC_LITERAL(4, 70, 40), // "std::shared_ptr<const linphon..."
QT_MOC_LITERAL(5, 111, 6), // "device"
QT_MOC_LITERAL(6, 118, 19), // "participantsChanged"
QT_MOC_LITERAL(7, 138, 14), // "setAdminStatus"
QT_MOC_LITERAL(8, 153, 38), // "std::shared_ptr<linphone::Par..."
QT_MOC_LITERAL(9, 192, 11), // "participant"
QT_MOC_LITERAL(10, 204, 7), // "isAdmin"
QT_MOC_LITERAL(11, 212, 15), // "onSecurityEvent"
QT_MOC_LITERAL(12, 228, 41), // "std::shared_ptr<const linphon..."
QT_MOC_LITERAL(13, 270, 8), // "eventLog"
QT_MOC_LITERAL(14, 279, 18), // "onConferenceJoined"
QT_MOC_LITERAL(15, 298, 18), // "onParticipantAdded"
QT_MOC_LITERAL(16, 317, 44), // "std::shared_ptr<const linphon..."
QT_MOC_LITERAL(17, 362, 7), // "address"
QT_MOC_LITERAL(18, 370, 20), // "onParticipantRemoved"
QT_MOC_LITERAL(19, 391, 31), // "onParticipantAdminStatusChanged"
QT_MOC_LITERAL(20, 423, 24), // "onParticipantDeviceAdded"
QT_MOC_LITERAL(21, 448, 26), // "onParticipantDeviceRemoved"
QT_MOC_LITERAL(22, 475, 46), // "onParticipantRegistrationSubs..."
QT_MOC_LITERAL(23, 522, 18), // "participantAddress"
QT_MOC_LITERAL(24, 541, 48), // "onParticipantRegistrationUnsu..."
QT_MOC_LITERAL(25, 590, 14), // "onStateChanged"
QT_MOC_LITERAL(26, 605, 6), // "remove"
QT_MOC_LITERAL(27, 612, 17), // "ParticipantModel*"
QT_MOC_LITERAL(28, 630, 8), // "importer"
QT_MOC_LITERAL(29, 639, 16), // "getChatRoomModel"
QT_MOC_LITERAL(30, 656, 14), // "ChatRoomModel*"
QT_MOC_LITERAL(31, 671, 18), // "getConferenceModel"
QT_MOC_LITERAL(32, 690, 16), // "ConferenceModel*"
QT_MOC_LITERAL(33, 707, 17), // "addressesToString"
QT_MOC_LITERAL(34, 725, 20), // "displayNamesToString"
QT_MOC_LITERAL(35, 746, 17), // "usernamesToString"
QT_MOC_LITERAL(36, 764, 13) // "chatRoomModel"

    },
    "ParticipantListModel\0securityLevelChanged\0"
    "\0deviceSecurityLevelChanged\0"
    "std::shared_ptr<const linphone::Address>\0"
    "device\0participantsChanged\0setAdminStatus\0"
    "std::shared_ptr<linphone::Participant>\0"
    "participant\0isAdmin\0onSecurityEvent\0"
    "std::shared_ptr<const linphone::EventLog>\0"
    "eventLog\0onConferenceJoined\0"
    "onParticipantAdded\0"
    "std::shared_ptr<const linphone::Participant>\0"
    "address\0onParticipantRemoved\0"
    "onParticipantAdminStatusChanged\0"
    "onParticipantDeviceAdded\0"
    "onParticipantDeviceRemoved\0"
    "onParticipantRegistrationSubscriptionRequested\0"
    "participantAddress\0"
    "onParticipantRegistrationUnsubscriptionRequested\0"
    "onStateChanged\0remove\0ParticipantModel*\0"
    "importer\0getChatRoomModel\0ChatRoomModel*\0"
    "getConferenceModel\0ConferenceModel*\0"
    "addressesToString\0displayNamesToString\0"
    "usernamesToString\0chatRoomModel"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ParticipantListModel[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      26,   14, // methods
       4,  206, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,  144,    2, 0x06 /* Public */,
       3,    1,  145,    2, 0x06 /* Public */,
       6,    0,  148,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       7,    2,  149,    2, 0x0a /* Public */,
      11,    1,  154,    2, 0x0a /* Public */,
      14,    0,  157,    2, 0x0a /* Public */,
      15,    1,  158,    2, 0x0a /* Public */,
      15,    1,  161,    2, 0x0a /* Public */,
      15,    1,  164,    2, 0x0a /* Public */,
      18,    1,  167,    2, 0x0a /* Public */,
      18,    1,  170,    2, 0x0a /* Public */,
      18,    1,  173,    2, 0x0a /* Public */,
      19,    1,  176,    2, 0x0a /* Public */,
      19,    1,  179,    2, 0x0a /* Public */,
      19,    1,  182,    2, 0x0a /* Public */,
      20,    1,  185,    2, 0x0a /* Public */,
      21,    1,  188,    2, 0x0a /* Public */,
      22,    1,  191,    2, 0x0a /* Public */,
      24,    1,  194,    2, 0x0a /* Public */,
      25,    0,  197,    2, 0x0a /* Public */,

 // methods: name, argc, parameters, tag, flags
      26,    1,  198,    2, 0x02 /* Public */,
      29,    0,  201,    2, 0x02 /* Public */,
      31,    0,  202,    2, 0x02 /* Public */,
      33,    0,  203,    2, 0x02 /* Public */,
      34,    0,  204,    2, 0x02 /* Public */,
      35,    0,  205,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 8, QMetaType::Bool,    9,   10,
    QMetaType::Void, 0x80000000 | 12,   13,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 16,    9,
    QMetaType::Void, 0x80000000 | 12,   13,
    QMetaType::Void, 0x80000000 | 4,   17,
    QMetaType::Void, 0x80000000 | 16,    9,
    QMetaType::Void, 0x80000000 | 12,   13,
    QMetaType::Void, 0x80000000 | 4,   17,
    QMetaType::Void, 0x80000000 | 16,    9,
    QMetaType::Void, 0x80000000 | 12,   13,
    QMetaType::Void, 0x80000000 | 4,   17,
    QMetaType::Void, 0x80000000 | 12,   13,
    QMetaType::Void, 0x80000000 | 12,   13,
    QMetaType::Void, 0x80000000 | 4,   23,
    QMetaType::Void, 0x80000000 | 4,   23,
    QMetaType::Void,

 // methods: parameters
    QMetaType::Void, 0x80000000 | 27,   28,
    0x80000000 | 30,
    0x80000000 | 32,
    QMetaType::QString,
    QMetaType::QString,
    QMetaType::QString,

 // properties: name, type, flags
      36, 0x80000000 | 30, 0x00095409,
      33, QMetaType::QString, 0x00495001,
      34, QMetaType::QString, 0x00495001,
      35, QMetaType::QString, 0x00495001,

 // properties: notify_signal_id
       0,
       2,
       2,
       2,

       0        // eod
};

void ParticipantListModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ParticipantListModel *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->securityLevelChanged(); break;
        case 1: _t->deviceSecurityLevelChanged((*reinterpret_cast< std::shared_ptr<const linphone::Address>(*)>(_a[1]))); break;
        case 2: _t->participantsChanged(); break;
        case 3: _t->setAdminStatus((*reinterpret_cast< const std::shared_ptr<linphone::Participant>(*)>(_a[1])),(*reinterpret_cast< const bool(*)>(_a[2]))); break;
        case 4: _t->onSecurityEvent((*reinterpret_cast< const std::shared_ptr<const linphone::EventLog>(*)>(_a[1]))); break;
        case 5: _t->onConferenceJoined(); break;
        case 6: _t->onParticipantAdded((*reinterpret_cast< const std::shared_ptr<const linphone::Participant>(*)>(_a[1]))); break;
        case 7: _t->onParticipantAdded((*reinterpret_cast< const std::shared_ptr<const linphone::EventLog>(*)>(_a[1]))); break;
        case 8: _t->onParticipantAdded((*reinterpret_cast< const std::shared_ptr<const linphone::Address>(*)>(_a[1]))); break;
        case 9: _t->onParticipantRemoved((*reinterpret_cast< const std::shared_ptr<const linphone::Participant>(*)>(_a[1]))); break;
        case 10: _t->onParticipantRemoved((*reinterpret_cast< const std::shared_ptr<const linphone::EventLog>(*)>(_a[1]))); break;
        case 11: _t->onParticipantRemoved((*reinterpret_cast< const std::shared_ptr<const linphone::Address>(*)>(_a[1]))); break;
        case 12: _t->onParticipantAdminStatusChanged((*reinterpret_cast< const std::shared_ptr<const linphone::Participant>(*)>(_a[1]))); break;
        case 13: _t->onParticipantAdminStatusChanged((*reinterpret_cast< const std::shared_ptr<const linphone::EventLog>(*)>(_a[1]))); break;
        case 14: _t->onParticipantAdminStatusChanged((*reinterpret_cast< const std::shared_ptr<const linphone::Address>(*)>(_a[1]))); break;
        case 15: _t->onParticipantDeviceAdded((*reinterpret_cast< const std::shared_ptr<const linphone::EventLog>(*)>(_a[1]))); break;
        case 16: _t->onParticipantDeviceRemoved((*reinterpret_cast< const std::shared_ptr<const linphone::EventLog>(*)>(_a[1]))); break;
        case 17: _t->onParticipantRegistrationSubscriptionRequested((*reinterpret_cast< const std::shared_ptr<const linphone::Address>(*)>(_a[1]))); break;
        case 18: _t->onParticipantRegistrationUnsubscriptionRequested((*reinterpret_cast< const std::shared_ptr<const linphone::Address>(*)>(_a[1]))); break;
        case 19: _t->onStateChanged(); break;
        case 20: _t->remove((*reinterpret_cast< ParticipantModel*(*)>(_a[1]))); break;
        case 21: { ChatRoomModel* _r = _t->getChatRoomModel();
            if (_a[0]) *reinterpret_cast< ChatRoomModel**>(_a[0]) = std::move(_r); }  break;
        case 22: { ConferenceModel* _r = _t->getConferenceModel();
            if (_a[0]) *reinterpret_cast< ConferenceModel**>(_a[0]) = std::move(_r); }  break;
        case 23: { QString _r = _t->addressesToString();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 24: { QString _r = _t->displayNamesToString();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 25: { QString _r = _t->usernamesToString();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 20:
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
            using _t = void (ParticipantListModel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ParticipantListModel::securityLevelChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (ParticipantListModel::*)(std::shared_ptr<const linphone::Address> );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ParticipantListModel::deviceSecurityLevelChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (ParticipantListModel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ParticipantListModel::participantsChanged)) {
                *result = 2;
                return;
            }
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< ChatRoomModel* >(); break;
        }
    }

#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<ParticipantListModel *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< ChatRoomModel**>(_v) = _t->getChatRoomModel(); break;
        case 1: *reinterpret_cast< QString*>(_v) = _t->addressesToString(); break;
        case 2: *reinterpret_cast< QString*>(_v) = _t->displayNamesToString(); break;
        case 3: *reinterpret_cast< QString*>(_v) = _t->usernamesToString(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject ParticipantListModel::staticMetaObject = { {
    &ProxyListModel::staticMetaObject,
    qt_meta_stringdata_ParticipantListModel.data,
    qt_meta_data_ParticipantListModel,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *ParticipantListModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ParticipantListModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ParticipantListModel.stringdata0))
        return static_cast<void*>(this);
    return ProxyListModel::qt_metacast(_clname);
}

int ParticipantListModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ProxyListModel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 26)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 26;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 26)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 26;
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 4;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void ParticipantListModel::securityLevelChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void ParticipantListModel::deviceSecurityLevelChanged(std::shared_ptr<const linphone::Address> _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void ParticipantListModel::participantsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
