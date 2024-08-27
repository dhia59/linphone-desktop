/****************************************************************************
** Meta object code from reading C++ file 'ConferenceModel.hpp'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.13.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../linphone-app/src/components/conference/ConferenceModel.hpp"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ConferenceModel.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.13.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ConferenceModel_t {
    QByteArrayData data[37];
    char stringdata0[793];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ConferenceModel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ConferenceModel_t qt_meta_stringdata_ConferenceModel = {
    {
QT_MOC_LITERAL(0, 0, 15), // "ConferenceModel"
QT_MOC_LITERAL(1, 16, 30), // "activeSpeakerParticipantDevice"
QT_MOC_LITERAL(2, 47, 0), // ""
QT_MOC_LITERAL(3, 48, 50), // "std::shared_ptr<const linphon..."
QT_MOC_LITERAL(4, 99, 17), // "participantDevice"
QT_MOC_LITERAL(5, 117, 23), // "localParticipantChanged"
QT_MOC_LITERAL(6, 141, 16), // "participantAdded"
QT_MOC_LITERAL(7, 158, 44), // "std::shared_ptr<const linphon..."
QT_MOC_LITERAL(8, 203, 11), // "participant"
QT_MOC_LITERAL(9, 215, 18), // "participantRemoved"
QT_MOC_LITERAL(10, 234, 29), // "participantAdminStatusChanged"
QT_MOC_LITERAL(11, 264, 22), // "participantDeviceAdded"
QT_MOC_LITERAL(12, 287, 24), // "participantDeviceRemoved"
QT_MOC_LITERAL(13, 312, 39), // "participantDeviceMediaCapabil..."
QT_MOC_LITERAL(14, 352, 41), // "participantDeviceMediaAvailab..."
QT_MOC_LITERAL(15, 394, 34), // "participantDeviceIsSpeakingCh..."
QT_MOC_LITERAL(16, 429, 6), // "device"
QT_MOC_LITERAL(17, 436, 10), // "isSpeaking"
QT_MOC_LITERAL(18, 447, 29), // "participantDeviceStateChanged"
QT_MOC_LITERAL(19, 477, 32), // "linphone::ParticipantDeviceState"
QT_MOC_LITERAL(20, 510, 5), // "state"
QT_MOC_LITERAL(21, 516, 22), // "conferenceStateChanged"
QT_MOC_LITERAL(22, 539, 27), // "linphone::Conference::State"
QT_MOC_LITERAL(23, 567, 8), // "newState"
QT_MOC_LITERAL(24, 576, 14), // "subjectChanged"
QT_MOC_LITERAL(25, 591, 14), // "isReadyChanged"
QT_MOC_LITERAL(26, 606, 29), // "participantDeviceCountChanged"
QT_MOC_LITERAL(27, 636, 17), // "getElapsedSeconds"
QT_MOC_LITERAL(28, 654, 19), // "getLocalParticipant"
QT_MOC_LITERAL(29, 674, 17), // "ParticipantModel*"
QT_MOC_LITERAL(30, 692, 7), // "subject"
QT_MOC_LITERAL(31, 700, 9), // "startDate"
QT_MOC_LITERAL(32, 710, 12), // "participants"
QT_MOC_LITERAL(33, 723, 21), // "ParticipantListModel*"
QT_MOC_LITERAL(34, 745, 16), // "localParticipant"
QT_MOC_LITERAL(35, 762, 7), // "isReady"
QT_MOC_LITERAL(36, 770, 22) // "participantDeviceCount"

    },
    "ConferenceModel\0activeSpeakerParticipantDevice\0"
    "\0std::shared_ptr<const linphone::ParticipantDevice>\0"
    "participantDevice\0localParticipantChanged\0"
    "participantAdded\0"
    "std::shared_ptr<const linphone::Participant>\0"
    "participant\0participantRemoved\0"
    "participantAdminStatusChanged\0"
    "participantDeviceAdded\0participantDeviceRemoved\0"
    "participantDeviceMediaCapabilityChanged\0"
    "participantDeviceMediaAvailabilityChanged\0"
    "participantDeviceIsSpeakingChanged\0"
    "device\0isSpeaking\0participantDeviceStateChanged\0"
    "linphone::ParticipantDeviceState\0state\0"
    "conferenceStateChanged\0"
    "linphone::Conference::State\0newState\0"
    "subjectChanged\0isReadyChanged\0"
    "participantDeviceCountChanged\0"
    "getElapsedSeconds\0getLocalParticipant\0"
    "ParticipantModel*\0subject\0startDate\0"
    "participants\0ParticipantListModel*\0"
    "localParticipant\0isReady\0"
    "participantDeviceCount"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ConferenceModel[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      17,   14, // methods
       6,  142, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      15,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   99,    2, 0x06 /* Public */,
       5,    0,  102,    2, 0x06 /* Public */,
       6,    1,  103,    2, 0x06 /* Public */,
       9,    1,  106,    2, 0x06 /* Public */,
      10,    1,  109,    2, 0x06 /* Public */,
      11,    1,  112,    2, 0x06 /* Public */,
      12,    1,  115,    2, 0x06 /* Public */,
      13,    1,  118,    2, 0x06 /* Public */,
      14,    1,  121,    2, 0x06 /* Public */,
      15,    2,  124,    2, 0x06 /* Public */,
      18,    2,  129,    2, 0x06 /* Public */,
      21,    1,  134,    2, 0x06 /* Public */,
      24,    0,  137,    2, 0x06 /* Public */,
      25,    0,  138,    2, 0x06 /* Public */,
      26,    0,  139,    2, 0x06 /* Public */,

 // methods: name, argc, parameters, tag, flags
      27,    0,  140,    2, 0x02 /* Public */,
      28,    0,  141,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 7,    8,
    QMetaType::Void, 0x80000000 | 7,    8,
    QMetaType::Void, 0x80000000 | 7,    8,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3, QMetaType::Bool,   16,   17,
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 19,   16,   20,
    QMetaType::Void, 0x80000000 | 22,   23,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // methods: parameters
    QMetaType::LongLong,
    0x80000000 | 29,

 // properties: name, type, flags
      30, QMetaType::QString, 0x00495001,
      31, QMetaType::QDateTime, 0x00095401,
      32, 0x80000000 | 33, 0x00095409,
      34, 0x80000000 | 29, 0x00495009,
      35, QMetaType::Bool, 0x00495103,
      36, QMetaType::Int, 0x00495001,

 // properties: notify_signal_id
      12,
       0,
       0,
       1,
      13,
      14,

       0        // eod
};

void ConferenceModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ConferenceModel *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->activeSpeakerParticipantDevice((*reinterpret_cast< const std::shared_ptr<const linphone::ParticipantDevice>(*)>(_a[1]))); break;
        case 1: _t->localParticipantChanged(); break;
        case 2: _t->participantAdded((*reinterpret_cast< const std::shared_ptr<const linphone::Participant>(*)>(_a[1]))); break;
        case 3: _t->participantRemoved((*reinterpret_cast< const std::shared_ptr<const linphone::Participant>(*)>(_a[1]))); break;
        case 4: _t->participantAdminStatusChanged((*reinterpret_cast< const std::shared_ptr<const linphone::Participant>(*)>(_a[1]))); break;
        case 5: _t->participantDeviceAdded((*reinterpret_cast< const std::shared_ptr<const linphone::ParticipantDevice>(*)>(_a[1]))); break;
        case 6: _t->participantDeviceRemoved((*reinterpret_cast< const std::shared_ptr<const linphone::ParticipantDevice>(*)>(_a[1]))); break;
        case 7: _t->participantDeviceMediaCapabilityChanged((*reinterpret_cast< const std::shared_ptr<const linphone::ParticipantDevice>(*)>(_a[1]))); break;
        case 8: _t->participantDeviceMediaAvailabilityChanged((*reinterpret_cast< const std::shared_ptr<const linphone::ParticipantDevice>(*)>(_a[1]))); break;
        case 9: _t->participantDeviceIsSpeakingChanged((*reinterpret_cast< const std::shared_ptr<const linphone::ParticipantDevice>(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 10: _t->participantDeviceStateChanged((*reinterpret_cast< const std::shared_ptr<const linphone::ParticipantDevice>(*)>(_a[1])),(*reinterpret_cast< linphone::ParticipantDeviceState(*)>(_a[2]))); break;
        case 11: _t->conferenceStateChanged((*reinterpret_cast< linphone::Conference::State(*)>(_a[1]))); break;
        case 12: _t->subjectChanged(); break;
        case 13: _t->isReadyChanged(); break;
        case 14: _t->participantDeviceCountChanged(); break;
        case 15: { qint64 _r = _t->getElapsedSeconds();
            if (_a[0]) *reinterpret_cast< qint64*>(_a[0]) = std::move(_r); }  break;
        case 16: { ParticipantModel* _r = _t->getLocalParticipant();
            if (_a[0]) *reinterpret_cast< ParticipantModel**>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (ConferenceModel::*)(const std::shared_ptr<const linphone::ParticipantDevice> & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ConferenceModel::activeSpeakerParticipantDevice)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (ConferenceModel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ConferenceModel::localParticipantChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (ConferenceModel::*)(const std::shared_ptr<const linphone::Participant> & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ConferenceModel::participantAdded)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (ConferenceModel::*)(const std::shared_ptr<const linphone::Participant> & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ConferenceModel::participantRemoved)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (ConferenceModel::*)(const std::shared_ptr<const linphone::Participant> & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ConferenceModel::participantAdminStatusChanged)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (ConferenceModel::*)(const std::shared_ptr<const linphone::ParticipantDevice> & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ConferenceModel::participantDeviceAdded)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (ConferenceModel::*)(const std::shared_ptr<const linphone::ParticipantDevice> & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ConferenceModel::participantDeviceRemoved)) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (ConferenceModel::*)(const std::shared_ptr<const linphone::ParticipantDevice> & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ConferenceModel::participantDeviceMediaCapabilityChanged)) {
                *result = 7;
                return;
            }
        }
        {
            using _t = void (ConferenceModel::*)(const std::shared_ptr<const linphone::ParticipantDevice> & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ConferenceModel::participantDeviceMediaAvailabilityChanged)) {
                *result = 8;
                return;
            }
        }
        {
            using _t = void (ConferenceModel::*)(const std::shared_ptr<const linphone::ParticipantDevice> & , bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ConferenceModel::participantDeviceIsSpeakingChanged)) {
                *result = 9;
                return;
            }
        }
        {
            using _t = void (ConferenceModel::*)(const std::shared_ptr<const linphone::ParticipantDevice> & , linphone::ParticipantDeviceState );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ConferenceModel::participantDeviceStateChanged)) {
                *result = 10;
                return;
            }
        }
        {
            using _t = void (ConferenceModel::*)(linphone::Conference::State );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ConferenceModel::conferenceStateChanged)) {
                *result = 11;
                return;
            }
        }
        {
            using _t = void (ConferenceModel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ConferenceModel::subjectChanged)) {
                *result = 12;
                return;
            }
        }
        {
            using _t = void (ConferenceModel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ConferenceModel::isReadyChanged)) {
                *result = 13;
                return;
            }
        }
        {
            using _t = void (ConferenceModel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ConferenceModel::participantDeviceCountChanged)) {
                *result = 14;
                return;
            }
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 3:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< ParticipantModel* >(); break;
        }
    }

