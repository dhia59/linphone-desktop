/****************************************************************************
** Meta object code from reading C++ file 'HistoryModel.hpp'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.13.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../linphone-app/src/components/history/HistoryModel.hpp"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'HistoryModel.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.13.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_HistoryModel_t {
    QByteArrayData data[18];
    char stringdata0[274];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_HistoryModel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_HistoryModel_t qt_meta_stringdata_HistoryModel = {
    {
QT_MOC_LITERAL(0, 0, 12), // "HistoryModel"
QT_MOC_LITERAL(1, 13, 17), // "allEntriesRemoved"
QT_MOC_LITERAL(2, 31, 0), // ""
QT_MOC_LITERAL(3, 32, 16), // "lastEntryRemoved"
QT_MOC_LITERAL(4, 49, 7), // "focused"
QT_MOC_LITERAL(5, 57, 14), // "callCountReset"
QT_MOC_LITERAL(6, 72, 6), // "reload"
QT_MOC_LITERAL(7, 79, 9), // "EntryType"
QT_MOC_LITERAL(8, 89, 12), // "GenericEntry"
QT_MOC_LITERAL(9, 102, 9), // "CallEntry"
QT_MOC_LITERAL(10, 112, 10), // "CallStatus"
QT_MOC_LITERAL(11, 123, 18), // "CallStatusDeclined"
QT_MOC_LITERAL(12, 142, 16), // "CallStatusMissed"
QT_MOC_LITERAL(13, 159, 17), // "CallStatusSuccess"
QT_MOC_LITERAL(14, 177, 17), // "CallStatusAborted"
QT_MOC_LITERAL(15, 195, 22), // "CallStatusEarlyAborted"
QT_MOC_LITERAL(16, 218, 27), // "CallStatusAcceptedElsewhere"
QT_MOC_LITERAL(17, 246, 27) // "CallStatusDeclinedElsewhere"

    },
    "HistoryModel\0allEntriesRemoved\0\0"
    "lastEntryRemoved\0focused\0callCountReset\0"
    "reload\0EntryType\0GenericEntry\0CallEntry\0"
    "CallStatus\0CallStatusDeclined\0"
    "CallStatusMissed\0CallStatusSuccess\0"
    "CallStatusAborted\0CallStatusEarlyAborted\0"
    "CallStatusAcceptedElsewhere\0"
    "CallStatusDeclinedElsewhere"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_HistoryModel[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       2,   44, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   39,    2, 0x06 /* Public */,
       3,    0,   40,    2, 0x06 /* Public */,
       4,    0,   41,    2, 0x06 /* Public */,
       5,    0,   42,    2, 0x06 /* Public */,

 // methods: name, argc, parameters, tag, flags
       6,    0,   43,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // methods: parameters
    QMetaType::Void,

 // enums: name, alias, flags, count, data
       7,    7, 0x0,    2,   54,
      10,   10, 0x0,    7,   58,

 // enum data: key, value
       8, uint(HistoryModel::GenericEntry),
       9, uint(HistoryModel::CallEntry),
      11, uint(HistoryModel::CallStatusDeclined),
      12, uint(HistoryModel::CallStatusMissed),
      13, uint(HistoryModel::CallStatusSuccess),
      14, uint(HistoryModel::CallStatusAborted),
      15, uint(HistoryModel::CallStatusEarlyAborted),
      16, uint(HistoryModel::CallStatusAcceptedElsewhere),
      17, uint(HistoryModel::CallStatusDeclinedElsewhere),

       0        // eod
};

void HistoryModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<HistoryModel *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->allEntriesRemoved(); break;
        case 1: _t->lastEntryRemoved(); break;
        case 2: _t->focused(); break;
        case 3: _t->callCountReset(); break;
        case 4: _t->reload(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (HistoryModel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&HistoryModel::allEntriesRemoved)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (HistoryModel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&HistoryModel::lastEntryRemoved)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (HistoryModel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&HistoryModel::focused)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (HistoryModel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&HistoryModel::callCountReset)) {
                *result = 3;
                return;
            }
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject HistoryModel::staticMetaObject = { {
    &QAbstractListModel::staticMetaObject,
    qt_meta_stringdata_HistoryModel.data,
    qt_meta_data_HistoryModel,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *HistoryModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *HistoryModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_HistoryModel.stringdata0))
        return static_cast<void*>(this);
    return QAbstractListModel::qt_metacast(_clname);
}

int HistoryModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractListModel::qt_metacall(_c, _id, _a);
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
void HistoryModel::allEntriesRemoved()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void HistoryModel::lastEntryRemoved()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void HistoryModel::focused()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void HistoryModel::callCountReset()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
