/****************************************************************************
** Meta object code from reading C++ file 'ConferenceListener.hpp'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.13.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../linphone-app/src/components/conference/ConferenceListener.hpp"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ConferenceListener.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.13.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ConferenceListener_t {
    QByteArrayData data[28];
    char stringdata0[639];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ConferenceListener_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ConferenceListener_t qt_meta_stringdata_ConferenceListener = {
    {
QT_MOC_LITERAL(0, 0, 18), // "ConferenceListener"
QT_MOC_LITERAL(1, 19, 30), // "activeSpeakerParticipantDevice"
QT_MOC_LITERAL(2, 50, 0), // ""
QT_MOC_LITERAL(3, 51, 50), // "std::shared_ptr<const linphon..."
QT_MOC_LITERAL(4, 102, 17), // "participantDevice"
QT_MOC_LITERAL(5, 120, 16), // "participantAdded"
QT_MOC_LITERAL(6, 137, 44), // "std::shared_ptr<const linphon..."
QT_MOC_LITERAL(7, 182, 11), // "participant"
QT_MOC_LITERAL(8, 194, 18), // "participantRemoved"
QT_MOC_LITERAL(9, 213, 29), // "participantAdminStatusChanged"
QT_MOC_LITERAL(10, 243, 22), // "participantDeviceAdded"
QT_MOC_LITERAL(11, 266, 24), // "participantDeviceRemoved"
QT_MOC_LITERAL(12, 291, 29), // "participantDeviceStateChanged"
QT_MOC_LITERAL(13, 321, 37), // "std::shared_ptr<linphone::Con..."
QT_MOC_LITERAL(14, 359, 10), // "conference"
QT_MOC_LITERAL(15, 370, 6), // "device"
QT_MOC_LITERAL(16, 377, 32), // "linphone::ParticipantDeviceState"
QT_MOC_LITERAL(17, 410, 5), // "state"
QT_MOC_LITERAL(18, 416, 39), // "participantDeviceMediaCapabil..."
QT_MOC_LITERAL(19, 456, 41), // "participantDeviceMediaAvailab..."
QT_MOC_LITERAL(20, 498, 34), // "participantDeviceIsSpeakingCh..."
QT_MOC_LITERAL(21, 533, 10), // "isSpeaking"
QT_MOC_LITERAL(22, 544, 22), // "conferenceStateChanged"
QT_MOC_LITERAL(23, 567, 27), // "linphone::Conference::State"
QT_MOC_LITERAL(24, 595, 8), // "newState"
QT_MOC_LITERAL(25, 604, 14), // "subjectChanged"
QT_MOC_LITERAL(26, 619, 11), // "std::string"
QT_MOC_LITERAL(27, 631, 7) // "subject"

    },
    "ConferenceListener\0activeSpeakerParticipantDevice\0"
    "\0std::shared_ptr<const linphone::ParticipantDevice>\0"
    "participantDevice\0participantAdded\0"
    "std::shared_ptr<const linphone::Participant>\0"
    "participant\0participantRemoved\0"
    "participantAdminStatusChanged\0"
    "participantDeviceAdded\0participantDeviceRemoved\0"
    "participantDeviceStateChanged\0"
    "std::shared_ptr<linphone::Conference>\0"
    "conference\0device\0linphone::ParticipantDeviceState\0"
    "state\0participantDeviceMediaCapabilityChanged\0"
    "participantDeviceMediaAvailabilityChanged\0"
    "participantDeviceIsSpeakingChanged\0"
    "isSpeaking\0conferenceStateChanged\0"
    "linphone::Conference::State\0newState\0"
    "subjectChanged\0std::string\0subject"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ConferenceListener[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      12,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   74,    2, 0x06 /* Public */,
       5,    1,   77,    2, 0x06 /* Public */,
       8,    1,   80,    2, 0x06 /* Public */,
       9,    1,   83,    2, 0x06 /* Public */,
      10,    1,   86,    2, 0x06 /* Public */,
      11,    1,   89,    2, 0x06 /* Public */,
      12,    3,   92,    2, 0x06 /* Public */,
      18,    1,   99,    2, 0x06 /* Public */,
      19,    1,  102,    2, 0x06 /* Public */,
      20,    2,  105,    2, 0x06 /* Public */,
      22,    1,  110,    2, 0x06 /* Public */,
      25,    1,  113,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 6,    7,
    QMetaType::Void, 0x80000000 | 6,    7,
    QMetaType::Void, 0x80000000 | 6,    7,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 13, 0x80000000 | 3, 0x80000000 | 16,   14,   15,   17,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3, QMetaType::Bool,    4,   21,
    QMetaType::Void, 0x80000000 | 23,   24,
    QMetaType::Void, 0x80000000 | 26,   27,

       0        // eod
};

