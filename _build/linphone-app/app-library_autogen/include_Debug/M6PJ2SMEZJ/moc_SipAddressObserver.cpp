/****************************************************************************
** Meta object code from reading C++ file 'SipAddressObserver.hpp'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.13.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../linphone-app/src/components/sip-addresses/SipAddressObserver.hpp"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QSharedPointer>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'SipAddressObserver.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.13.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_SipAddressObserver_t {
    QByteArrayData data[18];
    char stringdata0[301];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SipAddressObserver_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SipAddressObserver_t qt_meta_stringdata_SipAddressObserver = {
    {
QT_MOC_LITERAL(0, 0, 18), // "SipAddressObserver"
QT_MOC_LITERAL(1, 19, 14), // "contactChanged"
QT_MOC_LITERAL(2, 34, 0), // ""
QT_MOC_LITERAL(3, 35, 28), // "QSharedPointer<ContactModel>"
QT_MOC_LITERAL(4, 64, 21), // "presenceStatusChanged"
QT_MOC_LITERAL(5, 86, 24), // "Presence::PresenceStatus"
QT_MOC_LITERAL(6, 111, 14), // "presenceStatus"
QT_MOC_LITERAL(7, 126, 24), // "presenceTimestampChanged"
QT_MOC_LITERAL(8, 151, 17), // "presenceTimestamp"
QT_MOC_LITERAL(9, 169, 25), // "unreadMessageCountChanged"
QT_MOC_LITERAL(10, 195, 18), // "unreadMessageCount"
QT_MOC_LITERAL(11, 214, 11), // "peerAddress"
QT_MOC_LITERAL(12, 226, 12), // "localAddress"
QT_MOC_LITERAL(13, 239, 7), // "contact"
QT_MOC_LITERAL(14, 247, 13), // "ContactModel*"
QT_MOC_LITERAL(15, 261, 10), // "isOneToOne"
QT_MOC_LITERAL(16, 272, 14), // "haveEncryption"
QT_MOC_LITERAL(17, 287, 13) // "securityLevel"

    },
    "SipAddressObserver\0contactChanged\0\0"
    "QSharedPointer<ContactModel>\0"
    "presenceStatusChanged\0Presence::PresenceStatus\0"
    "presenceStatus\0presenceTimestampChanged\0"
    "presenceTimestamp\0unreadMessageCountChanged\0"
    "unreadMessageCount\0peerAddress\0"
    "localAddress\0contact\0ContactModel*\0"
    "isOneToOne\0haveEncryption\0securityLevel"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SipAddressObserver[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       9,   46, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   34,    2, 0x06 /* Public */,
       4,    1,   37,    2, 0x06 /* Public */,
       7,    1,   40,    2, 0x06 /* Public */,
       9,    1,   43,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    2,
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::Void, QMetaType::QDateTime,    8,
    QMetaType::Void, QMetaType::Int,   10,

 // properties: name, type, flags
      11, QMetaType::QString, 0x00095401,
      12, QMetaType::QString, 0x00095401,
      13, 0x80000000 | 14, 0x00495009,
       6, 0x80000000 | 5, 0x00495009,
       8, QMetaType::QDateTime, 0x00495001,
      10, QMetaType::Int, 0x00495001,
      15, QMetaType::Bool, 0x00095401,
      16, QMetaType::Bool, 0x00095401,
      17, QMetaType::Int, 0x00095401,

 // properties: notify_signal_id
       0,
       0,
       0,
       1,
       2,
       3,
       0,
       0,
       0,

       0        // eod
};

void SipAddressObserver::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<SipAddressObserver *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->contactChanged((*reinterpret_cast< QSharedPointer<ContactModel>(*)>(_a[1]))); break;
        case 1: _t->presenceStatusChanged((*reinterpret_cast< const Presence::PresenceStatus(*)>(_a[1]))); break;
        case 2: _t->presenceTimestampChanged((*reinterpret_cast< const QDateTime(*)>(_a[1]))); break;
        case 3: _t->unreadMessageCountChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (SipAddressObserver::*)(QSharedPointer<ContactModel> );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SipAddressObserver::contactChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (SipAddressObserver::*)(const Presence::PresenceStatus & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SipAddressObserver::presenceStatusChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (SipAddressObserver::*)(const QDateTime & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SipAddressObserver::presenceTimestampChanged)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (SipAddressObserver::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SipAddressObserver::unreadMessageCountChanged)) {
                *result = 3;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<SipAddressObserver *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->getPeerAddress(); break;
        case 1: *reinterpret_cast< QString*>(_v) = _t->getLocalAddress(); break;
        case 2: *reinterpret_cast< ContactModel**>(_v) = _t->getContact(); break;
        case 3: *reinterpret_cast< Presence::PresenceStatus*>(_v) = _t->getPresenceStatus(); break;
        case 4: *reinterpret_cast< QDateTime*>(_v) = _t->getPresenceTimestamp(); break;
        case 5: *reinterpret_cast< int*>(_v) = _t->getUnreadMessageCount(); break;
        case 6: *reinterpret_cast< bool*>(_v) = _t->isOneToOne; break;
        case 7: *reinterpret_cast< bool*>(_v) = _t->haveEncryption; break;
        case 8: *reinterpret_cast< int*>(_v) = _t->securityLevel; break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

static const QMetaObject * const qt_meta_extradata_SipAddressObserver[] = {
        &Presence::staticMetaObject,
    nullptr
};

QT_INIT_METAOBJECT const QMetaObject SipAddressObserver::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_SipAddressObserver.data,
    qt_meta_data_SipAddressObserver,
    qt_static_metacall,
    qt_meta_extradata_SipAddressObserver,
    nullptr
} };


const QMetaObject *SipAddressObserver::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SipAddressObserver::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_SipAddressObserver.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int SipAddressObserver::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
        _id -= 9;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 9;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 9;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 9;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 9;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 9;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void SipAddressObserver::contactChanged(QSharedPointer<ContactModel> _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void SipAddressObserver::presenceStatusChanged(const Presence::PresenceStatus & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void SipAddressObserver::presenceTimestampChanged(const QDateTime & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void SipAddressObserver::unreadMessageCountChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
