/****************************************************************************
** Meta object code from reading C++ file 'ForwardingManagement.hpp'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.13.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../linphone-app/src/components/selfCare/ForwardingManagement.hpp"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ForwardingManagement.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.13.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ForwardingManagement_t {
    QByteArrayData data[13];
    char stringdata0[208];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ForwardingManagement_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ForwardingManagement_t qt_meta_stringdata_ForwardingManagement = {
    {
QT_MOC_LITERAL(0, 0, 20), // "ForwardingManagement"
QT_MOC_LITERAL(1, 21, 16), // "activationFailed"
QT_MOC_LITERAL(2, 38, 0), // ""
QT_MOC_LITERAL(3, 39, 16), // "isLoadingChanged"
QT_MOC_LITERAL(4, 56, 17), // "addForwardingRule"
QT_MOC_LITERAL(5, 74, 3), // "map"
QT_MOC_LITERAL(6, 78, 18), // "editForwardingRule"
QT_MOC_LITERAL(7, 97, 20), // "deleteForwardingRule"
QT_MOC_LITERAL(8, 118, 12), // "forwardingId"
QT_MOC_LITERAL(9, 131, 33), // "activateDesactivateForwarding..."
QT_MOC_LITERAL(10, 165, 16), // "ForwardingModel*"
QT_MOC_LITERAL(11, 182, 15), // "forwardingmodel"
QT_MOC_LITERAL(12, 198, 9) // "isLoading"

    },
    "ForwardingManagement\0activationFailed\0"
    "\0isLoadingChanged\0addForwardingRule\0"
    "map\0editForwardingRule\0deleteForwardingRule\0"
    "forwardingId\0activateDesactivateForwardingRule\0"
    "ForwardingModel*\0forwardingmodel\0"
    "isLoading"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ForwardingManagement[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       1,   58, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   44,    2, 0x06 /* Public */,
       3,    0,   45,    2, 0x06 /* Public */,

 // methods: name, argc, parameters, tag, flags
       4,    1,   46,    2, 0x02 /* Public */,
       6,    1,   49,    2, 0x02 /* Public */,
       7,    1,   52,    2, 0x02 /* Public */,
       9,    1,   55,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,

 // methods: parameters
    QMetaType::Bool, QMetaType::QVariantMap,    5,
    QMetaType::Bool, QMetaType::QVariantMap,    5,
    QMetaType::Bool, QMetaType::QString,    8,
    QMetaType::Bool, 0x80000000 | 10,   11,

 // properties: name, type, flags
      12, QMetaType::Bool, 0x00495103,

 // properties: notify_signal_id
       1,

       0        // eod
};

void ForwardingManagement::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ForwardingManagement *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->activationFailed(); break;
        case 1: _t->isLoadingChanged(); break;
        case 2: { bool _r = _t->addForwardingRule((*reinterpret_cast< const QVariantMap(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 3: { bool _r = _t->editForwardingRule((*reinterpret_cast< const QVariantMap(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 4: { bool _r = _t->deleteForwardingRule((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 5: { bool _r = _t->activateDesactivateForwardingRule((*reinterpret_cast< ForwardingModel*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 5:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< ForwardingModel* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (ForwardingManagement::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ForwardingManagement::activationFailed)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (ForwardingManagement::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ForwardingManagement::isLoadingChanged)) {
                *result = 1;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<ForwardingManagement *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bool*>(_v) = _t->getIsLoading(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<ForwardingManagement *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setIsLoading(*reinterpret_cast< bool*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject ForwardingManagement::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_ForwardingManagement.data,
    qt_meta_data_ForwardingManagement,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *ForwardingManagement::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ForwardingManagement::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ForwardingManagement.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int ForwardingManagement::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 1;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void ForwardingManagement::activationFailed()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void ForwardingManagement::isLoadingChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
