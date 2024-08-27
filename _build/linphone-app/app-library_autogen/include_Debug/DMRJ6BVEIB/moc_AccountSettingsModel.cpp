/****************************************************************************
** Meta object code from reading C++ file 'AccountSettingsModel.hpp'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.13.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../linphone-app/src/components/settings/AccountSettingsModel.hpp"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'AccountSettingsModel.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.13.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_AccountSettingsModel_t {
    QByteArrayData data[57];
    char stringdata0[1049];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AccountSettingsModel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AccountSettingsModel_t qt_meta_stringdata_AccountSettingsModel = {
    {
QT_MOC_LITERAL(0, 0, 20), // "AccountSettingsModel"
QT_MOC_LITERAL(1, 21, 15), // "usernameChanged"
QT_MOC_LITERAL(2, 37, 0), // ""
QT_MOC_LITERAL(3, 38, 17), // "sipAddressChanged"
QT_MOC_LITERAL(4, 56, 21), // "fullSipAddressChanged"
QT_MOC_LITERAL(5, 78, 24), // "registrationStateChanged"
QT_MOC_LITERAL(6, 103, 20), // "conferenceUriChanged"
QT_MOC_LITERAL(7, 124, 25), // "videoConferenceUriChanged"
QT_MOC_LITERAL(8, 150, 20), // "limeServerUrlChanged"
QT_MOC_LITERAL(9, 171, 25), // "primaryDisplayNameChanged"
QT_MOC_LITERAL(10, 197, 22), // "primaryUsernameChanged"
QT_MOC_LITERAL(11, 220, 24), // "primarySipAddressChanged"
QT_MOC_LITERAL(12, 245, 15), // "accountsChanged"
QT_MOC_LITERAL(13, 261, 22), // "accountSettingsUpdated"
QT_MOC_LITERAL(14, 284, 21), // "defaultAccountChanged"
QT_MOC_LITERAL(15, 306, 22), // "publishPresenceChanged"
QT_MOC_LITERAL(16, 329, 26), // "defaultRegistrationChanged"
QT_MOC_LITERAL(17, 356, 18), // "failedRegistration"
QT_MOC_LITERAL(18, 375, 22), // "networkErrorFirstLogin"
QT_MOC_LITERAL(19, 398, 20), // "networkErrorLoggedIn"
QT_MOC_LITERAL(20, 419, 13), // "accountLogout"
QT_MOC_LITERAL(21, 433, 6), // "logout"
QT_MOC_LITERAL(22, 440, 21), // "getAccountDescription"
QT_MOC_LITERAL(23, 462, 34), // "std::shared_ptr<linphone::Acc..."
QT_MOC_LITERAL(24, 497, 7), // "account"
QT_MOC_LITERAL(25, 505, 17), // "setDefaultAccount"
QT_MOC_LITERAL(26, 523, 31), // "setDefaultAccountFromSipAddress"
QT_MOC_LITERAL(27, 555, 10), // "sipAddress"
QT_MOC_LITERAL(28, 566, 14), // "enableRegister"
QT_MOC_LITERAL(29, 581, 6), // "enable"
QT_MOC_LITERAL(30, 588, 18), // "addOrUpdateAccount"
QT_MOC_LITERAL(31, 607, 4), // "data"
QT_MOC_LITERAL(32, 612, 13), // "removeAccount"
QT_MOC_LITERAL(33, 626, 13), // "createAccount"
QT_MOC_LITERAL(34, 640, 13), // "assistantFile"
QT_MOC_LITERAL(35, 654, 11), // "addAuthInfo"
QT_MOC_LITERAL(36, 666, 35), // "std::shared_ptr<linphone::Aut..."
QT_MOC_LITERAL(37, 702, 8), // "authInfo"
QT_MOC_LITERAL(38, 711, 8), // "password"
QT_MOC_LITERAL(39, 720, 6), // "userId"
QT_MOC_LITERAL(40, 727, 17), // "eraseAllPasswords"
QT_MOC_LITERAL(41, 745, 8), // "username"
QT_MOC_LITERAL(42, 754, 14), // "fullSipAddress"
QT_MOC_LITERAL(43, 769, 17), // "registrationState"
QT_MOC_LITERAL(44, 787, 17), // "RegistrationState"
QT_MOC_LITERAL(45, 805, 13), // "conferenceUri"
QT_MOC_LITERAL(46, 819, 18), // "videoConferenceUri"
QT_MOC_LITERAL(47, 838, 13), // "limeServerUrl"
QT_MOC_LITERAL(48, 852, 18), // "primaryDisplayName"
QT_MOC_LITERAL(49, 871, 15), // "primaryUsername"
QT_MOC_LITERAL(50, 887, 17), // "primarySipAddress"
QT_MOC_LITERAL(51, 905, 20), // "defaultAccountDomain"
QT_MOC_LITERAL(52, 926, 8), // "accounts"
QT_MOC_LITERAL(53, 935, 27), // "RegistrationStateRegistered"
QT_MOC_LITERAL(54, 963, 30), // "RegistrationStateNotRegistered"
QT_MOC_LITERAL(55, 994, 27), // "RegistrationStateInProgress"
QT_MOC_LITERAL(56, 1022, 26) // "RegistrationStateNoAccount"

    },
    "AccountSettingsModel\0usernameChanged\0"
    "\0sipAddressChanged\0fullSipAddressChanged\0"
    "registrationStateChanged\0conferenceUriChanged\0"
    "videoConferenceUriChanged\0"
    "limeServerUrlChanged\0primaryDisplayNameChanged\0"
    "primaryUsernameChanged\0primarySipAddressChanged\0"
    "accountsChanged\0accountSettingsUpdated\0"
    "defaultAccountChanged\0publishPresenceChanged\0"
    "defaultRegistrationChanged\0"
    "failedRegistration\0networkErrorFirstLogin\0"
    "networkErrorLoggedIn\0accountLogout\0"
    "logout\0getAccountDescription\0"
    "std::shared_ptr<linphone::Account>\0"
    "account\0setDefaultAccount\0"
    "setDefaultAccountFromSipAddress\0"
    "sipAddress\0enableRegister\0enable\0"
    "addOrUpdateAccount\0data\0removeAccount\0"
    "createAccount\0assistantFile\0addAuthInfo\0"
    "std::shared_ptr<linphone::AuthInfo>\0"
    "authInfo\0password\0userId\0eraseAllPasswords\0"
    "username\0fullSipAddress\0registrationState\0"
    "RegistrationState\0conferenceUri\0"
    "videoConferenceUri\0limeServerUrl\0"
    "primaryDisplayName\0primaryUsername\0"
    "primarySipAddress\0defaultAccountDomain\0"
    "accounts\0RegistrationStateRegistered\0"
    "RegistrationStateNotRegistered\0"
    "RegistrationStateInProgress\0"
    "RegistrationStateNoAccount"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AccountSettingsModel[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      31,   14, // methods
      12,  226, // properties
       1,  274, // enums/sets
       0,    0, // constructors
       0,       // flags
      19,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,  169,    2, 0x06 /* Public */,
       3,    0,  170,    2, 0x06 /* Public */,
       4,    0,  171,    2, 0x06 /* Public */,
       5,    0,  172,    2, 0x06 /* Public */,
       6,    0,  173,    2, 0x06 /* Public */,
       7,    0,  174,    2, 0x06 /* Public */,
       8,    0,  175,    2, 0x06 /* Public */,
       9,    0,  176,    2, 0x06 /* Public */,
      10,    0,  177,    2, 0x06 /* Public */,
      11,    0,  178,    2, 0x06 /* Public */,
      12,    0,  179,    2, 0x06 /* Public */,
      13,    0,  180,    2, 0x06 /* Public */,
      14,    0,  181,    2, 0x06 /* Public */,
      15,    0,  182,    2, 0x06 /* Public */,
      16,    0,  183,    2, 0x06 /* Public */,
      17,    0,  184,    2, 0x06 /* Public */,
      18,    0,  185,    2, 0x06 /* Public */,
      19,    0,  186,    2, 0x06 /* Public */,
      20,    0,  187,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      21,    0,  188,    2, 0x0a /* Public */,

 // methods: name, argc, parameters, tag, flags
      22,    1,  189,    2, 0x02 /* Public */,
      25,    1,  192,    2, 0x02 /* Public */,
      25,    0,  195,    2, 0x22 /* Public | MethodCloned */,
      26,    1,  196,    2, 0x02 /* Public */,
      28,    2,  199,    2, 0x02 /* Public */,
      30,    2,  204,    2, 0x02 /* Public */,
      30,    1,  209,    2, 0x02 /* Public */,
      32,    1,  212,    2, 0x02 /* Public */,
      33,    1,  215,    2, 0x02 /* Public */,
      35,    3,  218,    2, 0x02 /* Public */,
      40,    0,  225,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,

 // methods: parameters
    QMetaType::QVariantMap, 0x80000000 | 23,   24,
    QMetaType::Void, 0x80000000 | 23,   24,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   27,
    QMetaType::Void, 0x80000000 | 23, QMetaType::Bool,   24,   29,
    QMetaType::Bool, 0x80000000 | 23, QMetaType::QVariantMap,   24,   31,
    QMetaType::Bool, QMetaType::QVariantMap,   31,
    QMetaType::Void, 0x80000000 | 23,   24,
    0x80000000 | 23, QMetaType::QString,   34,
    QMetaType::Void, 0x80000000 | 36, QMetaType::QString, QMetaType::QString,   37,   38,   39,
    QMetaType::Void,

 // properties: name, type, flags
      41, QMetaType::QString, 0x00495103,
      27, QMetaType::QString, 0x00495001,
      42, QMetaType::QString, 0x00495001,
      43, 0x80000000 | 44, 0x00495009,
      45, QMetaType::QString, 0x00495001,
      46, QMetaType::QString, 0x00495001,
      47, QMetaType::QString, 0x00495001,
      48, QMetaType::QString, 0x00495103,
      49, QMetaType::QString, 0x00495103,
      50, QMetaType::QString, 0x00495001,
      51, QMetaType::QString, 0x00495001,
      52, QMetaType::QVariantList, 0x00495001,

 // properties: notify_signal_id
       0,
       1,
       2,
       3,
       4,
       5,
       6,
       7,
       8,
       9,
      12,
      10,

 // enums: name, alias, flags, count, data
      44,   44, 0x0,    4,  279,

 // enum data: key, value
      53, uint(AccountSettingsModel::RegistrationStateRegistered),
      54, uint(AccountSettingsModel::RegistrationStateNotRegistered),
      55, uint(AccountSettingsModel::RegistrationStateInProgress),
      56, uint(AccountSettingsModel::RegistrationStateNoAccount),

       0        // eod
};

void AccountSettingsModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<AccountSettingsModel *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->usernameChanged(); break;
        case 1: _t->sipAddressChanged(); break;
        case 2: _t->fullSipAddressChanged(); break;
        case 3: _t->registrationStateChanged(); break;
        case 4: _t->conferenceUriChanged(); break;
        case 5: _t->videoConferenceUriChanged(); break;
        case 6: _t->limeServerUrlChanged(); break;
        case 7: _t->primaryDisplayNameChanged(); break;
        case 8: _t->primaryUsernameChanged(); break;
        case 9: _t->primarySipAddressChanged(); break;
        case 10: _t->accountsChanged(); break;
        case 11: _t->accountSettingsUpdated(); break;
        case 12: _t->defaultAccountChanged(); break;
        case 13: _t->publishPresenceChanged(); break;
        case 14: _t->defaultRegistrationChanged(); break;
        case 15: _t->failedRegistration(); break;
        case 16: _t->networkErrorFirstLogin(); break;
        case 17: _t->networkErrorLoggedIn(); break;
        case 18: _t->accountLogout(); break;
        case 19: _t->logout(); break;
        case 20: { QVariantMap _r = _t->getAccountDescription((*reinterpret_cast< const std::shared_ptr<linphone::Account>(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QVariantMap*>(_a[0]) = std::move(_r); }  break;
        case 21: _t->setDefaultAccount((*reinterpret_cast< const std::shared_ptr<linphone::Account>(*)>(_a[1]))); break;
        case 22: _t->setDefaultAccount(); break;
        case 23: _t->setDefaultAccountFromSipAddress((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 24: _t->enableRegister((*reinterpret_cast< std::shared_ptr<linphone::Account>(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 25: { bool _r = _t->addOrUpdateAccount((*reinterpret_cast< const std::shared_ptr<linphone::Account>(*)>(_a[1])),(*reinterpret_cast< const QVariantMap(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 26: { bool _r = _t->addOrUpdateAccount((*reinterpret_cast< const QVariantMap(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 27: _t->removeAccount((*reinterpret_cast< const std::shared_ptr<linphone::Account>(*)>(_a[1]))); break;
        case 28: { std::shared_ptr<linphone::Account> _r = _t->createAccount((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< std::shared_ptr<linphone::Account>*>(_a[0]) = std::move(_r); }  break;
        case 29: _t->addAuthInfo((*reinterpret_cast< const std::shared_ptr<linphone::AuthInfo>(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 30: _t->eraseAllPasswords(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 20:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< std::shared_ptr<linphone::Account> >(); break;
            }
            break;
        case 21:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< std::shared_ptr<linphone::Account> >(); break;
            }
            break;
        case 24:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< std::shared_ptr<linphone::Account> >(); break;
            }
            break;
        case 25:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< std::shared_ptr<linphone::Account> >(); break;
            }
            break;
        case 27:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< std::shared_ptr<linphone::Account> >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (AccountSettingsModel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AccountSettingsModel::usernameChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (AccountSettingsModel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AccountSettingsModel::sipAddressChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (AccountSettingsModel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AccountSettingsModel::fullSipAddressChanged)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (AccountSettingsModel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AccountSettingsModel::registrationStateChanged)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (AccountSettingsModel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AccountSettingsModel::conferenceUriChanged)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (AccountSettingsModel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AccountSettingsModel::videoConferenceUriChanged)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (AccountSettingsModel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AccountSettingsModel::limeServerUrlChanged)) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (AccountSettingsModel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AccountSettingsModel::primaryDisplayNameChanged)) {
                *result = 7;
                return;
            }
        }
        {
            using _t = void (AccountSettingsModel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AccountSettingsModel::primaryUsernameChanged)) {
                *result = 8;
                return;
            }
        }
        {
            using _t = void (AccountSettingsModel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AccountSettingsModel::primarySipAddressChanged)) {
                *result = 9;
                return;
            }
        }
        {
            using _t = void (AccountSettingsModel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AccountSettingsModel::accountsChanged)) {
                *result = 10;
                return;
            }
        }
        {
            using _t = void (AccountSettingsModel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AccountSettingsModel::accountSettingsUpdated)) {
                *result = 11;
                return;
            }
        }
        {
            using _t = void (AccountSettingsModel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AccountSettingsModel::defaultAccountChanged)) {
                *result = 12;
                return;
            }
        }
        {
            using _t = void (AccountSettingsModel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AccountSettingsModel::publishPresenceChanged)) {
                *result = 13;
                return;
            }
        }
        {
            using _t = void (AccountSettingsModel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AccountSettingsModel::defaultRegistrationChanged)) {
                *result = 14;
                return;
            }
        }
        {
            using _t = void (AccountSettingsModel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AccountSettingsModel::failedRegistration)) {
                *result = 15;
                return;
            }
        }
        {
            using _t = void (AccountSettingsModel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AccountSettingsModel::networkErrorFirstLogin)) {
                *result = 16;
                return;
            }
        }
        {
            using _t = void (AccountSettingsModel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AccountSettingsModel::networkErrorLoggedIn)) {
                *result = 17;
                return;
            }
        }
        {
            using _t = void (AccountSettingsModel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AccountSettingsModel::accountLogout)) {
                *result = 18;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<AccountSettingsModel *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->getUsername(); break;
        case 1: *reinterpret_cast< QString*>(_v) = _t->getUsedSipAddressAsStringUriOnly(); break;
        case 2: *reinterpret_cast< QString*>(_v) = _t->getUsedSipAddressAsString(); break;
        case 3: *reinterpret_cast< RegistrationState*>(_v) = _t->getRegistrationState(); break;
        case 4: *reinterpret_cast< QString*>(_v) = _t->getConferenceUri(); break;
        case 5: *reinterpret_cast< QString*>(_v) = _t->getVideoConferenceUri(); break;
        case 6: *reinterpret_cast< QString*>(_v) = _t->getLimeServerUrl(); break;
        case 7: *reinterpret_cast< QString*>(_v) = _t->getPrimaryDisplayName(); break;
        case 8: *reinterpret_cast< QString*>(_v) = _t->getPrimaryUsername(); break;
        case 9: *reinterpret_cast< QString*>(_v) = _t->getPrimarySipAddress(); break;
        case 10: *reinterpret_cast< QString*>(_v) = _t->getDefaultAccountDomain(); break;
        case 11: *reinterpret_cast< QVariantList*>(_v) = _t->getAccounts(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<AccountSettingsModel *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setUsername(*reinterpret_cast< QString*>(_v)); break;
        case 7: _t->setPrimaryDisplayName(*reinterpret_cast< QString*>(_v)); break;
        case 8: _t->setPrimaryUsername(*reinterpret_cast< QString*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject AccountSettingsModel::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_AccountSettingsModel.data,
    qt_meta_data_AccountSettingsModel,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *AccountSettingsModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AccountSettingsModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_AccountSettingsModel.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int AccountSettingsModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 31)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 31;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 31)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 31;
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 12;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 12;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 12;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 12;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 12;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void AccountSettingsModel::usernameChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void AccountSettingsModel::sipAddressChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void AccountSettingsModel::fullSipAddressChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void AccountSettingsModel::registrationStateChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void AccountSettingsModel::conferenceUriChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void AccountSettingsModel::videoConferenceUriChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}

// SIGNAL 6
void AccountSettingsModel::limeServerUrlChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 6, nullptr);
}

// SIGNAL 7
void AccountSettingsModel::primaryDisplayNameChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 7, nullptr);
}

// SIGNAL 8
void AccountSettingsModel::primaryUsernameChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 8, nullptr);
}

// SIGNAL 9
void AccountSettingsModel::primarySipAddressChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 9, nullptr);
}

// SIGNAL 10
void AccountSettingsModel::accountsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 10, nullptr);
}

// SIGNAL 11
void AccountSettingsModel::accountSettingsUpdated()
{
    QMetaObject::activate(this, &staticMetaObject, 11, nullptr);
}

// SIGNAL 12
void AccountSettingsModel::defaultAccountChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 12, nullptr);
}

// SIGNAL 13
void AccountSettingsModel::publishPresenceChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 13, nullptr);
}

// SIGNAL 14
void AccountSettingsModel::defaultRegistrationChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 14, nullptr);
}

// SIGNAL 15
void AccountSettingsModel::failedRegistration()
{
    QMetaObject::activate(this, &staticMetaObject, 15, nullptr);
}

// SIGNAL 16
void AccountSettingsModel::networkErrorFirstLogin()
{
    QMetaObject::activate(this, &staticMetaObject, 16, nullptr);
}

// SIGNAL 17
void AccountSettingsModel::networkErrorLoggedIn()
{
    QMetaObject::activate(this, &staticMetaObject, 17, nullptr);
}

// SIGNAL 18
void AccountSettingsModel::accountLogout()
{
    QMetaObject::activate(this, &staticMetaObject, 18, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
