/****************************************************************************
** Meta object code from reading C++ file 'graphprefs.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../graphprefs.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'graphprefs.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_GraphPrefs[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      12,   11,   11,   11, 0x0a,
      27,   11,   11,   11, 0x0a,
      49,   11,   11,   11, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_GraphPrefs[] = {
    "GraphPrefs\0\0defaultsSLOT()\0"
    "factoryDefaultsSLOT()\0applySLOT()\0"
};

void GraphPrefs::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        GraphPrefs *_t = static_cast<GraphPrefs *>(_o);
        switch (_id) {
        case 0: _t->defaultsSLOT(); break;
        case 1: _t->factoryDefaultsSLOT(); break;
        case 2: _t->applySLOT(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData GraphPrefs::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject GraphPrefs::staticMetaObject = {
    { &UIGraphPrefs::staticMetaObject, qt_meta_stringdata_GraphPrefs,
      qt_meta_data_GraphPrefs, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &GraphPrefs::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *GraphPrefs::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *GraphPrefs::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_GraphPrefs))
        return static_cast<void*>(const_cast< GraphPrefs*>(this));
    return UIGraphPrefs::qt_metacast(_clname);
}

int GraphPrefs::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = UIGraphPrefs::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
