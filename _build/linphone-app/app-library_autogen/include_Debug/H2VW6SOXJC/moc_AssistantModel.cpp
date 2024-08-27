/****************************************************************************
** Meta object code from reading C++ file 'AssistantModel.hpp'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.13.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../linphone-app/src/components/assistant/AssistantModel.hpp"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'AssistantModel.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.13.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_AssistantModel_t {
    QByteArrayData data[67];
    char stringdata0[997];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AssistantModel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AssistantModel_t qt_meta_stringdata_AssistantModel = {
    {
QT_MOC_LITERAL(0, 0, 14), // "AssistantModel"
QT_MOC_LITERAL(1, 15, 12), // "emailChanged"
QT_MOC_LITERAL(2, 28, 0), // ""
QT_MOC_LITERAL(3, 29, 5), // "email"
QT_MOC_LITERAL(4, 35, 5), // "error"
QT_MOC_LITERAL(5, 41, 15), // "passwordChanged"
QT_MOC_LITERAL(6, 57, 8), // "password"
QT_MOC_LITERAL(7, 66, 18), // "countryCodeChanged"
QT_MOC_LITERAL(8, 85, 11), // "countryCode"
QT_MOC_LITERAL(9, 97, 21), // "usePhoneNumberChanged"
QT_MOC_LITERAL(10, 119, 18), // "phoneNumberChanged"
QT_MOC_LITERAL(11, 138, 11), // "phoneNumber"
QT_MOC_LITERAL(12, 150, 23), // "phoneCountryCodeChanged"
QT_MOC_LITERAL(13, 174, 26), // "computedPhoneNumberChanged"
QT_MOC_LITERAL(14, 201, 15), // "usernameChanged"
QT_MOC_LITERAL(15, 217, 8), // "username"
QT_MOC_LITERAL(16, 226, 18), // "displayNameChanged"
QT_MOC_LITERAL(17, 245, 11), // "displayName"
QT_MOC_LITERAL(18, 257, 21), // "activationCodeChanged"
QT_MOC_LITERAL(19, 279, 14), // "activationCode"
QT_MOC_LITERAL(20, 294, 19), // "isProcessingChanged"
QT_MOC_LITERAL(21, 314, 21), // "activateStatusChanged"
QT_MOC_LITERAL(22, 336, 19), // "createStatusChanged"
QT_MOC_LITERAL(23, 356, 18), // "loginStatusChanged"
QT_MOC_LITERAL(24, 375, 20), // "recoverStatusChanged"
QT_MOC_LITERAL(25, 396, 19), // "oauth2RequestFailed"
QT_MOC_LITERAL(26, 416, 19), // "oauth2StatusChanged"
QT_MOC_LITERAL(27, 436, 6), // "status"
QT_MOC_LITERAL(28, 443, 27), // "oauth2AuthenticationGranted"
QT_MOC_LITERAL(29, 471, 21), // "configFilenameChanged"
QT_MOC_LITERAL(30, 493, 14), // "configFilename"
QT_MOC_LITERAL(31, 508, 17), // "newQRCodeReceived"
QT_MOC_LITERAL(32, 526, 4), // "code"
QT_MOC_LITERAL(33, 531, 20), // "newQRCodeNotReceived"
QT_MOC_LITERAL(34, 552, 7), // "message"
QT_MOC_LITERAL(35, 560, 9), // "errorCode"
QT_MOC_LITERAL(36, 570, 25), // "provisioningTokenReceived"
QT_MOC_LITERAL(37, 596, 5), // "token"
QT_MOC_LITERAL(38, 602, 22), // "isReadingQRCodeChanged"
QT_MOC_LITERAL(39, 625, 11), // "qRCodeFound"
QT_MOC_LITERAL(40, 637, 14), // "qRCodeAttached"
QT_MOC_LITERAL(41, 652, 17), // "qRCodeNotAttached"
QT_MOC_LITERAL(42, 670, 11), // "apiReceived"
QT_MOC_LITERAL(43, 682, 6), // "apiKey"
QT_MOC_LITERAL(44, 689, 13), // "onQRCodeFound"
QT_MOC_LITERAL(45, 703, 11), // "std::string"
QT_MOC_LITERAL(46, 715, 6), // "result"
QT_MOC_LITERAL(47, 722, 13), // "onApiReceived"
QT_MOC_LITERAL(48, 736, 24), // "newQRCodeNotReceivedTest"
QT_MOC_LITERAL(49, 761, 8), // "activate"
QT_MOC_LITERAL(50, 770, 6), // "create"
QT_MOC_LITERAL(51, 777, 5), // "login"
QT_MOC_LITERAL(52, 783, 5), // "reset"
QT_MOC_LITERAL(53, 789, 18), // "addOtherSipAccount"
QT_MOC_LITERAL(54, 808, 3), // "map"
QT_MOC_LITERAL(55, 812, 17), // "createTestAccount"
QT_MOC_LITERAL(56, 830, 14), // "generateQRCode"
QT_MOC_LITERAL(57, 845, 13), // "requestQRCode"
QT_MOC_LITERAL(58, 859, 10), // "readQRCode"
QT_MOC_LITERAL(59, 870, 13), // "requestOauth2"
QT_MOC_LITERAL(60, 884, 13), // "attachAccount"
QT_MOC_LITERAL(61, 898, 17), // "isOAuth2Available"
QT_MOC_LITERAL(62, 916, 16), // "phoneCountryCode"
QT_MOC_LITERAL(63, 933, 19), // "computedPhoneNumber"
QT_MOC_LITERAL(64, 953, 15), // "isReadingQRCode"
QT_MOC_LITERAL(65, 969, 12), // "isProcessing"
QT_MOC_LITERAL(66, 982, 14) // "usePhoneNumber"

    },
    "AssistantModel\0emailChanged\0\0email\0"
    "error\0passwordChanged\0password\0"
    "countryCodeChanged\0countryCode\0"
    "usePhoneNumberChanged\0phoneNumberChanged\0"
    "phoneNumber\0phoneCountryCodeChanged\0"
    "computedPhoneNumberChanged\0usernameChanged\0"
    "username\0displayNameChanged\0displayName\0"
    "activationCodeChanged\0activationCode\0"
    "isProcessingChanged\0activateStatusChanged\0"
    "createStatusChanged\0loginStatusChanged\0"
    "recoverStatusChanged\0oauth2RequestFailed\0"
    "oauth2StatusChanged\0status\0"
    "oauth2AuthenticationGranted\0"
    "configFilenameChanged\0configFilename\0"
    "newQRCodeReceived\0code\0newQRCodeNotReceived\0"
    "message\0errorCode\0provisioningTokenReceived\0"
    "token\0isReadingQRCodeChanged\0qRCodeFound\0"
    "qRCodeAttached\0qRCodeNotAttached\0"
    "apiReceived\0apiKey\0onQRCodeFound\0"
    "std::string\0result\0onApiReceived\0"
    "newQRCodeNotReceivedTest\0activate\0"
    "create\0login\0reset\0addOtherSipAccount\0"
    "map\0createTestAccount\0generateQRCode\0"
    "requestQRCode\0readQRCode\0requestOauth2\0"
    "attachAccount\0isOAuth2Available\0"
    "phoneCountryCode\0computedPhoneNumber\0"
    "isReadingQRCode\0isProcessing\0"
    "usePhoneNumber"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AssistantModel[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      42,   14, // methods
      13,  328, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      27,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,  224,    2, 0x06 /* Public */,
       5,    2,  229,    2, 0x06 /* Public */,
       7,    1,  234,    2, 0x06 /* Public */,
       9,    0,  237,    2, 0x06 /* Public */,
      10,    2,  238,    2, 0x06 /* Public */,
      12,    0,  243,    2, 0x06 /* Public */,
      13,    0,  244,    2, 0x06 /* Public */,
      14,    2,  245,    2, 0x06 /* Public */,
      16,    2,  250,    2, 0x06 /* Public */,
      18,    1,  255,    2, 0x06 /* Public */,
      20,    0,  258,    2, 0x06 /* Public */,
      21,    1,  259,    2, 0x06 /* Public */,
      22,    1,  262,    2, 0x06 /* Public */,
      23,    1,  265,    2, 0x06 /* Public */,
      24,    1,  268,    2, 0x06 /* Public */,
      25,    1,  271,    2, 0x06 /* Public */,
      26,    1,  274,    2, 0x06 /* Public */,
      28,    0,  277,    2, 0x06 /* Public */,
      29,    1,  278,    2, 0x06 /* Public */,
      31,    1,  281,    2, 0x06 /* Public */,
      33,    2,  284,    2, 0x06 /* Public */,
      36,    1,  289,    2, 0x06 /* Public */,
      38,    0,  292,    2, 0x06 /* Public */,
      39,    1,  293,    2, 0x06 /* Public */,
      40,    0,  296,    2, 0x06 /* Public */,
      41,    2,  297,    2, 0x06 /* Public */,
      42,    1,  302,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      44,    1,  305,    2, 0x0a /* Public */,
      47,    1,  308,    2, 0x0a /* Public */,
      48,    0,  311,    2, 0x0a /* Public */,

 // methods: name, argc, parameters, tag, flags
      49,    0,  312,    2, 0x02 /* Public */,
      50,    0,  313,    2, 0x02 /* Public */,
      51,    0,  314,    2, 0x02 /* Public */,
      52,    0,  315,    2, 0x02 /* Public */,
      53,    1,  316,    2, 0x02 /* Public */,
      55,    0,  319,    2, 0x02 /* Public */,
      56,    0,  320,    2, 0x02 /* Public */,
      57,    0,  321,    2, 0x02 /* Public */,
      58,    0,  322,    2, 0x02 /* Public */,
      59,    0,  323,    2, 0x02 /* Public */,
      60,    1,  324,    2, 0x02 /* Public */,
      61,    0,  327,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    3,    4,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    6,    4,
    QMetaType::Void, QMetaType::QString,    8,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,   11,    4,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,   15,    4,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,   17,    4,
    QMetaType::Void, QMetaType::QString,   19,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    4,
    QMetaType::Void, QMetaType::QString,    4,
    QMetaType::Void, QMetaType::QString,    4,
    QMetaType::Void, QMetaType::QString,    4,
    QMetaType::Void, QMetaType::QString,    4,
    QMetaType::Void, QMetaType::QString,   27,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   30,
    QMetaType::Void, QMetaType::QString,   32,
    QMetaType::Void, QMetaType::QString, QMetaType::Int,   34,   35,
    QMetaType::Void, QMetaType::QString,   37,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   37,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::Int,   34,   35,
    QMetaType::Void, QMetaType::QString,   43,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 45,   46,
    QMetaType::Void, QMetaType::QString,   43,
    QMetaType::Void,

 // methods: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Bool, QMetaType::QVariantMap,   54,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   37,
    QMetaType::Bool,

 // properties: name, type, flags
       3, QMetaType::QString, 0x00495103,
       6, QMetaType::QString, 0x00495103,
       8, QMetaType::QString, 0x00495103,
      11, QMetaType::QString, 0x00495103,
      62, QMetaType::QString, 0x00495103,
      63, QMetaType::QString, 0x00495001,
      15, QMetaType::QString, 0x00495103,
      17, QMetaType::QString, 0x00495103,
      19, QMetaType::QString, 0x00495103,
      30, QMetaType::QString, 0x00495103,
      64, QMetaType::Bool, 0x00495103,
      65, QMetaType::Bool, 0x00495103,
      66, QMetaType::Bool, 0x00495103,

 // properties: notify_signal_id
       0,
       1,
       2,
       4,
       5,
       6,
       7,
       8,
       9,
      18,
      22,
      10,
       3,

       0        // eod
};

void AssistantModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<AssistantModel *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->emailChanged((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 1: _t->passwordChanged((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 2: _t->countryCodeChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->usePhoneNumberChanged(); break;
        case 4: _t->phoneNumberChanged((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 5: _t->phoneCountryCodeChanged(); break;
        case 6: _t->computedPhoneNumberChanged(); break;
        case 7: _t->usernameChanged((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 8: _t->displayNameChanged((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 9: _t->activationCodeChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 10: _t->isProcessingChanged(); break;
        case 11: _t->activateStatusChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 12: _t->createStatusChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 13: _t->loginStatusChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 14: _t->recoverStatusChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 15: _t->oauth2RequestFailed((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 16: _t->oauth2StatusChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 17: _t->oauth2AuthenticationGranted(); break;
        case 18: _t->configFilenameChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 19: _t->newQRCodeReceived((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 20: _t->newQRCodeNotReceived((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 21: _t->provisioningTokenReceived((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 22: _t->isReadingQRCodeChanged(); break;
        case 23: _t->qRCodeFound((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 24: _t->qRCodeAttached(); break;
        case 25: _t->qRCodeNotAttached((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 26: _t->apiReceived((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 27: _t->onQRCodeFound((*reinterpret_cast< const std::string(*)>(_a[1]))); break;
        case 28: _t->onApiReceived((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 29: _t->newQRCodeNotReceivedTest(); break;
        case 30: _t->activate(); break;
        case 31: _t->create(); break;
        case 32: _t->login(); break;
        case 33: _t->reset(); break;
        case 34: { bool _r = _t->addOtherSipAccount((*reinterpret_cast< const QVariantMap(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 35: _t->createTestAccount(); break;
        case 36: _t->generateQRCode(); break;
        case 37: _t->requestQRCode(); break;
        case 38: _t->readQRCode(); break;
        case 39: _t->requestOauth2(); break;
        case 40: _t->attachAccount((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 41: { bool _r = _t->isOAuth2Available();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (AssistantModel::*)(const QString & , const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AssistantModel::emailChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (AssistantModel::*)(const QString & , const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AssistantModel::passwordChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (AssistantModel::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AssistantModel::countryCodeChanged)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (AssistantModel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AssistantModel::usePhoneNumberChanged)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (AssistantModel::*)(const QString & , const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AssistantModel::phoneNumberChanged)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (AssistantModel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AssistantModel::phoneCountryCodeChanged)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (AssistantModel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AssistantModel::computedPhoneNumberChanged)) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (AssistantModel::*)(const QString & , const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AssistantModel::usernameChanged)) {
                *result = 7;
                return;
            }
        }
        {
            using _t = void (AssistantModel::*)(const QString & , const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AssistantModel::displayNameChanged)) {
                *result = 8;
                return;
            }
        }
        {
            using _t = void (AssistantModel::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AssistantModel::activationCodeChanged)) {
                *result = 9;
                return;
            }
        }
        {
            using _t = void (AssistantModel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AssistantModel::isProcessingChanged)) {
                *result = 10;
                return;
            }
        }
        {
            using _t = void (AssistantModel::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AssistantModel::activateStatusChanged)) {
                *result = 11;
                return;
            }
        }
        {
            using _t = void (AssistantModel::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AssistantModel::createStatusChanged)) {
                *result = 12;
                return;
            }
        }
        {
            using _t = void (AssistantModel::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AssistantModel::loginStatusChanged)) {
                *result = 13;
                return;
            }
        }
        {
            using _t = void (AssistantModel::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AssistantModel::recoverStatusChanged)) {
                *result = 14;
                return;
            }
        }
        {
            using _t = void (AssistantModel::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AssistantModel::oauth2RequestFailed)) {
                *result = 15;
                return;
            }
        }
        {
            using _t = void (AssistantModel::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AssistantModel::oauth2StatusChanged)) {
                *result = 16;
                return;
            }
        }
        {
            using _t = void (AssistantModel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AssistantModel::oauth2AuthenticationGranted)) {
                *result = 17;
                return;
            }
        }
        {
            using _t = void (AssistantModel::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AssistantModel::configFilenameChanged)) {
                *result = 18;
                return;
            }
        }
        {
            using _t = void (AssistantModel::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AssistantModel::newQRCodeReceived)) {
                *result = 19;
                return;
            }
        }
        {
            using _t = void (AssistantModel::*)(QString , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AssistantModel::newQRCodeNotReceived)) {
                *result = 20;
                return;
            }
        }
        {
            using _t = void (AssistantModel::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AssistantModel::provisioningTokenReceived)) {
                *result = 21;
                return;
            }
        }
        {
            using _t = void (AssistantModel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AssistantModel::isReadingQRCodeChanged)) {
                *result = 22;
                return;
            }
        }
        {
            using _t = void (AssistantModel::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AssistantModel::qRCodeFound)) {
                *result = 23;
                return;
            }
        }
        {
            using _t = void (AssistantModel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AssistantModel::qRCodeAttached)) {
                *result = 24;
                return;
            }
        }
        {
            using _t = void (AssistantModel::*)(QString , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AssistantModel::qRCodeNotAttached)) {
                *result = 25;
                return;
            }
        }
        {
            using _t = void (AssistantModel::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AssistantModel::apiReceived)) {
                *result = 26;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<AssistantModel *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->getEmail(); break;
        case 1: *reinterpret_cast< QString*>(_v) = _t->getPassword(); break;
        case 2: *reinterpret_cast< QString*>(_v) = _t->getCountryCode(); break;
        case 3: *reinterpret_cast< QString*>(_v) = _t->getPhoneNumber(); break;
        case 4: *reinterpret_cast< QString*>(_v) = _t->getPhoneCountryCode(); break;
        case 5: *reinterpret_cast< QString*>(_v) = _t->getComputedPhoneNumber(); break;
        case 6: *reinterpret_cast< QString*>(_v) = _t->getUsername(); break;
        case 7: *reinterpret_cast< QString*>(_v) = _t->getDisplayName(); break;
        case 8: *reinterpret_cast< QString*>(_v) = _t->getActivationCode(); break;
        case 9: *reinterpret_cast< QString*>(_v) = _t->getConfigFilename(); break;
        case 10: *reinterpret_cast< bool*>(_v) = _t->getIsReadingQRCode(); break;
        case 11: *reinterpret_cast< bool*>(_v) = _t->getIsProcessing(); break;
        case 12: *reinterpret_cast< bool*>(_v) = _t->getUsePhoneNumber(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<AssistantModel *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setEmail(*reinterpret_cast< QString*>(_v)); break;
        case 1: _t->setPassword(*reinterpret_cast< QString*>(_v)); break;
        case 2: _t->setCountryCode(*reinterpret_cast< QString*>(_v)); break;
        case 3: _t->setPhoneNumber(*reinterpret_cast< QString*>(_v)); break;
        case 4: _t->setPhoneCountryCode(*reinterpret_cast< QString*>(_v)); break;
        case 6: _t->setUsername(*reinterpret_cast< QString*>(_v)); break;
        case 7: _t->setDisplayName(*reinterpret_cast< QString*>(_v)); break;
        case 8: _t->setActivationCode(*reinterpret_cast< QString*>(_v)); break;
        case 9: _t->setConfigFilename(*reinterpret_cast< QString*>(_v)); break;
        case 10: _t->setIsReadingQRCode(*reinterpret_cast< bool*>(_v)); break;
        case 11: _t->setIsProcessing(*reinterpret_cast< bool*>(_v)); break;
        case 12: _t->setUsePhoneNumber(*reinterpret_cast< bool*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject AssistantModel::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_AssistantModel.data,
    qt_meta_data_AssistantModel,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *AssistantModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AssistantModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_AssistantModel.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int AssistantModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 42)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 42;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 42)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 42;
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 13;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 13;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 13;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 13;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 13;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void AssistantModel::emailChanged(const QString & _t1, const QString & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void AssistantModel::passwordChanged(const QString & _t1, const QString & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void AssistantModel::countryCodeChanged(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void AssistantModel::usePhoneNumberChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void AssistantModel::phoneNumberChanged(const QString & _t1, const QString & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void AssistantModel::phoneCountryCodeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}

// SIGNAL 6
void AssistantModel::computedPhoneNumberChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 6, nullptr);
}

// SIGNAL 7
void AssistantModel::usernameChanged(const QString & _t1, const QString & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void AssistantModel::displayNameChanged(const QString & _t1, const QString & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void AssistantModel::activationCodeChanged(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}

// SIGNAL 10
void AssistantModel::isProcessingChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 10, nullptr);
}

// SIGNAL 11
void AssistantModel::activateStatusChanged(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 11, _a);
}

// SIGNAL 12
void AssistantModel::createStatusChanged(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 12, _a);
}

// SIGNAL 13
void AssistantModel::loginStatusChanged(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 13, _a);
}

// SIGNAL 14
void AssistantModel::recoverStatusChanged(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 14, _a);
}

// SIGNAL 15
void AssistantModel::oauth2RequestFailed(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 15, _a);
}

// SIGNAL 16
void AssistantModel::oauth2StatusChanged(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 16, _a);
}

// SIGNAL 17
void AssistantModel::oauth2AuthenticationGranted()
{
    QMetaObject::activate(this, &staticMetaObject, 17, nullptr);
}

// SIGNAL 18
void AssistantModel::configFilenameChanged(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 18, _a);
}

// SIGNAL 19
void AssistantModel::newQRCodeReceived(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 19, _a);
}

// SIGNAL 20
void AssistantModel::newQRCodeNotReceived(QString _t1, int _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 20, _a);
}

// SIGNAL 21
void AssistantModel::provisioningTokenReceived(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 21, _a);
}

// SIGNAL 22
void AssistantModel::isReadingQRCodeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 22, nullptr);
}

// SIGNAL 23
void AssistantModel::qRCodeFound(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 23, _a);
}

// SIGNAL 24
void AssistantModel::qRCodeAttached()
{
    QMetaObject::activate(this, &staticMetaObject, 24, nullptr);
}

// SIGNAL 25
void AssistantModel::qRCodeNotAttached(QString _t1, int _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 25, _a);
}

// SIGNAL 26
void AssistantModel::apiReceived(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 26, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
