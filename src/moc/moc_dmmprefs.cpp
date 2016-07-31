/****************************************************************************
** Meta object code from reading C++ file 'dmmprefs.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../dmmprefs.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'dmmprefs.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_DmmPrefs[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      10,    9,    9,    9, 0x0a,
      25,    9,    9,    9, 0x0a,
      47,    9,    9,    9, 0x0a,
      59,    9,    9,    9, 0x09,
      74,    9,    9,    9, 0x09,
      85,    9,    9,    9, 0x09,
      96,    9,    9,    9, 0x09,
     114,    9,    9,    9, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_DmmPrefs[] = {
    "DmmPrefs\0\0defaultsSLOT()\0factoryDefaultsSLOT()\0"
    "applySLOT()\0modelSLOT(int)\0loadSLOT()\0"
    "saveSLOT()\0scanDevicesSLOT()\0"
    "externalSetupSLOT()\0"
};

void DmmPrefs::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        DmmPrefs *_t = static_cast<DmmPrefs *>(_o);
        switch (_id) {
        case 0: _t->defaultsSLOT(); break;
        case 1: _t->factoryDefaultsSLOT(); break;
        case 2: _t->applySLOT(); break;
        case 3: _t->modelSLOT((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->loadSLOT(); break;
        case 5: _t->saveSLOT(); break;
        case 6: _t->scanDevicesSLOT(); break;
        case 7: _t->externalSetupSLOT(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData DmmPrefs::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject DmmPrefs::staticMetaObject = {
    { &UIDmmPrefs::staticMetaObject, qt_meta_stringdata_DmmPrefs,
      qt_meta_data_DmmPrefs, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &DmmPrefs::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *DmmPrefs::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *DmmPrefs::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_DmmPrefs))
        return static_cast<void*>(const_cast< DmmPrefs*>(this));
    return UIDmmPrefs::qt_metacast(_clname);
}

int DmmPrefs::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = UIDmmPrefs::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
