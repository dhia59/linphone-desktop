/****************************************************************************
** Meta object code from reading C++ file 'AbstractEventCountNotifier.hpp'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.13.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../linphone-app/src/components/core/event-count-notifier/AbstractEventCountNotifier.hpp"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'AbstractEventCountNotifier.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.13.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_AbstractEventCountNotifier_t {
    QByteArrayData data[12];
    char stringdata0[187];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AbstractEventCountNotifier_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AbstractEventCountNotifier_t qt_meta_stringdata_AbstractEventCountNotifier = {
    {
QT_MOC_LITERAL(0, 0, 26), // "AbstractEventCountNotifier"
QT_MOC_LITERAL(1, 27, 17), // "eventCountChanged"
QT_MOC_LITERAL(2, 45, 0), // ""
QT_MOC_LITERAL(3, 46, 16), // "handleCallMissed"
QT_MOC_LITERAL(4, 63, 12), // "localAddress"
QT_MOC_LITERAL(5, 76, 11), // "peerAddress"
QT_MOC_LITERAL(6, 88, 25), // "handleResetAllMissedCalls"
QT_MOC_LITERAL(7, 114, 22), // "handleResetMissedCalls"
QT_MOC_LITERAL(8, 137, 14), // "ChatRoomModel*"
QT_MOC_LITERAL(9, 152, 13), // "chatRoomModel"
QT_MOC_LITERAL(10, 166, 10), // "CallModel*"
QT_MOC_LITERAL(11, 177, 9) // "callModel"

    },
    "AbstractEventCountNotifier\0eventCountChanged\0"
    "\0handleCallMissed\0localAddress\0"
    "peerAddress\0handleResetAllMissedCalls\0"
    "handleResetMissedCalls\0ChatRoomModel*\0"
    "chatRoomModel\0CallModel*\0callModel"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AbstractEventCountNotifier[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   39,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    2,   40,    2, 0x0a /* Public */,
       6,    0,   45,    2, 0x0a /* Public */,
       7,    1,   46,    2, 0x0a /* Public */,
       3,    1,   49,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    4,    5,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 8,    9,
    QMetaType::Void, 0x80000000 | 10,   11,

       0        // eod
};

void AbstractEventCountNotifier::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<AbstractEventCountNotifier *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->eventCountChanged(); break;
        case 1: _t->handleCallMissed((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 2: _t->handleResetAllMissedCalls(); break;
        case 3: _t->handleResetMissedCalls((*reinterpret_cast< ChatRoomModel*(*)>(_a[1]))); break;
        case 4: _t->handleCallMissed((*reinterpret_cast< CallModel*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (AbstractEventCountNotifier::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AbstractEventCountNotifier::eventCountChanged)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject AbstractEventCountNotifier::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_AbstractEventCountNotifier.data,
    qt_meta_data_AbstractEventCountNotifier,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *AbstractEventCountNotifier::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AbstractEventCountNotifier::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_AbstractEventCountNotifier.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int AbstractEventCountNotifier::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void AbstractEventCountNotifier::eventCountChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
