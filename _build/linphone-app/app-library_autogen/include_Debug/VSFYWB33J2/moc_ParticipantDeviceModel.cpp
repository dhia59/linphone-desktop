/****************************************************************************
** Meta object code from reading C++ file 'ParticipantDeviceModel.hpp'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.13.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../linphone-app/src/components/participant/ParticipantDeviceModel.hpp"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ParticipantDeviceModel.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.13.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ParticipantDeviceModel_t {
    QByteArrayData data[27];
    char stringdata0[391];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ParticipantDeviceModel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ParticipantDeviceModel_t qt_meta_stringdata_ParticipantDeviceModel = {
    {
QT_MOC_LITERAL(0, 0, 22), // "ParticipantDeviceModel"
QT_MOC_LITERAL(1, 23, 20), // "securityLevelChanged"
QT_MOC_LITERAL(2, 44, 0), // ""
QT_MOC_LITERAL(3, 45, 19), // "videoEnabledChanged"
QT_MOC_LITERAL(4, 65, 15), // "isPausedChanged"
QT_MOC_LITERAL(5, 81, 17), // "isSpeakingChanged"
QT_MOC_LITERAL(6, 99, 14), // "isMutedChanged"
QT_MOC_LITERAL(7, 114, 14), // "isLocalChanged"
QT_MOC_LITERAL(8, 129, 12), // "stateChanged"
QT_MOC_LITERAL(9, 142, 22), // "onSecurityLevelChanged"
QT_MOC_LITERAL(10, 165, 40), // "std::shared_ptr<const linphon..."
QT_MOC_LITERAL(11, 206, 6), // "device"
QT_MOC_LITERAL(12, 213, 19), // "onCallStatusChanged"
QT_MOC_LITERAL(13, 233, 11), // "displayName"
QT_MOC_LITERAL(14, 245, 4), // "name"
QT_MOC_LITERAL(15, 250, 7), // "address"
QT_MOC_LITERAL(16, 258, 13), // "securityLevel"
QT_MOC_LITERAL(17, 272, 13), // "timeOfJoining"
QT_MOC_LITERAL(18, 286, 6), // "time_t"
QT_MOC_LITERAL(19, 293, 12), // "videoEnabled"
QT_MOC_LITERAL(20, 306, 4), // "isMe"
QT_MOC_LITERAL(21, 311, 7), // "isLocal"
QT_MOC_LITERAL(22, 319, 8), // "isPaused"
QT_MOC_LITERAL(23, 328, 10), // "isSpeaking"
QT_MOC_LITERAL(24, 339, 7), // "isMuted"
QT_MOC_LITERAL(25, 347, 5), // "state"
QT_MOC_LITERAL(26, 353, 37) // "LinphoneEnums::ParticipantDev..."

    },
    "ParticipantDeviceModel\0securityLevelChanged\0"
    "\0videoEnabledChanged\0isPausedChanged\0"
    "isSpeakingChanged\0isMutedChanged\0"
    "isLocalChanged\0stateChanged\0"
    "onSecurityLevelChanged\0"
    "std::shared_ptr<const linphone::Address>\0"
    "device\0onCallStatusChanged\0displayName\0"
    "name\0address\0securityLevel\0timeOfJoining\0"
    "time_t\0videoEnabled\0isMe\0isLocal\0"
    "isPaused\0isSpeaking\0isMuted\0state\0"
    "LinphoneEnums::ParticipantDeviceState"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ParticipantDeviceModel[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
      12,   70, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       7,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   59,    2, 0x06 /* Public */,
       3,    0,   60,    2, 0x06 /* Public */,
       4,    0,   61,    2, 0x06 /* Public */,
       5,    0,   62,    2, 0x06 /* Public */,
       6,    0,   63,    2, 0x06 /* Public */,
       7,    0,   64,    2, 0x06 /* Public */,
       8,    0,   65,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       9,    1,   66,    2, 0x0a /* Public */,
      12,    0,   69,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 10,   11,
    QMetaType::Void,

 // properties: name, type, flags
      13, QMetaType::QString, 0x00095401,
      14, QMetaType::QString, 0x00095401,
      15, QMetaType::QString, 0x00095401,
      16, QMetaType::Int, 0x00495001,
      17, 0x80000000 | 18, 0x00095409,
      19, QMetaType::Bool, 0x00495001,
      20, QMetaType::Bool, 0x00095401,
      21, QMetaType::Bool, 0x00495103,
      22, QMetaType::Bool, 0x00495003,
      23, QMetaType::Bool, 0x00495103,
      24, QMetaType::Bool, 0x00495001,
      25, 0x80000000 | 26, 0x0049510b,

 // properties: notify_signal_id
       0,
       0,
       0,
       0,
       0,
       1,
       0,
       5,
       2,
       3,
       4,
       6,

       0        // eod
};

void ParticipantDeviceModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ParticipantDeviceModel *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->securityLevelChanged(); break;
        case 1: _t->videoEnabledChanged(); break;
        case 2: _t->isPausedChanged(); break;
        case 3: _t->isSpeakingChanged(); break;
        case 4: _t->isMutedChanged(); break;
        case 5: _t->isLocalChanged(); break;
        case 6: _t->stateChanged(); break;
        case 7: _t->onSecurityLevelChanged((*reinterpret_cast< std::shared_ptr<const linphone::Address>(*)>(_a[1]))); break;
        case 8: _t->onCallStatusChanged(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (ParticipantDeviceModel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ParticipantDeviceModel::securityLevelChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (ParticipantDeviceModel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ParticipantDeviceModel::videoEnabledChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (ParticipantDeviceModel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ParticipantDeviceModel::isPausedChanged)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (ParticipantDeviceModel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ParticipantDeviceModel::isSpeakingChanged)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (ParticipantDeviceModel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ParticipantDeviceModel::isMutedChanged)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (ParticipantDeviceModel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ParticipantDeviceModel::isLocalChanged)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (ParticipantDeviceModel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ParticipantDeviceModel::stateChanged)) {
                *result = 6;
                return;
            }
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 11:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< LinphoneEnums::ParticipantDeviceState >(); break;
        }
    }

#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<ParticipantDeviceModel *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->getDisplayName(); break;
        case 1: *reinterpret_cast< QString*>(_v) = _t->getName(); break;
        case 2: *reinterpret_cast< QString*>(_v) = _t->getAddress(); break;
        case 3: *reinterpret_cast< int*>(_v) = _t->getSecurityLevel(); break;
        case 4: *reinterpret_cast< time_t*>(_v) = _t->getTimeOfJoining(); break;
        case 5: *reinterpret_cast< bool*>(_v) = _t->isVideoEnabled(); break;
        case 6: *reinterpret_cast< bool*>(_v) = _t->isMe(); break;
        case 7: *reinterpret_cast< bool*>(_v) = _t->isLocal(); break;
        case 8: *reinterpret_cast< bool*>(_v) = _t->getPaused(); break;
        case 9: *reinterpret_cast< bool*>(_v) = _t->getIsSpeaking(); break;
        case 10: *reinterpret_cast< bool*>(_v) = _t->getIsMuted(); break;
        case 11: *reinterpret_cast< LinphoneEnums::ParticipantDeviceState*>(_v) = _t->getState(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<ParticipantDeviceModel *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 7: _t->setIsLocal(*reinterpret_cast< bool*>(_v)); break;
        case 8: _t->setPaused(*reinterpret_cast< bool*>(_v)); break;
        case 9: _t->setIsSpeaking(*reinterpret_cast< bool*>(_v)); break;
        case 11: _t->setState(*reinterpret_cast< LinphoneEnums::ParticipantDeviceState*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject ParticipantDeviceModel::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_ParticipantDeviceModel.data,
    qt_meta_data_ParticipantDeviceModel,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *ParticipantDeviceModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ParticipantDeviceModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ParticipantDeviceModel.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int ParticipantDeviceModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 9;
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 12;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 12;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 12;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 12;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 12;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void ParticipantDeviceModel::securityLevelChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void ParticipantDeviceModel::videoEnabledChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void ParticipantDeviceModel::isPausedChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void ParticipantDeviceModel::isSpeakingChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void ParticipantDeviceModel::isMutedChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void ParticipantDeviceModel::isLocalChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}

// SIGNAL 6
void ParticipantDeviceModel::stateChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 6, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
