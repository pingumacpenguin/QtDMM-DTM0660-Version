/****************************************************************************
** Meta object code from reading C++ file 'scaleprefs.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../scaleprefs.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'scaleprefs.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_ScalePrefs[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      12,   11,   11,   11, 0x0a,
      27,   11,   11,   11, 0x0a,
      49,   11,   11,   11, 0x0a,
      71,   61,   11,   11, 0x0a,
      98,   94,   11,   11, 0x0a,
     117,   94,   11,   11, 0x0a,
     149,  137,   11,   11, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_ScalePrefs[] = {
    "ScalePrefs\0\0defaultsSLOT()\0"
    "factoryDefaultsSLOT()\0applySLOT()\0"
    "autoScale\0setAutoScaleSLOT(bool)\0fac\0"
    "zoomInSLOT(double)\0zoomOutSLOT(double)\0"
    "size,length\0setGraphSizeSLOT(int,int)\0"
};

void ScalePrefs::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        ScalePrefs *_t = static_cast<ScalePrefs *>(_o);
        switch (_id) {
        case 0: _t->defaultsSLOT(); break;
        case 1: _t->factoryDefaultsSLOT(); break;
        case 2: _t->applySLOT(); break;
        case 3: _t->setAutoScaleSLOT((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: _t->zoomInSLOT((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 5: _t->zoomOutSLOT((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 6: _t->setGraphSizeSLOT((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData ScalePrefs::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject ScalePrefs::staticMetaObject = {
    { &UIScalePrefs::staticMetaObject, qt_meta_stringdata_ScalePrefs,
      qt_meta_data_ScalePrefs, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &ScalePrefs::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *ScalePrefs::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *ScalePrefs::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ScalePrefs))
        return static_cast<void*>(const_cast< ScalePrefs*>(this));
    return UIScalePrefs::qt_metacast(_clname);
}

int ScalePrefs::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = UIScalePrefs::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
