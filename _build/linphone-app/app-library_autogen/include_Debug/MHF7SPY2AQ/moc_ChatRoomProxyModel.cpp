/****************************************************************************
** Meta object code from reading C++ file 'ChatRoomProxyModel.hpp'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.13.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../linphone-app/src/components/chat-room/ChatRoomProxyModel.hpp"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ChatRoomProxyModel.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.13.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ChatRoomProxyModel_t {
    QByteArrayData data[51];
    char stringdata0[734];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ChatRoomProxyModel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ChatRoomProxyModel_t qt_meta_stringdata_ChatRoomProxyModel = {
    {
QT_MOC_LITERAL(0, 0, 18), // "ChatRoomProxyModel"
QT_MOC_LITERAL(1, 19, 18), // "peerAddressChanged"
QT_MOC_LITERAL(2, 38, 0), // ""
QT_MOC_LITERAL(3, 39, 11), // "peerAddress"
QT_MOC_LITERAL(4, 51, 19), // "localAddressChanged"
QT_MOC_LITERAL(5, 71, 12), // "localAddress"
QT_MOC_LITERAL(6, 84, 22), // "fullPeerAddressChanged"
QT_MOC_LITERAL(7, 107, 15), // "fullPeerAddress"
QT_MOC_LITERAL(8, 123, 23), // "fullLocalAddressChanged"
QT_MOC_LITERAL(9, 147, 16), // "fullLocalAddress"
QT_MOC_LITERAL(10, 164, 24), // "isRemoteComposingChanged"
QT_MOC_LITERAL(11, 189, 24), // "markAsReadEnabledChanged"
QT_MOC_LITERAL(12, 214, 20), // "chatRoomModelChanged"
QT_MOC_LITERAL(13, 235, 15), // "chatRoomDeleted"
QT_MOC_LITERAL(14, 251, 17), // "moreEntriesLoaded"
QT_MOC_LITERAL(15, 269, 1), // "n"
QT_MOC_LITERAL(16, 271, 22), // "entryTypeFilterChanged"
QT_MOC_LITERAL(17, 294, 4), // "type"
QT_MOC_LITERAL(18, 299, 17), // "filterTextChanged"
QT_MOC_LITERAL(19, 317, 13), // "isCallChanged"
QT_MOC_LITERAL(20, 331, 17), // "cachedTextChanged"
QT_MOC_LITERAL(21, 349, 19), // "onMoreEntriesLoaded"
QT_MOC_LITERAL(22, 369, 5), // "count"
QT_MOC_LITERAL(23, 375, 18), // "setEntryTypeFilter"
QT_MOC_LITERAL(24, 394, 13), // "setFilterText"
QT_MOC_LITERAL(25, 408, 4), // "text"
QT_MOC_LITERAL(26, 413, 23), // "getDisplayNameComposers"
QT_MOC_LITERAL(27, 437, 5), // "getAt"
QT_MOC_LITERAL(28, 443, 3), // "row"
QT_MOC_LITERAL(29, 447, 20), // "loadMoreEntriesAsync"
QT_MOC_LITERAL(30, 468, 15), // "loadMoreEntries"
QT_MOC_LITERAL(31, 484, 16), // "removeAllEntries"
QT_MOC_LITERAL(32, 501, 9), // "removeRow"
QT_MOC_LITERAL(33, 511, 5), // "index"
QT_MOC_LITERAL(34, 517, 14), // "deleteChatRoom"
QT_MOC_LITERAL(35, 532, 11), // "sendMessage"
QT_MOC_LITERAL(36, 544, 7), // "message"
QT_MOC_LITERAL(37, 552, 14), // "forwardMessage"
QT_MOC_LITERAL(38, 567, 17), // "ChatMessageModel*"
QT_MOC_LITERAL(39, 585, 5), // "model"
QT_MOC_LITERAL(40, 591, 7), // "compose"
QT_MOC_LITERAL(41, 599, 17), // "resetMessageCount"
QT_MOC_LITERAL(42, 617, 15), // "loadTillMessage"
QT_MOC_LITERAL(43, 633, 13), // "chatRoomModel"
QT_MOC_LITERAL(44, 647, 14), // "ChatRoomModel*"
QT_MOC_LITERAL(45, 662, 9), // "composers"
QT_MOC_LITERAL(46, 672, 14), // "QList<QString>"
QT_MOC_LITERAL(47, 687, 10), // "cachedText"
QT_MOC_LITERAL(48, 698, 10), // "filterText"
QT_MOC_LITERAL(49, 709, 17), // "markAsReadEnabled"
QT_MOC_LITERAL(50, 727, 6) // "isCall"

    },
    "ChatRoomProxyModel\0peerAddressChanged\0"
    "\0peerAddress\0localAddressChanged\0"
    "localAddress\0fullPeerAddressChanged\0"
    "fullPeerAddress\0fullLocalAddressChanged\0"
    "fullLocalAddress\0isRemoteComposingChanged\0"
    "markAsReadEnabledChanged\0chatRoomModelChanged\0"
    "chatRoomDeleted\0moreEntriesLoaded\0n\0"
    "entryTypeFilterChanged\0type\0"
    "filterTextChanged\0isCallChanged\0"
    "cachedTextChanged\0onMoreEntriesLoaded\0"
    "count\0setEntryTypeFilter\0setFilterText\0"
    "text\0getDisplayNameComposers\0getAt\0"
    "row\0loadMoreEntriesAsync\0loadMoreEntries\0"
    "removeAllEntries\0removeRow\0index\0"
    "deleteChatRoom\0sendMessage\0message\0"
    "forwardMessage\0ChatMessageModel*\0model\0"
    "compose\0resetMessageCount\0loadTillMessage\0"
    "chatRoomModel\0ChatRoomModel*\0composers\0"
    "QList<QString>\0cachedText\0filterText\0"
    "markAsReadEnabled\0isCall"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ChatRoomProxyModel[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      28,   14, // methods
      10,  212, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      13,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,  154,    2, 0x06 /* Public */,
       4,    1,  157,    2, 0x06 /* Public */,
       6,    1,  160,    2, 0x06 /* Public */,
       8,    1,  163,    2, 0x06 /* Public */,
      10,    0,  166,    2, 0x06 /* Public */,
      11,    0,  167,    2, 0x06 /* Public */,
      12,    0,  168,    2, 0x06 /* Public */,
      13,    0,  169,    2, 0x06 /* Public */,
      14,    1,  170,    2, 0x06 /* Public */,
      16,    1,  173,    2, 0x06 /* Public */,
      18,    0,  176,    2, 0x06 /* Public */,
      19,    0,  177,    2, 0x06 /* Public */,
      20,    0,  178,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      21,    1,  179,    2, 0x0a /* Public */,

 // methods: name, argc, parameters, tag, flags
      23,    1,  182,    2, 0x02 /* Public */,
      24,    1,  185,    2, 0x02 /* Public */,
      26,    0,  188,    2, 0x02 /* Public */,
      27,    1,  189,    2, 0x02 /* Public */,
      29,    0,  192,    2, 0x02 /* Public */,
      30,    0,  193,    2, 0x02 /* Public */,
      31,    0,  194,    2, 0x02 /* Public */,
      32,    1,  195,    2, 0x02 /* Public */,
      34,    0,  198,    2, 0x02 /* Public */,
      35,    1,  199,    2, 0x02 /* Public */,
      37,    1,  202,    2, 0x02 /* Public */,
      40,    1,  205,    2, 0x02 /* Public */,
      41,    0,  208,    2, 0x02 /* Public */,
      42,    1,  209,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::Void, QMetaType::QString,    7,
    QMetaType::Void, QMetaType::QString,    9,
    QMetaType::Bool,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   15,
    QMetaType::Void, QMetaType::Int,   17,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,   22,

 // methods: parameters
    QMetaType::Void, QMetaType::Int,   17,
    QMetaType::Void, QMetaType::QString,   25,
    QMetaType::QString,
    QMetaType::QVariant, QMetaType::Int,   28,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   33,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   36,
    QMetaType::Void, 0x80000000 | 38,   39,
    QMetaType::Void, QMetaType::QString,   25,
    QMetaType::Void,
    QMetaType::Int, 0x80000000 | 38,   36,

 // properties: name, type, flags
       3, QMetaType::QString, 0x00495103,
       5, QMetaType::QString, 0x00495103,
       7, QMetaType::QString, 0x00495103,
       9, QMetaType::QString, 0x00495103,
      43, 0x80000000 | 44, 0x0049510b,
      45, 0x80000000 | 46, 0x00495009,
      47, QMetaType::QString, 0x00495103,
      48, QMetaType::QString, 0x00495103,
      49, QMetaType::Bool, 0x00495003,
      50, QMetaType::Bool, 0x00495103,

 // properties: notify_signal_id
       0,
       1,
       2,
       3,
       6,
       4,
      12,
      10,
       5,
      11,

       0        // eod
};

void ChatRoomProxyModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ChatRoomProxyModel *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->peerAddressChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->localAddressChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->fullPeerAddressChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->fullLocalAddressChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: { bool _r = _t->isRemoteComposingChanged();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 5: _t->markAsReadEnabledChanged(); break;
        case 6: _t->chatRoomModelChanged(); break;
        case 7: _t->chatRoomDeleted(); break;
        case 8: _t->moreEntriesLoaded((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 9: _t->entryTypeFilterChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 10: _t->filterTextChanged(); break;
        case 11: _t->isCallChanged(); break;
        case 12: _t->cachedTextChanged(); break;
        case 13: _t->onMoreEntriesLoaded((*reinterpret_cast< const int(*)>(_a[1]))); break;
        case 14: _t->setEntryTypeFilter((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 15: _t->setFilterText((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 16: { QString _r = _t->getDisplayNameComposers();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 17: { QVariant _r = _t->getAt((*reinterpret_cast< int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QVariant*>(_a[0]) = std::move(_r); }  break;
        case 18: _t->loadMoreEntriesAsync(); break;
        case 19: _t->loadMoreEntries(); break;
        case 20: _t->removeAllEntries(); break;
        case 21: _t->removeRow((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 22: _t->deleteChatRoom(); break;
        case 23: _t->sendMessage((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 24: _t->forwardMessage((*reinterpret_cast< ChatMessageModel*(*)>(_a[1]))); break;
        case 25: _t->compose((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 26: _t->resetMessageCount(); break;
        case 27: { int _r = _t->loadTillMessage((*reinterpret_cast< ChatMessageModel*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (ChatRoomProxyModel::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ChatRoomProxyModel::peerAddressChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (ChatRoomProxyModel::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ChatRoomProxyModel::localAddressChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (ChatRoomProxyModel::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ChatRoomProxyModel::fullPeerAddressChanged)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (ChatRoomProxyModel::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ChatRoomProxyModel::fullLocalAddressChanged)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = bool (ChatRoomProxyModel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ChatRoomProxyModel::isRemoteComposingChanged)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (ChatRoomProxyModel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ChatRoomProxyModel::markAsReadEnabledChanged)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (ChatRoomProxyModel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ChatRoomProxyModel::chatRoomModelChanged)) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (ChatRoomProxyModel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ChatRoomProxyModel::chatRoomDeleted)) {
                *result = 7;
                return;
            }
        }
        {
            using _t = void (ChatRoomProxyModel::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ChatRoomProxyModel::moreEntriesLoaded)) {
                *result = 8;
                return;
            }
        }
        {
            using _t = void (ChatRoomProxyModel::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ChatRoomProxyModel::entryTypeFilterChanged)) {
                *result = 9;
                return;
            }
        }
        {
            using _t = void (ChatRoomProxyModel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ChatRoomProxyModel::filterTextChanged)) {
                *result = 10;
                return;
            }
        }
        {
            using _t = void (ChatRoomProxyModel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ChatRoomProxyModel::isCallChanged)) {
                *result = 11;
                return;
            }
        }
        {
            using _t = void (ChatRoomProxyModel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ChatRoomProxyModel::cachedTextChanged)) {
                *result = 12;
                return;
            }
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 4:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< ChatRoomModel* >(); break;
        case 5:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<QString> >(); break;
        }
    }

#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<ChatRoomProxyModel *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->getPeerAddress(); break;
        case 1: *reinterpret_cast< QString*>(_v) = _t->getLocalAddress(); break;
        case 2: *reinterpret_cast< QString*>(_v) = _t->getFullPeerAddress(); break;
        case 3: *reinterpret_cast< QString*>(_v) = _t->getFullLocalAddress(); break;
        case 4: *reinterpret_cast< ChatRoomModel**>(_v) = _t->getChatRoomModel(); break;
        case 5: *reinterpret_cast< QList<QString>*>(_v) = _t->getComposers(); break;
        case 6: *reinterpret_cast< QString*>(_v) = _t->getCachedText(); break;
        case 7: *reinterpret_cast< QString*>(_v) = _t->mFilterText; break;
        case 8: *reinterpret_cast< bool*>(_v) = _t->markAsReadEnabled(); break;
        case 9: *reinterpret_cast< bool*>(_v) = _t->mIsCall; break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<ChatRoomProxyModel *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setPeerAddress(*reinterpret_cast< QString*>(_v)); break;
        case 1: _t->setLocalAddress(*reinterpret_cast< QString*>(_v)); break;
        case 2: _t->setFullPeerAddress(*reinterpret_cast< QString*>(_v)); break;
        case 3: _t->setFullLocalAddress(*reinterpret_cast< QString*>(_v)); break;
        case 4: _t->setChatRoomModel(*reinterpret_cast< ChatRoomModel**>(_v)); break;
        case 6: _t->setCachedText(*reinterpret_cast< QString*>(_v)); break;
        case 7: _t->setFilterText(*reinterpret_cast< QString*>(_v)); break;
        case 8: _t->enableMarkAsRead(*reinterpret_cast< bool*>(_v)); break;
        case 9: _t->setIsCall(*reinterpret_cast< bool*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject ChatRoomProxyModel::staticMetaObject = { {
    &SortFilterProxyModel::staticMetaObject,
    qt_meta_stringdata_ChatRoomProxyModel.data,
    qt_meta_data_ChatRoomProxyModel,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *ChatRoomProxyModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ChatRoomProxyModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ChatRoomProxyModel.stringdata0))
        return static_cast<void*>(this);
    return SortFilterProxyModel::qt_metacast(_clname);
}

int ChatRoomProxyModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = SortFilterProxyModel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 28)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 28;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 28)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 28;
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 10;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 10;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 10;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 10;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 10;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void ChatRoomProxyModel::peerAddressChanged(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void ChatRoomProxyModel::localAddressChanged(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void ChatRoomProxyModel::fullPeerAddressChanged(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void ChatRoomProxyModel::fullLocalAddressChanged(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
bool ChatRoomProxyModel::isRemoteComposingChanged()
{
    bool _t0{};
    void *_a[] = { const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t0))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
    return _t0;
}

// SIGNAL 5
void ChatRoomProxyModel::markAsReadEnabledChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}

// SIGNAL 6
void ChatRoomProxyModel::chatRoomModelChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 6, nullptr);
}

// SIGNAL 7
void ChatRoomProxyModel::chatRoomDeleted()
{
    QMetaObject::activate(this, &staticMetaObject, 7, nullptr);
}

// SIGNAL 8
void ChatRoomProxyModel::moreEntriesLoaded(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void ChatRoomProxyModel::entryTypeFilterChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}

// SIGNAL 10
void ChatRoomProxyModel::filterTextChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 10, nullptr);
}

// SIGNAL 11
void ChatRoomProxyModel::isCallChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 11, nullptr);
}

// SIGNAL 12
void ChatRoomProxyModel::cachedTextChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 12, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