void ConferenceListener::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ConferenceListener *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->activeSpeakerParticipantDevice((*reinterpret_cast< const std::shared_ptr<const linphone::ParticipantDevice>(*)>(_a[1]))); break;
        case 1: _t->participantAdded((*reinterpret_cast< const std::shared_ptr<const linphone::Participant>(*)>(_a[1]))); break;
        case 2: _t->participantRemoved((*reinterpret_cast< const std::shared_ptr<const linphone::Participant>(*)>(_a[1]))); break;
        case 3: _t->participantAdminStatusChanged((*reinterpret_cast< const std::shared_ptr<const linphone::Participant>(*)>(_a[1]))); break;
        case 4: _t->participantDeviceAdded((*reinterpret_cast< const std::shared_ptr<const linphone::ParticipantDevice>(*)>(_a[1]))); break;
        case 5: _t->participantDeviceRemoved((*reinterpret_cast< const std::shared_ptr<const linphone::ParticipantDevice>(*)>(_a[1]))); break;
        case 6: _t->participantDeviceStateChanged((*reinterpret_cast< const std::shared_ptr<linphone::Conference>(*)>(_a[1])),(*reinterpret_cast< const std::shared_ptr<const linphone::ParticipantDevice>(*)>(_a[2])),(*reinterpret_cast< linphone::ParticipantDeviceState(*)>(_a[3]))); break;
        case 7: _t->participantDeviceMediaCapabilityChanged((*reinterpret_cast< const std::shared_ptr<const linphone::ParticipantDevice>(*)>(_a[1]))); break;
        case 8: _t->participantDeviceMediaAvailabilityChanged((*reinterpret_cast< const std::shared_ptr<const linphone::ParticipantDevice>(*)>(_a[1]))); break;
        case 9: _t->participantDeviceIsSpeakingChanged((*reinterpret_cast< const std::shared_ptr<const linphone::ParticipantDevice>(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 10: _t->conferenceStateChanged((*reinterpret_cast< linphone::Conference::State(*)>(_a[1]))); break;
        case 11: _t->subjectChanged((*reinterpret_cast< const std::string(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (ConferenceListener::*)(const std::shared_ptr<const linphone::ParticipantDevice> & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ConferenceListener::activeSpeakerParticipantDevice)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (ConferenceListener::*)(const std::shared_ptr<const linphone::Participant> & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ConferenceListener::participantAdded)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (ConferenceListener::*)(const std::shared_ptr<const linphone::Participant> & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ConferenceListener::participantRemoved)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (ConferenceListener::*)(const std::shared_ptr<const linphone::Participant> & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ConferenceListener::participantAdminStatusChanged)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (ConferenceListener::*)(const std::shared_ptr<const linphone::ParticipantDevice> & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ConferenceListener::participantDeviceAdded)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (ConferenceListener::*)(const std::shared_ptr<const linphone::ParticipantDevice> & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ConferenceListener::participantDeviceRemoved)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (ConferenceListener::*)(const std::shared_ptr<linphone::Conference> & , const std::shared_ptr<const linphone::ParticipantDevice> & , linphone::ParticipantDeviceState );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ConferenceListener::participantDeviceStateChanged)) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (ConferenceListener::*)(const std::shared_ptr<const linphone::ParticipantDevice> & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ConferenceListener::participantDeviceMediaCapabilityChanged)) {
                *result = 7;
                return;
            }
        }
        {
            using _t = void (ConferenceListener::*)(const std::shared_ptr<const linphone::ParticipantDevice> & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ConferenceListener::participantDeviceMediaAvailabilityChanged)) {
                *result = 8;
                return;
            }
        }
        {
            using _t = void (ConferenceListener::*)(const std::shared_ptr<const linphone::ParticipantDevice> & , bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ConferenceListener::participantDeviceIsSpeakingChanged)) {
                *result = 9;
                return;
            }
        }
        {
            using _t = void (ConferenceListener::*)(linphone::Conference::State );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ConferenceListener::conferenceStateChanged)) {
                *result = 10;
                return;
            }
        }
        {
            using _t = void (ConferenceListener::*)(const std::string & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ConferenceListener::subjectChanged)) {
                *result = 11;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject ConferenceListener::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_ConferenceListener.data,
    qt_meta_data_ConferenceListener,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *ConferenceListener::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ConferenceListener::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ConferenceListener.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "linphone::ConferenceListener"))
        return static_cast< linphone::ConferenceListener*>(this);
    return QObject::qt_metacast(_clname);
}

int ConferenceListener::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
    return _id;
}

// SIGNAL 0
void ConferenceListener::activeSpeakerParticipantDevice(const std::shared_ptr<const linphone::ParticipantDevice> & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void ConferenceListener::participantAdded(const std::shared_ptr<const linphone::Participant> & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void ConferenceListener::participantRemoved(const std::shared_ptr<const linphone::Participant> & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void ConferenceListener::participantAdminStatusChanged(const std::shared_ptr<const linphone::Participant> & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void ConferenceListener::participantDeviceAdded(const std::shared_ptr<const linphone::ParticipantDevice> & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void ConferenceListener::participantDeviceRemoved(const std::shared_ptr<const linphone::ParticipantDevice> & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void ConferenceListener::participantDeviceStateChanged(const std::shared_ptr<linphone::Conference> & _t1, const std::shared_ptr<const linphone::ParticipantDevice> & _t2, linphone::ParticipantDeviceState _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void ConferenceListener::participantDeviceMediaCapabilityChanged(const std::shared_ptr<const linphone::ParticipantDevice> & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void ConferenceListener::participantDeviceMediaAvailabilityChanged(const std::shared_ptr<const linphone::ParticipantDevice> & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void ConferenceListener::participantDeviceIsSpeakingChanged(const std::shared_ptr<const linphone::ParticipantDevice> & _t1, bool _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}

// SIGNAL 10
void ConferenceListener::conferenceStateChanged(linphone::Conference::State _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 10, _a);
}

// SIGNAL 11
void ConferenceListener::subjectChanged(const std::string & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 11, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
