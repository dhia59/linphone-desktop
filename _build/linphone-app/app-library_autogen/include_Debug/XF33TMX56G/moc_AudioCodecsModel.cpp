/****************************************************************************
** Meta object code from reading C++ file 'AudioCodecsModel.hpp'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.13.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../linphone-app/src/components/codecs/AudioCodecsModel.hpp"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'AudioCodecsModel.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.13.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_AudioCodecsModel_t {
    QByteArrayData data[1];
    char stringdata0[17];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AudioCodecsModel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AudioCodecsModel_t qt_meta_stringdata_AudioCodecsModel = {
    {
QT_MOC_LITERAL(0, 0, 16) // "AudioCodecsModel"

    },
    "AudioCodecsModel"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AudioCodecsModel[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void AudioCodecsModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject AudioCodecsModel::staticMetaObject = { {
    &AbstractCodecsModel::staticMetaObject,
    qt_meta_stringdata_AudioCodecsModel.data,
    qt_meta_data_AudioCodecsModel,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *AudioCodecsModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AudioCodecsModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_AudioCodecsModel.stringdata0))
        return static_cast<void*>(this);
    return AbstractCodecsModel::qt_metacast(_clname);
}

int AudioCodecsModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AbstractCodecsModel::qt_metacall(_c, _id, _a);
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