#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<ConferenceModel *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->getSubject(); break;
        case 1: *reinterpret_cast< QDateTime*>(_v) = _t->getStartDate(); break;
        case 2: *reinterpret_cast< ParticipantListModel**>(_v) = _t->getParticipantListModel(); break;
        case 3: *reinterpret_cast< ParticipantModel**>(_v) = _t->getLocalParticipant(); break;
        case 4: *reinterpret_cast< bool*>(_v) = _t->mIsReady; break;
        case 5: *reinterpret_cast< int*>(_v) = _t->getParticipantDeviceCount(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<ConferenceModel *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 4: _t->setIsReady(*reinterpret_cast< bool*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject ConferenceModel::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_ConferenceModel.data,
    qt_meta_data_ConferenceModel,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *ConferenceModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ConferenceModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ConferenceModel.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int ConferenceModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 17)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 17;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 17)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 17;
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
void ConferenceModel::activeSpeakerParticipantDevice(const std::shared_ptr<const linphone::ParticipantDevice> & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void ConferenceModel::localParticipantChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void ConferenceModel::participantAdded(const std::shared_ptr<const linphone::Participant> & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void ConferenceModel::participantRemoved(const std::shared_ptr<const linphone::Participant> & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void ConferenceModel::participantAdminStatusChanged(const std::shared_ptr<const linphone::Participant> & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void ConferenceModel::participantDeviceAdded(const std::shared_ptr<const linphone::ParticipantDevice> & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void ConferenceModel::participantDeviceRemoved(const std::shared_ptr<const linphone::ParticipantDevice> & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void ConferenceModel::participantDeviceMediaCapabilityChanged(const std::shared_ptr<const linphone::ParticipantDevice> & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void ConferenceModel::participantDeviceMediaAvailabilityChanged(const std::shared_ptr<const linphone::ParticipantDevice> & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void ConferenceModel::participantDeviceIsSpeakingChanged(const std::shared_ptr<const linphone::ParticipantDevice> & _t1, bool _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}

// SIGNAL 10
void ConferenceModel::participantDeviceStateChanged(const std::shared_ptr<const linphone::ParticipantDevice> & _t1, linphone::ParticipantDeviceState _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 10, _a);
}

// SIGNAL 11
void ConferenceModel::conferenceStateChanged(linphone::Conference::State _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 11, _a);
}

// SIGNAL 12
void ConferenceModel::subjectChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 12, nullptr);
}

// SIGNAL 13
void ConferenceModel::isReadyChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 13, nullptr);
}

// SIGNAL 14
void ConferenceModel::participantDeviceCountChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 14, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
