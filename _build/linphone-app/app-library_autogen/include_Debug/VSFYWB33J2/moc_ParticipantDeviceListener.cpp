/****************************************************************************
** Meta object code from reading C++ file 'ParticipantDeviceListener.hpp'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.13.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../linphone-app/src/components/participant/ParticipantDeviceListener.hpp"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ParticipantDeviceListener.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.13.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ParticipantDeviceListener_t {
    QByteArrayData data[17];
    char stringdata0[306];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ParticipantDeviceListener_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ParticipantDeviceListener_t qt_meta_stringdata_ParticipantDeviceListener = {
    {
QT_MOC_LITERAL(0, 0, 25), // "ParticipantDeviceListener"
QT_MOC_LITERAL(1, 26, 17), // "isSpeakingChanged"
QT_MOC_LITERAL(2, 44, 0), // ""
QT_MOC_LITERAL(3, 45, 44), // "std::shared_ptr<linphone::Par..."
QT_MOC_LITERAL(4, 90, 17), // "participantDevice"
QT_MOC_LITERAL(5, 108, 10), // "isSpeaking"
QT_MOC_LITERAL(6, 119, 7), // "isMuted"
QT_MOC_LITERAL(7, 127, 12), // "stateChanged"
QT_MOC_LITERAL(8, 140, 32), // "linphone::ParticipantDeviceState"
QT_MOC_LITERAL(9, 173, 5), // "state"
QT_MOC_LITERAL(10, 179, 23), // "streamCapabilityChanged"
QT_MOC_LITERAL(11, 203, 24), // "linphone::MediaDirection"
QT_MOC_LITERAL(12, 228, 9), // "direction"
QT_MOC_LITERAL(13, 238, 20), // "linphone::StreamType"
QT_MOC_LITERAL(14, 259, 10), // "streamType"
QT_MOC_LITERAL(15, 270, 25), // "streamAvailabilityChanged"
QT_MOC_LITERAL(16, 296, 9) // "available"

    },
    "ParticipantDeviceListener\0isSpeakingChanged\0"
    "\0std::shared_ptr<linphone::ParticipantDevice>\0"
    "participantDevice\0isSpeaking\0isMuted\0"
    "stateChanged\0linphone::ParticipantDeviceState\0"
    "state\0streamCapabilityChanged\0"
    "linphone::MediaDirection\0direction\0"
    "linphone::StreamType\0streamType\0"
    "streamAvailabilityChanged\0available"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ParticipantDeviceListener[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   39,    2, 0x06 /* Public */,
       6,    2,   44,    2, 0x06 /* Public */,
       7,    2,   49,    2, 0x06 /* Public */,
      10,    3,   54,    2, 0x06 /* Public */,
      15,    3,   61,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3, QMetaType::Bool,    4,    5,
    QMetaType::Void, 0x80000000 | 3, QMetaType::Bool,    4,    6,
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 8,    4,    9,
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 11, 0x80000000 | 13,    4,   12,   14,
    QMetaType::Void, 0x80000000 | 3, QMetaType::Bool, 0x80000000 | 13,    4,   16,   14,

       0        // eod
};

void ParticipantDeviceListener::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ParticipantDeviceListener *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->isSpeakingChanged((*reinterpret_cast< const std::shared_ptr<linphone::ParticipantDevice>(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 1: _t->isMuted((*reinterpret_cast< const std::shared_ptr<linphone::ParticipantDevice>(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 2: _t->stateChanged((*reinterpret_cast< const std::shared_ptr<linphone::ParticipantDevice>(*)>(_a[1])),(*reinterpret_cast< linphone::ParticipantDeviceState(*)>(_a[2]))); break;
        case 3: _t->streamCapabilityChanged((*reinterpret_cast< const std::shared_ptr<linphone::ParticipantDevice>(*)>(_a[1])),(*reinterpret_cast< linphone::MediaDirection(*)>(_a[2])),(*reinterpret_cast< linphone::StreamType(*)>(_a[3]))); break;
        case 4: _t->streamAvailabilityChanged((*reinterpret_cast< const std::shared_ptr<linphone::ParticipantDevice>(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])),(*reinterpret_cast< linphone::StreamType(*)>(_a[3]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (ParticipantDeviceListener::*)(const std::shared_ptr<linphone::ParticipantDevice> & , bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ParticipantDeviceListener::isSpeakingChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (ParticipantDeviceListener::*)(const std::shared_ptr<linphone::ParticipantDevice> & , bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ParticipantDeviceListener::isMuted)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (ParticipantDeviceListener::*)(const std::shared_ptr<linphone::ParticipantDevice> & , linphone::ParticipantDeviceState );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ParticipantDeviceListener::stateChanged)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (ParticipantDeviceListener::*)(const std::shared_ptr<linphone::ParticipantDevice> & , linphone::MediaDirection , linphone::StreamType );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ParticipantDeviceListener::streamCapabilityChanged)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (ParticipantDeviceListener::*)(const std::shared_ptr<linphone::ParticipantDevice> & , bool , linphone::StreamType );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ParticipantDeviceListener::streamAvailabilityChanged)) {
                *result = 4;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject ParticipantDeviceListener::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_ParticipantDeviceListener.data,
    qt_meta_data_ParticipantDeviceListener,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *ParticipantDeviceListener::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ParticipantDeviceListener::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ParticipantDeviceListener.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "linphone::ParticipantDeviceListener"))
        return static_cast< linphone::ParticipantDeviceListener*>(this);
    return QObject::qt_metacast(_clname);
}

int ParticipantDeviceListener::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void ParticipantDeviceListener::isSpeakingChanged(const std::shared_ptr<linphone::ParticipantDevice> & _t1, bool _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void ParticipantDeviceListener::isMuted(const std::shared_ptr<linphone::ParticipantDevice> & _t1, bool _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void ParticipantDeviceListener::stateChanged(const std::shared_ptr<linphone::ParticipantDevice> & _t1, linphone::ParticipantDeviceState _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void ParticipantDeviceListener::streamCapabilityChanged(const std::shared_ptr<linphone::ParticipantDevice> & _t1, linphone::MediaDirection _t2, linphone::StreamType _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void ParticipantDeviceListener::streamAvailabilityChanged(const std::shared_ptr<linphone::ParticipantDevice> & _t1, bool _t2, linphone::StreamType _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
