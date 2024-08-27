/****************************************************************************
** Meta object code from reading C++ file 'ChatMessageListener.hpp'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.13.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../linphone-app/src/components/chat-events/ChatMessageListener.hpp"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ChatMessageListener.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.13.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ChatMessageListener_t {
    QByteArrayData data[23];
    char stringdata0[484];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ChatMessageListener_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ChatMessageListener_t qt_meta_stringdata_ChatMessageListener = {
    {
QT_MOC_LITERAL(0, 0, 19), // "ChatMessageListener"
QT_MOC_LITERAL(1, 20, 16), // "fileTransferRecv"
QT_MOC_LITERAL(2, 37, 0), // ""
QT_MOC_LITERAL(3, 38, 38), // "std::shared_ptr<linphone::Cha..."
QT_MOC_LITERAL(4, 77, 7), // "message"
QT_MOC_LITERAL(5, 85, 34), // "std::shared_ptr<linphone::Con..."
QT_MOC_LITERAL(6, 120, 7), // "content"
QT_MOC_LITERAL(7, 128, 39), // "std::shared_ptr<const linphon..."
QT_MOC_LITERAL(8, 168, 6), // "buffer"
QT_MOC_LITERAL(9, 175, 21), // "fileTransferSendChunk"
QT_MOC_LITERAL(10, 197, 6), // "size_t"
QT_MOC_LITERAL(11, 204, 6), // "offset"
QT_MOC_LITERAL(12, 211, 4), // "size"
QT_MOC_LITERAL(13, 216, 33), // "std::shared_ptr<linphone::Buf..."
QT_MOC_LITERAL(14, 250, 16), // "fileTransferSend"
QT_MOC_LITERAL(15, 267, 30), // "fileTransferProgressIndication"
QT_MOC_LITERAL(16, 298, 15), // "msgStateChanged"
QT_MOC_LITERAL(17, 314, 28), // "linphone::ChatMessage::State"
QT_MOC_LITERAL(18, 343, 5), // "state"
QT_MOC_LITERAL(19, 349, 27), // "participantImdnStateChanged"
QT_MOC_LITERAL(20, 377, 53), // "std::shared_ptr<const linphon..."
QT_MOC_LITERAL(21, 431, 28), // "ephemeralMessageTimerStarted"
QT_MOC_LITERAL(22, 460, 23) // "ephemeralMessageDeleted"

    },
    "ChatMessageListener\0fileTransferRecv\0"
    "\0std::shared_ptr<linphone::ChatMessage>\0"
    "message\0std::shared_ptr<linphone::Content>\0"
    "content\0std::shared_ptr<const linphone::Buffer>\0"
    "buffer\0fileTransferSendChunk\0size_t\0"
    "offset\0size\0std::shared_ptr<linphone::Buffer>\0"
    "fileTransferSend\0fileTransferProgressIndication\0"
    "msgStateChanged\0linphone::ChatMessage::State\0"
    "state\0participantImdnStateChanged\0"
    "std::shared_ptr<const linphone::ParticipantImdnState>\0"
    "ephemeralMessageTimerStarted\0"
    "ephemeralMessageDeleted"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ChatMessageListener[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       8,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    3,   54,    2, 0x06 /* Public */,
       9,    5,   61,    2, 0x06 /* Public */,
      14,    4,   72,    2, 0x06 /* Public */,
      15,    4,   81,    2, 0x06 /* Public */,
      16,    2,   90,    2, 0x06 /* Public */,
      19,    2,   95,    2, 0x06 /* Public */,
      21,    1,  100,    2, 0x06 /* Public */,
      22,    1,  103,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 5, 0x80000000 | 7,    4,    6,    8,
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 5, 0x80000000 | 10, 0x80000000 | 10, 0x80000000 | 13,    4,    6,   11,   12,    8,
    0x80000000 | 13, 0x80000000 | 3, 0x80000000 | 5, 0x80000000 | 10, 0x80000000 | 10,    2,    2,    2,    2,
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 5, 0x80000000 | 10, 0x80000000 | 10,    4,    2,   11,    2,
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 17,    4,   18,
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 20,    4,   18,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3,    4,

       0        // eod
};

