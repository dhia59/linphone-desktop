/****************************************************************************
** Meta object code from reading C++ file 'Notifier.hpp'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.13.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../linphone-app/src/components/notifier/Notifier.hpp"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'Notifier.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.13.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Notifier_t {
    QByteArrayData data[5];
    char stringdata0[70];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Notifier_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Notifier_t qt_meta_stringdata_Notifier = {
    {
QT_MOC_LITERAL(0, 0, 8), // "Notifier"
QT_MOC_LITERAL(1, 9, 27), // "deleteNotificationOnTimeout"
QT_MOC_LITERAL(2, 37, 0), // ""
QT_MOC_LITERAL(3, 38, 12), // "notification"
QT_MOC_LITERAL(4, 51, 18) // "deleteNotification"

    },
    "Notifier\0deleteNotificationOnTimeout\0"
    "\0notification\0deleteNotification"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Notifier[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   24,    2, 0x0a /* Public */,
       4,    1,   27,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, QMetaType::QVariant,    3,
    QMetaType::Void, QMetaType::QVariant,    3,

       0        // eod
};

void Notifier::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Notifier *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->deleteNotificationOnTimeout((*reinterpret_cast< QVariant(*)>(_a[1]))); break;
        case 1: _t->deleteNotification((*reinterpret_cast< QVariant(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject Notifier::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_Notifier.data,
    qt_meta_data_Notifier,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Notifier::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Notifier::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Notifier.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int Notifier::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 2;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
