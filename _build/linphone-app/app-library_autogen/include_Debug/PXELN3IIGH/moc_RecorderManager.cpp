/****************************************************************************
** Meta object code from reading C++ file 'RecorderManager.hpp'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.13.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../linphone-app/src/components/recorder/RecorderManager.hpp"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'RecorderManager.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.13.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_RecorderManager_t {
    QByteArrayData data[8];
    char stringdata0[130];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_RecorderManager_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_RecorderManager_t qt_meta_stringdata_RecorderManager = {
    {
QT_MOC_LITERAL(0, 0, 15), // "RecorderManager"
QT_MOC_LITERAL(1, 16, 24), // "haveVocalRecorderChanged"
QT_MOC_LITERAL(2, 41, 0), // ""
QT_MOC_LITERAL(3, 42, 16), // "getVocalRecorder"
QT_MOC_LITERAL(4, 59, 14), // "RecorderModel*"
QT_MOC_LITERAL(5, 74, 18), // "resetVocalRecorder"
QT_MOC_LITERAL(6, 93, 18), // "clearVocalRecorder"
QT_MOC_LITERAL(7, 112, 17) // "haveVocalRecorder"

    },
    "RecorderManager\0haveVocalRecorderChanged\0"
    "\0getVocalRecorder\0RecorderModel*\0"
    "resetVocalRecorder\0clearVocalRecorder\0"
    "haveVocalRecorder"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_RecorderManager[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       1,   38, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   34,    2, 0x06 /* Public */,

 // methods: name, argc, parameters, tag, flags
       3,    0,   35,    2, 0x02 /* Public */,
       5,    0,   36,    2, 0x02 /* Public */,
       6,    0,   37,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void,

 // methods: parameters
    0x80000000 | 4,
    0x80000000 | 4,
    QMetaType::Void,

 // properties: name, type, flags
       7, QMetaType::Bool, 0x00495001,

 // properties: notify_signal_id
       0,

       0        // eod
};

void RecorderManager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<RecorderManager *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->haveVocalRecorderChanged(); break;
        case 1: { RecorderModel* _r = _t->getVocalRecorder();
            if (_a[0]) *reinterpret_cast< RecorderModel**>(_a[0]) = std::move(_r); }  break;
        case 2: { RecorderModel* _r = _t->resetVocalRecorder();
            if (_a[0]) *reinterpret_cast< RecorderModel**>(_a[0]) = std::move(_r); }  break;
        case 3: _t->clearVocalRecorder(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (RecorderManager::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&RecorderManager::haveVocalRecorderChanged)) {
                *result = 0;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<RecorderManager *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bool*>(_v) = _t->haveVocalRecorder(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject RecorderManager::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_RecorderManager.data,
    qt_meta_data_RecorderManager,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *RecorderManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *RecorderManager::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_RecorderManager.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int RecorderManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
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
void RecorderManager::haveVocalRecorderChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