void ChatMessageListener::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ChatMessageListener *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->fileTransferRecv((*reinterpret_cast< const std::shared_ptr<linphone::ChatMessage>(*)>(_a[1])),(*reinterpret_cast< const std::shared_ptr<linphone::Content>(*)>(_a[2])),(*reinterpret_cast< const std::shared_ptr<const linphone::Buffer>(*)>(_a[3]))); break;
        case 1: _t->fileTransferSendChunk((*reinterpret_cast< const std::shared_ptr<linphone::ChatMessage>(*)>(_a[1])),(*reinterpret_cast< const std::shared_ptr<linphone::Content>(*)>(_a[2])),(*reinterpret_cast< size_t(*)>(_a[3])),(*reinterpret_cast< size_t(*)>(_a[4])),(*reinterpret_cast< const std::shared_ptr<linphone::Buffer>(*)>(_a[5]))); break;
        case 2: { std::shared_ptr<linphone::Buffer> _r = _t->fileTransferSend((*reinterpret_cast< const std::shared_ptr<linphone::ChatMessage>(*)>(_a[1])),(*reinterpret_cast< const std::shared_ptr<linphone::Content>(*)>(_a[2])),(*reinterpret_cast< size_t(*)>(_a[3])),(*reinterpret_cast< size_t(*)>(_a[4])));
            if (_a[0]) *reinterpret_cast< std::shared_ptr<linphone::Buffer>*>(_a[0]) = std::move(_r); }  break;
        case 3: _t->fileTransferProgressIndication((*reinterpret_cast< const std::shared_ptr<linphone::ChatMessage>(*)>(_a[1])),(*reinterpret_cast< const std::shared_ptr<linphone::Content>(*)>(_a[2])),(*reinterpret_cast< size_t(*)>(_a[3])),(*reinterpret_cast< size_t(*)>(_a[4]))); break;
        case 4: _t->msgStateChanged((*reinterpret_cast< const std::shared_ptr<linphone::ChatMessage>(*)>(_a[1])),(*reinterpret_cast< linphone::ChatMessage::State(*)>(_a[2]))); break;
        case 5: _t->participantImdnStateChanged((*reinterpret_cast< const std::shared_ptr<linphone::ChatMessage>(*)>(_a[1])),(*reinterpret_cast< const std::shared_ptr<const linphone::ParticipantImdnState>(*)>(_a[2]))); break;
        case 6: _t->ephemeralMessageTimerStarted((*reinterpret_cast< const std::shared_ptr<linphone::ChatMessage>(*)>(_a[1]))); break;
        case 7: _t->ephemeralMessageDeleted((*reinterpret_cast< const std::shared_ptr<linphone::ChatMessage>(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< std::shared_ptr<linphone::ChatMessage> >(); break;
            }
            break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< std::shared_ptr<linphone::ChatMessage> >(); break;
            }
            break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< std::shared_ptr<linphone::ChatMessage> >(); break;
            }
            break;
        case 3:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< std::shared_ptr<linphone::ChatMessage> >(); break;
            }
            break;
        case 4:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< std::shared_ptr<linphone::ChatMessage> >(); break;
            }
            break;
        case 5:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< std::shared_ptr<linphone::ChatMessage> >(); break;
            }
            break;
        case 6:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< std::shared_ptr<linphone::ChatMessage> >(); break;
            }
            break;
        case 7:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< std::shared_ptr<linphone::ChatMessage> >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (ChatMessageListener::*)(const std::shared_ptr<linphone::ChatMessage> & , const std::shared_ptr<linphone::Content> & , const std::shared_ptr<const linphone::Buffer> & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ChatMessageListener::fileTransferRecv)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (ChatMessageListener::*)(const std::shared_ptr<linphone::ChatMessage> & , const std::shared_ptr<linphone::Content> & , size_t , size_t , const std::shared_ptr<linphone::Buffer> & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ChatMessageListener::fileTransferSendChunk)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = std::shared_ptr<linphone::Buffer> (ChatMessageListener::*)(const std::shared_ptr<linphone::ChatMessage> & , const std::shared_ptr<linphone::Content> & , size_t , size_t );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ChatMessageListener::fileTransferSend)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (ChatMessageListener::*)(const std::shared_ptr<linphone::ChatMessage> & , const std::shared_ptr<linphone::Content> & , size_t , size_t );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ChatMessageListener::fileTransferProgressIndication)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (ChatMessageListener::*)(const std::shared_ptr<linphone::ChatMessage> & , linphone::ChatMessage::State );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ChatMessageListener::msgStateChanged)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (ChatMessageListener::*)(const std::shared_ptr<linphone::ChatMessage> & , const std::shared_ptr<const linphone::ParticipantImdnState> & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ChatMessageListener::participantImdnStateChanged)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (ChatMessageListener::*)(const std::shared_ptr<linphone::ChatMessage> & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ChatMessageListener::ephemeralMessageTimerStarted)) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (ChatMessageListener::*)(const std::shared_ptr<linphone::ChatMessage> & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ChatMessageListener::ephemeralMessageDeleted)) {
                *result = 7;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject ChatMessageListener::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_ChatMessageListener.data,
    qt_meta_data_ChatMessageListener,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *ChatMessageListener::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ChatMessageListener::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ChatMessageListener.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "linphone::ChatMessageListener"))
        return static_cast< linphone::ChatMessageListener*>(this);
    return QObject::qt_metacast(_clname);
}

int ChatMessageListener::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    }
    return _id;
}

// SIGNAL 0
void ChatMessageListener::fileTransferRecv(const std::shared_ptr<linphone::ChatMessage> & _t1, const std::shared_ptr<linphone::Content> & _t2, const std::shared_ptr<const linphone::Buffer> & _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void ChatMessageListener::fileTransferSendChunk(const std::shared_ptr<linphone::ChatMessage> & _t1, const std::shared_ptr<linphone::Content> & _t2, size_t _t3, size_t _t4, const std::shared_ptr<linphone::Buffer> & _t5)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t4))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t5))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
std::shared_ptr<linphone::Buffer> ChatMessageListener::fileTransferSend(const std::shared_ptr<linphone::ChatMessage> & _t1, const std::shared_ptr<linphone::Content> & _t2, size_t _t3, size_t _t4)
{
    std::shared_ptr<linphone::Buffer> _t0{};
    void *_a[] = { const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t0))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t4))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
    return _t0;
}

// SIGNAL 3
void ChatMessageListener::fileTransferProgressIndication(const std::shared_ptr<linphone::ChatMessage> & _t1, const std::shared_ptr<linphone::Content> & _t2, size_t _t3, size_t _t4)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t4))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void ChatMessageListener::msgStateChanged(const std::shared_ptr<linphone::ChatMessage> & _t1, linphone::ChatMessage::State _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void ChatMessageListener::participantImdnStateChanged(const std::shared_ptr<linphone::ChatMessage> & _t1, const std::shared_ptr<const linphone::ParticipantImdnState> & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void ChatMessageListener::ephemeralMessageTimerStarted(const std::shared_ptr<linphone::ChatMessage> & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void ChatMessageListener::ephemeralMessageDeleted(const std::shared_ptr<linphone::ChatMessage> & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
