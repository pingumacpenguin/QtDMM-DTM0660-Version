/****************************************************************************
** Meta object code from reading C++ file 'executeprefs.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../executeprefs.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'executeprefs.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_ExecutePrefs[] = {

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
      14,   13,   13,   13, 0x0a,
      29,   13,   13,   13, 0x0a,
      51,   13,   13,   13, 0x0a,
      63,   13,   13,   13, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_ExecutePrefs[] = {
    "ExecutePrefs\0\0defaultsSLOT()\0"
    "factoryDefaultsSLOT()\0applySLOT()\0"
    "browseExecSLOT()\0"
};

void ExecutePrefs::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        ExecutePrefs *_t = static_cast<ExecutePrefs *>(_o);
        switch (_id) {
        case 0: _t->defaultsSLOT(); break;
        case 1: _t->factoryDefaultsSLOT(); break;
        case 2: _t->applySLOT(); break;
        case 3: _t->browseExecSLOT(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData ExecutePrefs::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject ExecutePrefs::staticMetaObject = {
    { &UIExecutePrefs::staticMetaObject, qt_meta_stringdata_ExecutePrefs,
      qt_meta_data_ExecutePrefs, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &ExecutePrefs::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *ExecutePrefs::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *ExecutePrefs::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ExecutePrefs))
        return static_cast<void*>(const_cast< ExecutePrefs*>(this));
    return UIExecutePrefs::qt_metacast(_clname);
}

int ExecutePrefs::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = UIExecutePrefs::qt_metacall(_c, _id, _a);
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
