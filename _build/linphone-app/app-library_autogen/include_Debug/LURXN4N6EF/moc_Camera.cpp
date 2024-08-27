/****************************************************************************
** Meta object code from reading C++ file 'Camera.hpp'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.13.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../linphone-app/src/components/camera/Camera.hpp"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'Camera.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.13.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Camera_t {
    QByteArrayData data[22];
    char stringdata0[321];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Camera_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Camera_t qt_meta_stringdata_Camera = {
    {
QT_MOC_LITERAL(0, 0, 6), // "Camera"
QT_MOC_LITERAL(1, 7, 11), // "callChanged"
QT_MOC_LITERAL(2, 19, 0), // ""
QT_MOC_LITERAL(3, 20, 10), // "CallModel*"
QT_MOC_LITERAL(4, 31, 9), // "callModel"
QT_MOC_LITERAL(5, 41, 16), // "isPreviewChanged"
QT_MOC_LITERAL(6, 58, 9), // "isPreview"
QT_MOC_LITERAL(7, 68, 14), // "isReadyChanged"
QT_MOC_LITERAL(8, 83, 29), // "participantDeviceModelChanged"
QT_MOC_LITERAL(9, 113, 23), // "ParticipantDeviceModel*"
QT_MOC_LITERAL(10, 137, 22), // "participantDeviceModel"
QT_MOC_LITERAL(11, 160, 18), // "requestNewRenderer"
QT_MOC_LITERAL(12, 179, 22), // "videoDefinitionChanged"
QT_MOC_LITERAL(13, 202, 21), // "linphonePlayerChanged"
QT_MOC_LITERAL(14, 224, 12), // "SoundPlayer*"
QT_MOC_LITERAL(15, 237, 14), // "linphonePlayer"
QT_MOC_LITERAL(16, 252, 14), // "qmlNameChanged"
QT_MOC_LITERAL(17, 267, 18), // "onCallStateChanged"
QT_MOC_LITERAL(18, 286, 13), // "resetWindowId"
QT_MOC_LITERAL(19, 300, 4), // "call"
QT_MOC_LITERAL(20, 305, 7), // "isReady"
QT_MOC_LITERAL(21, 313, 7) // "qmlName"

    },
    "Camera\0callChanged\0\0CallModel*\0callModel\0"
    "isPreviewChanged\0isPreview\0isReadyChanged\0"
    "participantDeviceModelChanged\0"
    "ParticipantDeviceModel*\0participantDeviceModel\0"
    "requestNewRenderer\0videoDefinitionChanged\0"
    "linphonePlayerChanged\0SoundPlayer*\0"
    "linphonePlayer\0qmlNameChanged\0"
    "onCallStateChanged\0resetWindowId\0call\0"
    "isReady\0qmlName"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Camera[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       6,   82, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       8,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   64,    2, 0x06 /* Public */,
       5,    1,   67,    2, 0x06 /* Public */,
       7,    0,   70,    2, 0x06 /* Public */,
       8,    1,   71,    2, 0x06 /* Public */,
      11,    0,   74,    2, 0x06 /* Public */,
      12,    0,   75,    2, 0x06 /* Public */,
      13,    1,   76,    2, 0x06 /* Public */,
      16,    0,   79,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      17,    0,   80,    2, 0x0a /* Public */,

 // methods: name, argc, parameters, tag, flags
      18,    0,   81,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, QMetaType::Bool,    6,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 9,   10,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 14,   15,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,

 // methods: parameters
    QMetaType::Void,

 // properties: name, type, flags
      19, 0x80000000 | 3, 0x0049500b,
      10, 0x80000000 | 9, 0x0049510b,
       6, QMetaType::Bool, 0x00495103,
      20, QMetaType::Bool, 0x00495103,
      15, 0x80000000 | 14, 0x0049510b,
      21, QMetaType::QString, 0x00495103,

 // properties: notify_signal_id
       0,
       3,
       1,
       2,
       6,
       7,

       0        // eod
};

void Camera::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Camera *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->callChanged((*reinterpret_cast< CallModel*(*)>(_a[1]))); break;
        case 1: _t->isPreviewChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->isReadyChanged(); break;
        case 3: _t->participantDeviceModelChanged((*reinterpret_cast< ParticipantDeviceModel*(*)>(_a[1]))); break;
        case 4: _t->requestNewRenderer(); break;
        case 5: _t->videoDefinitionChanged(); break;
        case 6: _t->linphonePlayerChanged((*reinterpret_cast< SoundPlayer*(*)>(_a[1]))); break;
        case 7: _t->qmlNameChanged(); break;
        case 8: _t->onCallStateChanged(); break;
        case 9: _t->resetWindowId(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 6:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< SoundPlayer* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (Camera::*)(CallModel * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Camera::callChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (Camera::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Camera::isPreviewChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (Camera::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Camera::isReadyChanged)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (Camera::*)(ParticipantDeviceModel * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Camera::participantDeviceModelChanged)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (Camera::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Camera::requestNewRenderer)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (Camera::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Camera::videoDefinitionChanged)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (Camera::*)(SoundPlayer * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Camera::linphonePlayerChanged)) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (Camera::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Camera::qmlNameChanged)) {
                *result = 7;
                return;
            }
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 4:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< SoundPlayer* >(); break;
        }
    }

#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<Camera *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< CallModel**>(_v) = _t->getCallModel(); break;
        case 1: *reinterpret_cast< ParticipantDeviceModel**>(_v) = _t->getParticipantDeviceModel(); break;
        case 2: *reinterpret_cast< bool*>(_v) = _t->getIsPreview(); break;
        case 3: *reinterpret_cast< bool*>(_v) = _t->getIsReady(); break;
        case 4: *reinterpret_cast< SoundPlayer**>(_v) = _t->getLinphonePlayer(); break;
        case 5: *reinterpret_cast< QString*>(_v) = _t->getQmlName(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<Camera *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setCallModel(*reinterpret_cast< CallModel**>(_v)); break;
        case 1: _t->setParticipantDeviceModel(*reinterpret_cast< ParticipantDeviceModel**>(_v)); break;
        case 2: _t->setIsPreview(*reinterpret_cast< bool*>(_v)); break;
        case 3: _t->setIsReady(*reinterpret_cast< bool*>(_v)); break;
        case 4: _t->setLinphonePlayer(*reinterpret_cast< SoundPlayer**>(_v)); break;
        case 5: _t->setQmlName(*reinterpret_cast< QString*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject Camera::staticMetaObject = { {
    &QQuickFramebufferObject::staticMetaObject,
    qt_meta_stringdata_Camera.data,
    qt_meta_data_Camera,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Camera::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Camera::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Camera.stringdata0))
        return static_cast<void*>(this);
    return QQuickFramebufferObject::qt_metacast(_clname);
}

int Camera::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QQuickFramebufferObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
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
void Camera::callChanged(CallModel * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Camera::isPreviewChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void Camera::isReadyChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void Camera::participantDeviceModelChanged(ParticipantDeviceModel * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void Camera::requestNewRenderer()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void Camera::videoDefinitionChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}

// SIGNAL 6
void Camera::linphonePlayerChanged(SoundPlayer * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void Camera::qmlNameChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 7, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
