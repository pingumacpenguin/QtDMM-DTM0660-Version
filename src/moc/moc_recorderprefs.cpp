/****************************************************************************
** Meta object code from reading C++ file 'recorderprefs.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../recorderprefs.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'recorderprefs.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_RecorderPrefs[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      15,   14,   14,   14, 0x0a,
      30,   14,   14,   14, 0x0a,
      52,   14,   14,   14, 0x0a,
      75,   64,   14,   14, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_RecorderPrefs[] = {
    "RecorderPrefs\0\0defaultsSLOT()\0"
    "factoryDefaultsSLOT()\0applySLOT()\0"
    "sampleTime\0setSampleTimeSLOT(int)\0"
};

void RecorderPrefs::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        RecorderPrefs *_t = static_cast<RecorderPrefs *>(_o);
        switch (_id) {
        case 0: _t->defaultsSLOT(); break;
        case 1: _t->factoryDefaultsSLOT(); break;
        case 2: _t->applySLOT(); break;
        case 3: _t->setSampleTimeSLOT((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData RecorderPrefs::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject RecorderPrefs::staticMetaObject = {
    { &UIRecorderPrefs::staticMetaObject, qt_meta_stringdata_RecorderPrefs,
      qt_meta_data_RecorderPrefs, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &RecorderPrefs::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *RecorderPrefs::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *RecorderPrefs::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_RecorderPrefs))
        return static_cast<void*>(const_cast< RecorderPrefs*>(this));
    return UIRecorderPrefs::qt_metacast(_clname);
}

int RecorderPrefs::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = UIRecorderPrefs::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
