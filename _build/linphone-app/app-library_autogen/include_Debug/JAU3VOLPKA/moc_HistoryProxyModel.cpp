/****************************************************************************
** Meta object code from reading C++ file 'HistoryProxyModel.hpp'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.13.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../linphone-app/src/components/history/HistoryProxyModel.hpp"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'HistoryProxyModel.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.13.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_HistoryProxyModel_t {
    QByteArrayData data[14];
    char stringdata0[183];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_HistoryProxyModel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_HistoryProxyModel_t qt_meta_stringdata_HistoryProxyModel = {
    {
QT_MOC_LITERAL(0, 0, 17), // "HistoryProxyModel"
QT_MOC_LITERAL(1, 18, 17), // "moreEntriesLoaded"
QT_MOC_LITERAL(2, 36, 0), // ""
QT_MOC_LITERAL(3, 37, 1), // "n"
QT_MOC_LITERAL(4, 39, 22), // "entryTypeFilterChanged"
QT_MOC_LITERAL(5, 62, 23), // "HistoryModel::EntryType"
QT_MOC_LITERAL(6, 86, 4), // "type"
QT_MOC_LITERAL(7, 91, 15), // "loadMoreEntries"
QT_MOC_LITERAL(8, 107, 18), // "setEntryTypeFilter"
QT_MOC_LITERAL(9, 126, 11), // "removeEntry"
QT_MOC_LITERAL(10, 138, 2), // "id"
QT_MOC_LITERAL(11, 141, 16), // "removeAllEntries"
QT_MOC_LITERAL(12, 158, 17), // "resetMessageCount"
QT_MOC_LITERAL(13, 176, 6) // "reload"

    },
    "HistoryProxyModel\0moreEntriesLoaded\0"
    "\0n\0entryTypeFilterChanged\0"
    "HistoryModel::EntryType\0type\0"
    "loadMoreEntries\0setEntryTypeFilter\0"
    "removeEntry\0id\0removeAllEntries\0"
    "resetMessageCount\0reload"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_HistoryProxyModel[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   59,    2, 0x06 /* Public */,
       4,    1,   62,    2, 0x06 /* Public */,

 // methods: name, argc, parameters, tag, flags
       7,    0,   65,    2, 0x02 /* Public */,
       8,    1,   66,    2, 0x02 /* Public */,
       8,    0,   69,    2, 0x22 /* Public | MethodCloned */,
       9,    1,   70,    2, 0x02 /* Public */,
      11,    0,   73,    2, 0x02 /* Public */,
      12,    0,   74,    2, 0x02 /* Public */,
      13,    0,   75,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, 0x80000000 | 5,    6,

 // methods: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   10,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void HistoryProxyModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<HistoryProxyModel *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->moreEntriesLoaded((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->entryTypeFilterChanged((*reinterpret_cast< HistoryModel::EntryType(*)>(_a[1]))); break;
        case 2: _t->loadMoreEntries(); break;
        case 3: _t->setEntryTypeFilter((*reinterpret_cast< HistoryModel::EntryType(*)>(_a[1]))); break;
        case 4: _t->setEntryTypeFilter(); break;
        case 5: _t->removeEntry((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->removeAllEntries(); break;
        case 7: _t->resetMessageCount(); break;
        case 8: _t->reload(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (HistoryProxyModel::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&HistoryProxyModel::moreEntriesLoaded)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (HistoryProxyModel::*)(HistoryModel::EntryType );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&HistoryProxyModel::entryTypeFilterChanged)) {
                *result = 1;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject HistoryProxyModel::staticMetaObject = { {
    &QSortFilterProxyModel::staticMetaObject,
    qt_meta_stringdata_HistoryProxyModel.data,
    qt_meta_data_HistoryProxyModel,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *HistoryProxyModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *HistoryProxyModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_HistoryProxyModel.stringdata0))
        return static_cast<void*>(this);
    return QSortFilterProxyModel::qt_metacast(_clname);
}

int HistoryProxyModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QSortFilterProxyModel::qt_metacall(_c, _id, _a);
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
    return _id;
}

// SIGNAL 0
void HistoryProxyModel::moreEntriesLoaded(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void HistoryProxyModel::entryTypeFilterChanged(HistoryModel::EntryType _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
