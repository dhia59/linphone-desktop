/****************************************************************************
** Meta object code from reading C++ file 'TimelineListModel.hpp'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.13.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../linphone-app/src/components/timeline/TimelineListModel.hpp"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QSharedPointer>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'TimelineListModel.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.13.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_TimelineListModel_t {
    QByteArrayData data[33];
    char stringdata0[520];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_TimelineListModel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_TimelineListModel_t qt_meta_stringdata_TimelineListModel = {
    {
QT_MOC_LITERAL(0, 0, 17), // "TimelineListModel"
QT_MOC_LITERAL(1, 18, 12), // "countChanged"
QT_MOC_LITERAL(2, 31, 0), // ""
QT_MOC_LITERAL(3, 32, 20), // "selectedCountChanged"
QT_MOC_LITERAL(4, 53, 13), // "selectedCount"
QT_MOC_LITERAL(5, 67, 15), // "selectedChanged"
QT_MOC_LITERAL(6, 83, 14), // "TimelineModel*"
QT_MOC_LITERAL(7, 98, 13), // "timelineModel"
QT_MOC_LITERAL(8, 112, 6), // "update"
QT_MOC_LITERAL(9, 119, 19), // "removeChatRoomModel"
QT_MOC_LITERAL(10, 139, 29), // "QSharedPointer<ChatRoomModel>"
QT_MOC_LITERAL(11, 169, 5), // "model"
QT_MOC_LITERAL(12, 175, 20), // "onSelectedHasChanged"
QT_MOC_LITERAL(13, 196, 8), // "selected"
QT_MOC_LITERAL(14, 205, 14), // "onChatRoomRead"
QT_MOC_LITERAL(15, 220, 35), // "std::shared_ptr<linphone::Cha..."
QT_MOC_LITERAL(16, 256, 8), // "chatRoom"
QT_MOC_LITERAL(17, 265, 22), // "onChatRoomStateChanged"
QT_MOC_LITERAL(18, 288, 25), // "linphone::ChatRoom::State"
QT_MOC_LITERAL(19, 314, 5), // "state"
QT_MOC_LITERAL(20, 320, 18), // "onCallStateChanged"
QT_MOC_LITERAL(21, 339, 31), // "std::shared_ptr<linphone::Call>"
QT_MOC_LITERAL(22, 371, 4), // "call"
QT_MOC_LITERAL(23, 376, 21), // "linphone::Call::State"
QT_MOC_LITERAL(24, 398, 13), // "onCallCreated"
QT_MOC_LITERAL(25, 412, 17), // "onTimelineDeleted"
QT_MOC_LITERAL(26, 430, 21), // "onTimelineDataChanged"
QT_MOC_LITERAL(27, 452, 16), // "getLastChatRooms"
QT_MOC_LITERAL(28, 469, 8), // "maxCount"
QT_MOC_LITERAL(29, 478, 6), // "select"
QT_MOC_LITERAL(30, 485, 14), // "ChatRoomModel*"
QT_MOC_LITERAL(31, 500, 13), // "chatRoomModel"
QT_MOC_LITERAL(32, 514, 5) // "count"

    },
    "TimelineListModel\0countChanged\0\0"
    "selectedCountChanged\0selectedCount\0"
    "selectedChanged\0TimelineModel*\0"
    "timelineModel\0update\0removeChatRoomModel\0"
    "QSharedPointer<ChatRoomModel>\0model\0"
    "onSelectedHasChanged\0selected\0"
    "onChatRoomRead\0std::shared_ptr<linphone::ChatRoom>\0"
    "chatRoom\0onChatRoomStateChanged\0"
    "linphone::ChatRoom::State\0state\0"
    "onCallStateChanged\0std::shared_ptr<linphone::Call>\0"
    "call\0linphone::Call::State\0onCallCreated\0"
    "onTimelineDeleted\0onTimelineDataChanged\0"
    "getLastChatRooms\0maxCount\0select\0"
    "ChatRoomModel*\0chatRoomModel\0count"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_TimelineListModel[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      14,   14, // methods
       2,  122, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   84,    2, 0x06 /* Public */,
       3,    1,   85,    2, 0x06 /* Public */,
       5,    1,   88,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       8,    0,   91,    2, 0x0a /* Public */,
       9,    1,   92,    2, 0x0a /* Public */,
      12,    1,   95,    2, 0x0a /* Public */,
      14,    1,   98,    2, 0x0a /* Public */,
      17,    2,  101,    2, 0x0a /* Public */,
      20,    2,  106,    2, 0x0a /* Public */,
      24,    1,  111,    2, 0x0a /* Public */,
      25,    0,  114,    2, 0x0a /* Public */,
      26,    0,  115,    2, 0x0a /* Public */,

 // methods: name, argc, parameters, tag, flags
      27,    1,  116,    2, 0x02 /* Public */,
      29,    1,  119,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    4,
    QMetaType::Void, 0x80000000 | 6,    7,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 10,   11,
    QMetaType::Void, QMetaType::Bool,   13,
    QMetaType::Void, 0x80000000 | 15,   16,
    QMetaType::Void, 0x80000000 | 15, 0x80000000 | 18,   16,   19,
    QMetaType::Void, 0x80000000 | 21, 0x80000000 | 23,   22,   19,
    QMetaType::Void, 0x80000000 | 21,   22,
    QMetaType::Void,
    QMetaType::Void,

 // methods: parameters
    QMetaType::QVariantList, QMetaType::Int,   28,
    QMetaType::Void, 0x80000000 | 30,   31,

 // properties: name, type, flags
       4, QMetaType::Int, 0x00495103,
      32, QMetaType::Int, 0x00495001,

 // properties: notify_signal_id
       1,
       0,

       0        // eod
};

void TimelineListModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<TimelineListModel *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->countChanged(); break;
        case 1: _t->selectedCountChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->selectedChanged((*reinterpret_cast< TimelineModel*(*)>(_a[1]))); break;
        case 3: _t->update(); break;
        case 4: _t->removeChatRoomModel((*reinterpret_cast< QSharedPointer<ChatRoomModel>(*)>(_a[1]))); break;
        case 5: _t->onSelectedHasChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 6: _t->onChatRoomRead((*reinterpret_cast< const std::shared_ptr<linphone::ChatRoom>(*)>(_a[1]))); break;
        case 7: _t->onChatRoomStateChanged((*reinterpret_cast< const std::shared_ptr<linphone::ChatRoom>(*)>(_a[1])),(*reinterpret_cast< linphone::ChatRoom::State(*)>(_a[2]))); break;
        case 8: _t->onCallStateChanged((*reinterpret_cast< const std::shared_ptr<linphone::Call>(*)>(_a[1])),(*reinterpret_cast< linphone::Call::State(*)>(_a[2]))); break;
        case 9: _t->onCallCreated((*reinterpret_cast< const std::shared_ptr<linphone::Call>(*)>(_a[1]))); break;
        case 10: _t->onTimelineDeleted(); break;
        case 11: _t->onTimelineDataChanged(); break;
        case 12: { QVariantList _r = _t->getLastChatRooms((*reinterpret_cast< const int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QVariantList*>(_a[0]) = std::move(_r); }  break;
        case 13: _t->select((*reinterpret_cast< ChatRoomModel*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 4:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QSharedPointer<ChatRoomModel> >(); break;
            }
            break;
        case 6:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< std::shared_ptr<linphone::ChatRoom> >(); break;
            }
            break;
        case 7:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< linphone::ChatRoom::State >(); break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< std::shared_ptr<linphone::ChatRoom> >(); break;
            }
            break;
        case 8:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< linphone::Call::State >(); break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< std::shared_ptr<linphone::Call> >(); break;
            }
            break;
        case 9:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< std::shared_ptr<linphone::Call> >(); break;
            }
            break;
        case 13:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< ChatRoomModel* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (TimelineListModel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TimelineListModel::countChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (TimelineListModel::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TimelineListModel::selectedCountChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (TimelineListModel::*)(TimelineModel * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TimelineListModel::selectedChanged)) {
                *result = 2;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<TimelineListModel *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< int*>(_v) = _t->mSelectedCount; break;
        case 1: *reinterpret_cast< int*>(_v) = _t->rowCount(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<TimelineListModel *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setSelectedCount(*reinterpret_cast< int*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject TimelineListModel::staticMetaObject = { {
    &ProxyListModel::staticMetaObject,
    qt_meta_stringdata_TimelineListModel.data,
    qt_meta_data_TimelineListModel,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *TimelineListModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TimelineListModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_TimelineListModel.stringdata0))
        return static_cast<void*>(this);
    return ProxyListModel::qt_metacast(_clname);
}

int TimelineListModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ProxyListModel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 14)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 14)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 2;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void TimelineListModel::countChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void TimelineListModel::selectedCountChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void TimelineListModel::selectedChanged(TimelineModel * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
