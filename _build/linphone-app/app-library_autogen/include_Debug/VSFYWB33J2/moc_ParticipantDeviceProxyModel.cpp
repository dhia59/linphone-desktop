/****************************************************************************
** Meta object code from reading C++ file 'ParticipantDeviceProxyModel.hpp'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.13.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../linphone-app/src/components/participant/ParticipantDeviceProxyModel.hpp"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ParticipantDeviceProxyModel.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.13.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ParticipantDeviceProxyModel_t {
    QByteArrayData data[19];
    char stringdata0[260];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ParticipantDeviceProxyModel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ParticipantDeviceProxyModel_t qt_meta_stringdata_ParticipantDeviceProxyModel = {
    {
QT_MOC_LITERAL(0, 0, 27), // "ParticipantDeviceProxyModel"
QT_MOC_LITERAL(1, 28, 20), // "activeSpeakerChanged"
QT_MOC_LITERAL(2, 49, 0), // ""
QT_MOC_LITERAL(3, 50, 16), // "callModelChanged"
QT_MOC_LITERAL(4, 67, 13), // "showMeChanged"
QT_MOC_LITERAL(5, 81, 9), // "meChanged"
QT_MOC_LITERAL(6, 91, 19), // "participantSpeaking"
QT_MOC_LITERAL(7, 111, 23), // "ParticipantDeviceModel*"
QT_MOC_LITERAL(8, 135, 14), // "speakingDevice"
QT_MOC_LITERAL(9, 150, 17), // "conferenceCreated"
QT_MOC_LITERAL(10, 168, 14), // "onCountChanged"
QT_MOC_LITERAL(11, 183, 21), // "onParticipantSpeaking"
QT_MOC_LITERAL(12, 205, 5), // "getAt"
QT_MOC_LITERAL(13, 211, 3), // "row"
QT_MOC_LITERAL(14, 215, 9), // "callModel"
QT_MOC_LITERAL(15, 225, 10), // "CallModel*"
QT_MOC_LITERAL(16, 236, 6), // "showMe"
QT_MOC_LITERAL(17, 243, 2), // "me"
QT_MOC_LITERAL(18, 246, 13) // "activeSpeaker"

    },
    "ParticipantDeviceProxyModel\0"
    "activeSpeakerChanged\0\0callModelChanged\0"
    "showMeChanged\0meChanged\0participantSpeaking\0"
    "ParticipantDeviceModel*\0speakingDevice\0"
    "conferenceCreated\0onCountChanged\0"
    "onParticipantSpeaking\0getAt\0row\0"
    "callModel\0CallModel*\0showMe\0me\0"
    "activeSpeaker"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ParticipantDeviceProxyModel[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       4,   74, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       6,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   59,    2, 0x06 /* Public */,
       3,    0,   60,    2, 0x06 /* Public */,
       4,    0,   61,    2, 0x06 /* Public */,
       5,    0,   62,    2, 0x06 /* Public */,
       6,    1,   63,    2, 0x06 /* Public */,
       9,    0,   66,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      10,    0,   67,    2, 0x0a /* Public */,
      11,    1,   68,    2, 0x0a /* Public */,

 // methods: name, argc, parameters, tag, flags
      12,    1,   71,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 7,    8,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 7,    8,

 // methods: parameters
    0x80000000 | 7, QMetaType::Int,   13,

 // properties: name, type, flags
      14, 0x80000000 | 15, 0x0049510b,
      16, QMetaType::Bool, 0x00495103,
      17, 0x80000000 | 7, 0x00495009,
      18, 0x80000000 | 7, 0x00495009,

 // properties: notify_signal_id
       1,
       2,
       3,
       0,

       0        // eod
};

void ParticipantDeviceProxyModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ParticipantDeviceProxyModel *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->activeSpeakerChanged(); break;
        case 1: _t->callModelChanged(); break;
        case 2: _t->showMeChanged(); break;
        case 3: _t->meChanged(); break;
        case 4: _t->participantSpeaking((*reinterpret_cast< ParticipantDeviceModel*(*)>(_a[1]))); break;
        case 5: _t->conferenceCreated(); break;
        case 6: _t->onCountChanged(); break;
        case 7: _t->onParticipantSpeaking((*reinterpret_cast< ParticipantDeviceModel*(*)>(_a[1]))); break;
        case 8: { ParticipantDeviceModel* _r = _t->getAt((*reinterpret_cast< int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< ParticipantDeviceModel**>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (ParticipantDeviceProxyModel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ParticipantDeviceProxyModel::activeSpeakerChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (ParticipantDeviceProxyModel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ParticipantDeviceProxyModel::callModelChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (ParticipantDeviceProxyModel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ParticipantDeviceProxyModel::showMeChanged)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (ParticipantDeviceProxyModel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ParticipantDeviceProxyModel::meChanged)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (ParticipantDeviceProxyModel::*)(ParticipantDeviceModel * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ParticipantDeviceProxyModel::participantSpeaking)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (ParticipantDeviceProxyModel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ParticipantDeviceProxyModel::conferenceCreated)) {
                *result = 5;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<ParticipantDeviceProxyModel *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< CallModel**>(_v) = _t->getCallModel(); break;
        case 1: *reinterpret_cast< bool*>(_v) = _t->isShowMe(); break;
        case 2: *reinterpret_cast< ParticipantDeviceModel**>(_v) = _t->getMe(); break;
        case 3: *reinterpret_cast< ParticipantDeviceModel**>(_v) = _t->getActiveSpeakerModel(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<ParticipantDeviceProxyModel *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setCallModel(*reinterpret_cast< CallModel**>(_v)); break;
        case 1: _t->setShowMe(*reinterpret_cast< bool*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject ParticipantDeviceProxyModel::staticMetaObject = { {
    &SortFilterProxyModel::staticMetaObject,
    qt_meta_stringdata_ParticipantDeviceProxyModel.data,
    qt_meta_data_ParticipantDeviceProxyModel,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *ParticipantDeviceProxyModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ParticipantDeviceProxyModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ParticipantDeviceProxyModel.stringdata0))
        return static_cast<void*>(this);
    return SortFilterProxyModel::qt_metacast(_clname);
}

int ParticipantDeviceProxyModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = SortFilterProxyModel::qt_metacall(_c, _id, _a);
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
void ParticipantDeviceProxyModel::activeSpeakerChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void ParticipantDeviceProxyModel::callModelChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void ParticipantDeviceProxyModel::showMeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void ParticipantDeviceProxyModel::meChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void ParticipantDeviceProxyModel::participantSpeaking(ParticipantDeviceModel * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void ParticipantDeviceProxyModel::conferenceCreated()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
