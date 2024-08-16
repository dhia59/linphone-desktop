/****************************************************************************
** Meta object code from reading C++ file 'CallerManagement.hpp'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.13.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../linphone-app/src/components/selfCare/CallerManagement.hpp"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'CallerManagement.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.13.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_CallerManagement_t {
    QByteArrayData data[10];
    char stringdata0[145];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_CallerManagement_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_CallerManagement_t qt_meta_stringdata_CallerManagement = {
    {
QT_MOC_LITERAL(0, 0, 16), // "CallerManagement"
QT_MOC_LITERAL(1, 17, 25), // "isHideCustomNumberChanged"
QT_MOC_LITERAL(2, 43, 0), // ""
QT_MOC_LITERAL(3, 44, 10), // "dndChanged"
QT_MOC_LITERAL(4, 55, 16), // "isLoadingChanged"
QT_MOC_LITERAL(5, 72, 22), // "hideCallerIdByUsername"
QT_MOC_LITERAL(6, 95, 18), // "isHideCustomNumber"
QT_MOC_LITERAL(7, 114, 16), // "setDndByUsername"
QT_MOC_LITERAL(8, 131, 3), // "dnd"
QT_MOC_LITERAL(9, 135, 9) // "isLoading"

    },
    "CallerManagement\0isHideCustomNumberChanged\0"
    "\0dndChanged\0isLoadingChanged\0"
    "hideCallerIdByUsername\0isHideCustomNumber\0"
    "setDndByUsername\0dnd\0isLoading"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CallerManagement[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       3,   48, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   39,    2, 0x06 /* Public */,
       3,    0,   40,    2, 0x06 /* Public */,
       4,    0,   41,    2, 0x06 /* Public */,

 // methods: name, argc, parameters, tag, flags
       5,    1,   42,    2, 0x02 /* Public */,
       7,    1,   45,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // methods: parameters
    QMetaType::Void, QMetaType::Bool,    6,
    QMetaType::Void, QMetaType::Bool,    8,

 // properties: name, type, flags
       6, QMetaType::Bool, 0x00495103,
       8, QMetaType::Bool, 0x00495103,
       9, QMetaType::Bool, 0x00495103,

 // properties: notify_signal_id
       0,
       1,
       2,

       0        // eod
};

void CallerManagement::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<CallerManagement *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->isHideCustomNumberChanged(); break;
        case 1: _t->dndChanged(); break;
        case 2: _t->isLoadingChanged(); break;
        case 3: _t->hideCallerIdByUsername((*reinterpret_cast< const bool(*)>(_a[1]))); break;
        case 4: _t->setDndByUsername((*reinterpret_cast< const bool(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (CallerManagement::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CallerManagement::isHideCustomNumberChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (CallerManagement::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CallerManagement::dndChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (CallerManagement::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CallerManagement::isLoadingChanged)) {
                *result = 2;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<CallerManagement *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bool*>(_v) = _t->getIsHideCustomNumber(); break;
        case 1: *reinterpret_cast< bool*>(_v) = _t->getDnd(); break;
        case 2: *reinterpret_cast< bool*>(_v) = _t->getIsLoading(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<CallerManagement *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setIsHideCustomNumber(*reinterpret_cast< bool*>(_v)); break;
        case 1: _t->setDnd(*reinterpret_cast< bool*>(_v)); break;
        case 2: _t->setIsLoading(*reinterpret_cast< bool*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject CallerManagement::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_CallerManagement.data,
    qt_meta_data_CallerManagement,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *CallerManagement::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CallerManagement::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CallerManagement.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int CallerManagement::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 3;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void CallerManagement::isHideCustomNumberChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void CallerManagement::dndChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void CallerManagement::isLoadingChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
