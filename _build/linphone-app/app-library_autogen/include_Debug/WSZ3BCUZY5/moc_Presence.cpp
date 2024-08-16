/****************************************************************************
** Meta object code from reading C++ file 'Presence.hpp'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.13.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../linphone-app/src/components/presence/Presence.hpp"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'Presence.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.13.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Presence_t {
    QByteArrayData data[18];
    char stringdata0[207];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Presence_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Presence_t qt_meta_stringdata_Presence = {
    {
QT_MOC_LITERAL(0, 0, 8), // "Presence"
QT_MOC_LITERAL(1, 9, 16), // "getPresenceLevel"
QT_MOC_LITERAL(2, 26, 13), // "PresenceLevel"
QT_MOC_LITERAL(3, 40, 0), // ""
QT_MOC_LITERAL(4, 41, 14), // "PresenceStatus"
QT_MOC_LITERAL(5, 56, 6), // "status"
QT_MOC_LITERAL(6, 63, 25), // "getPresenceStatusAsString"
QT_MOC_LITERAL(7, 89, 30), // "getBetterPresenceLevelIconName"
QT_MOC_LITERAL(8, 120, 5), // "level"
QT_MOC_LITERAL(9, 126, 24), // "getPresenceLevelIconName"
QT_MOC_LITERAL(10, 151, 6), // "Online"
QT_MOC_LITERAL(11, 158, 4), // "Busy"
QT_MOC_LITERAL(12, 163, 12), // "DoNotDisturb"
QT_MOC_LITERAL(13, 176, 7), // "Offline"
QT_MOC_LITERAL(14, 184, 5), // "Green"
QT_MOC_LITERAL(15, 190, 6), // "Orange"
QT_MOC_LITERAL(16, 197, 3), // "Red"
QT_MOC_LITERAL(17, 201, 5) // "White"

    },
    "Presence\0getPresenceLevel\0PresenceLevel\0"
    "\0PresenceStatus\0status\0getPresenceStatusAsString\0"
    "getBetterPresenceLevelIconName\0level\0"
    "getPresenceLevelIconName\0Online\0Busy\0"
    "DoNotDisturb\0Offline\0Green\0Orange\0Red\0"
    "White"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Presence[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       2,   46, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // methods: name, argc, parameters, tag, flags
       1,    1,   34,    3, 0x02 /* Public */,
       6,    1,   37,    3, 0x02 /* Public */,
       7,    1,   40,    3, 0x02 /* Public */,
       9,    1,   43,    3, 0x02 /* Public */,

 // methods: parameters
    0x80000000 | 2, 0x80000000 | 4,    5,
    QMetaType::QString, 0x80000000 | 4,    5,
    QMetaType::QString, 0x80000000 | 2,    8,
    QMetaType::QString, 0x80000000 | 2,    8,

 // enums: name, alias, flags, count, data
       4,    4, 0x0,    4,   56,
       2,    2, 0x0,    4,   64,

 // enum data: key, value
      10, uint(Presence::Online),
      11, uint(Presence::Busy),
      12, uint(Presence::DoNotDisturb),
      13, uint(Presence::Offline),
      14, uint(Presence::Green),
      15, uint(Presence::Orange),
      16, uint(Presence::Red),
      17, uint(Presence::White),

       0        // eod
};

void Presence::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Presence *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: { PresenceLevel _r = _t->getPresenceLevel((*reinterpret_cast< const PresenceStatus(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< PresenceLevel*>(_a[0]) = std::move(_r); }  break;
        case 1: { QString _r = _t->getPresenceStatusAsString((*reinterpret_cast< const PresenceStatus(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 2: { QString _r = _t->getBetterPresenceLevelIconName((*reinterpret_cast< const PresenceLevel(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 3: { QString _r = _t->getPresenceLevelIconName((*reinterpret_cast< const PresenceLevel(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject Presence::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_Presence.data,
    qt_meta_data_Presence,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Presence::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Presence::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Presence.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int Presence::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
