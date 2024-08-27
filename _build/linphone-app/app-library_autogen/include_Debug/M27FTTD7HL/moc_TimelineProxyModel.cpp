/****************************************************************************
** Meta object code from reading C++ file 'TimelineProxyModel.hpp'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.13.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../linphone-app/src/components/timeline/TimelineProxyModel.hpp"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'TimelineProxyModel.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.13.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_TimelineProxyModel_t {
    QByteArrayData data[33];
    char stringdata0[441];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_TimelineProxyModel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_TimelineProxyModel_t qt_meta_stringdata_TimelineProxyModel = {
    {
QT_MOC_LITERAL(0, 0, 18), // "TimelineProxyModel"
QT_MOC_LITERAL(1, 19, 12), // "countChanged"
QT_MOC_LITERAL(2, 32, 0), // ""
QT_MOC_LITERAL(3, 33, 20), // "selectedCountChanged"
QT_MOC_LITERAL(4, 54, 13), // "selectedCount"
QT_MOC_LITERAL(5, 68, 15), // "selectedChanged"
QT_MOC_LITERAL(6, 84, 14), // "TimelineModel*"
QT_MOC_LITERAL(7, 99, 13), // "timelineModel"
QT_MOC_LITERAL(8, 113, 18), // "filterFlagsChanged"
QT_MOC_LITERAL(9, 132, 17), // "filterTextChanged"
QT_MOC_LITERAL(10, 150, 17), // "listSourceChanged"
QT_MOC_LITERAL(11, 168, 11), // "unselectAll"
QT_MOC_LITERAL(12, 180, 14), // "setFilterFlags"
QT_MOC_LITERAL(13, 195, 11), // "filterFlags"
QT_MOC_LITERAL(14, 207, 13), // "setFilterText"
QT_MOC_LITERAL(15, 221, 4), // "text"
QT_MOC_LITERAL(16, 226, 16), // "getFirstChatRoom"
QT_MOC_LITERAL(17, 243, 3), // "row"
QT_MOC_LITERAL(18, 247, 10), // "listSource"
QT_MOC_LITERAL(19, 258, 18), // "TimelineListSource"
QT_MOC_LITERAL(20, 277, 10), // "filterText"
QT_MOC_LITERAL(21, 288, 5), // "count"
QT_MOC_LITERAL(22, 294, 14), // "TimelineFilter"
QT_MOC_LITERAL(23, 309, 16), // "StandardChatRoom"
QT_MOC_LITERAL(24, 326, 14), // "SecureChatRoom"
QT_MOC_LITERAL(25, 341, 14), // "SimpleChatRoom"
QT_MOC_LITERAL(26, 356, 13), // "GroupChatRoom"
QT_MOC_LITERAL(27, 370, 17), // "EphemeralChatRoom"
QT_MOC_LITERAL(28, 388, 19), // "NoEphemeralChatRoom"
QT_MOC_LITERAL(29, 408, 12), // "AllChatRooms"
QT_MOC_LITERAL(30, 421, 9), // "Undefined"
QT_MOC_LITERAL(31, 431, 4), // "Main"
QT_MOC_LITERAL(32, 436, 4) // "Copy"

    },
    "TimelineProxyModel\0countChanged\0\0"
    "selectedCountChanged\0selectedCount\0"
    "selectedChanged\0TimelineModel*\0"
    "timelineModel\0filterFlagsChanged\0"
    "filterTextChanged\0listSourceChanged\0"
    "unselectAll\0setFilterFlags\0filterFlags\0"
    "setFilterText\0text\0getFirstChatRoom\0"
    "row\0listSource\0TimelineListSource\0"
    "filterText\0count\0TimelineFilter\0"
    "StandardChatRoom\0SecureChatRoom\0"
    "SimpleChatRoom\0GroupChatRoom\0"
    "EphemeralChatRoom\0NoEphemeralChatRoom\0"
    "AllChatRooms\0Undefined\0Main\0Copy"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_TimelineProxyModel[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       4,   84, // properties
       2,  100, // enums/sets
       0,    0, // constructors
       0,       // flags
       6,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   64,    2, 0x06 /* Public */,
       3,    1,   65,    2, 0x06 /* Public */,
       5,    1,   68,    2, 0x06 /* Public */,
       8,    0,   71,    2, 0x06 /* Public */,
       9,    0,   72,    2, 0x06 /* Public */,
      10,    0,   73,    2, 0x06 /* Public */,

 // methods: name, argc, parameters, tag, flags
      11,    0,   74,    2, 0x02 /* Public */,
      12,    1,   75,    2, 0x02 /* Public */,
      14,    1,   78,    2, 0x02 /* Public */,
      16,    1,   81,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    4,
    QMetaType::Void, 0x80000000 | 6,    7,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // methods: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   13,
    QMetaType::Void, QMetaType::QString,   15,
    0x80000000 | 6, QMetaType::Int,   17,

 // properties: name, type, flags
      18, 0x80000000 | 19, 0x0049510b,
      13, QMetaType::Int, 0x00495103,
      20, QMetaType::QString, 0x00495103,
      21, QMetaType::Int, 0x00495001,

 // properties: notify_signal_id
       5,
       3,
       4,
       0,

 // enums: name, alias, flags, count, data
      22,   22, 0x0,    7,  110,
      19,   19, 0x0,    3,  124,

 // enum data: key, value
      23, uint(TimelineProxyModel::StandardChatRoom),
      24, uint(TimelineProxyModel::SecureChatRoom),
      25, uint(TimelineProxyModel::SimpleChatRoom),
      26, uint(TimelineProxyModel::GroupChatRoom),
      27, uint(TimelineProxyModel::EphemeralChatRoom),
      28, uint(TimelineProxyModel::NoEphemeralChatRoom),
      29, uint(TimelineProxyModel::AllChatRooms),
      30, uint(TimelineProxyModel::Undefined),
      31, uint(TimelineProxyModel::Main),
      32, uint(TimelineProxyModel::Copy),

       0        // eod
};

void TimelineProxyModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<TimelineProxyModel *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->countChanged(); break;
        case 1: _t->selectedCountChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->selectedChanged((*reinterpret_cast< TimelineModel*(*)>(_a[1]))); break;
        case 3: _t->filterFlagsChanged(); break;
        case 4: _t->filterTextChanged(); break;
        case 5: _t->listSourceChanged(); break;
        case 6: _t->unselectAll(); break;
        case 7: _t->setFilterFlags((*reinterpret_cast< const int(*)>(_a[1]))); break;
        case 8: _t->setFilterText((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 9: { TimelineModel* _r = _t->getFirstChatRoom((*reinterpret_cast< int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< TimelineModel**>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (TimelineProxyModel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TimelineProxyModel::countChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (TimelineProxyModel::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TimelineProxyModel::selectedCountChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (TimelineProxyModel::*)(TimelineModel * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TimelineProxyModel::selectedChanged)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (TimelineProxyModel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TimelineProxyModel::filterFlagsChanged)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (TimelineProxyModel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TimelineProxyModel::filterTextChanged)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (TimelineProxyModel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TimelineProxyModel::listSourceChanged)) {
                *result = 5;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<TimelineProxyModel *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< TimelineListSource*>(_v) = _t->getListSource(); break;
        case 1: *reinterpret_cast< int*>(_v) = _t->mFilterFlags; break;
        case 2: *reinterpret_cast< QString*>(_v) = _t->mFilterText; break;
        case 3: *reinterpret_cast< int*>(_v) = _t->rowCount(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<TimelineProxyModel *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setListSource(*reinterpret_cast< TimelineListSource*>(_v)); break;
        case 1: _t->setFilterFlags(*reinterpret_cast< int*>(_v)); break;
        case 2: _t->setFilterText(*reinterpret_cast< QString*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject TimelineProxyModel::staticMetaObject = { {
    &QSortFilterProxyModel::staticMetaObject,
    qt_meta_stringdata_TimelineProxyModel.data,
    qt_meta_data_TimelineProxyModel,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *TimelineProxyModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TimelineProxyModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_TimelineProxyModel.stringdata0))
        return static_cast<void*>(this);
    return QSortFilterProxyModel::qt_metacast(_clname);
}

int TimelineProxyModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QSortFilterProxyModel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 10;
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
void TimelineProxyModel::countChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void TimelineProxyModel::selectedCountChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void TimelineProxyModel::selectedChanged(TimelineModel * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void TimelineProxyModel::filterFlagsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void TimelineProxyModel::filterTextChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void TimelineProxyModel::listSourceChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
