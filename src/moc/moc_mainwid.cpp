/****************************************************************************
** Meta object code from reading C++ file 'mainwid.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../mainwid.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwid.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_MainWid[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      28,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       8,       // signalCount

 // signals: signature, parameters, type, tag, flags
       9,    8,    8,    8, 0x05,
      23,    8,    8,    8, 0x05,
      37,    8,    8,    8, 0x05,
      52,    8,    8,    8, 0x05,
      71,    8,    8,    8, 0x05,
      90,    8,    8,    8, 0x05,
     112,  107,    8,    8, 0x05,
     156,    8,    8,    8, 0x05,

 // slots: signature, parameters, type, tag, flags
     179,  173,    8,    8, 0x0a,
     230,    8,    8,    8, 0x0a,
     242,    8,    8,    8, 0x0a,
     260,    8,    8,    8, 0x0a,
     271,    8,    8,    8, 0x0a,
     282,    8,    8,    8, 0x0a,
     294,    8,    8,    8, 0x0a,
     306,    8,    8,    8, 0x0a,
     317,    8,    8,    8, 0x0a,
     330,    8,    8,    8, 0x0a,
     346,    8,    8,    8, 0x0a,
     367,    8,    8,    8, 0x0a,
     379,    8,    8,    8, 0x0a,
     392,    8,    8,    8, 0x0a,
     405,    8,    8,    8, 0x0a,
     423,    8,    8,    8, 0x0a,
     435,    8,    8,    8, 0x0a,
     450,    8,    8,    8, 0x09,
     470,    8,    8,    8, 0x09,
     483,    8,    8,    8, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_MainWid[] = {
    "MainWid\0\0running(bool)\0info(QString)\0"
    "error(QString)\0useTextLabel(bool)\0"
    "winGeometry(QRect)\0setConnect(bool)\0"
    ",,,,\0toolbarVisibility(bool,bool,bool,bool,bool)\0"
    "connectDMM(bool)\0,,,,,\0"
    "valueSLOT(double,QString,QString,QString,bool,int)\0"
    "resetSLOT()\0connectSLOT(bool)\0quitSLOT()\0"
    "helpSLOT()\0clearSLOT()\0startSLOT()\0"
    "stopSLOT()\0configSLOT()\0configDmmSLOT()\0"
    "configRecorderSLOT()\0printSLOT()\0"
    "exportSLOT()\0importSLOT()\0runningSLOT(bool)\0"
    "applySLOT()\0showTipsSLOT()\0"
    "startExternalSLOT()\0exitedSLOT()\0"
    "zoomedSLOT()\0"
};

void MainWid::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        MainWid *_t = static_cast<MainWid *>(_o);
        switch (_id) {
        case 0: _t->running((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->info((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->error((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->useTextLabel((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: _t->winGeometry((*reinterpret_cast< const QRect(*)>(_a[1]))); break;
        case 5: _t->setConnect((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 6: _t->toolbarVisibility((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3])),(*reinterpret_cast< bool(*)>(_a[4])),(*reinterpret_cast< bool(*)>(_a[5]))); break;
        case 7: _t->connectDMM((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 8: _t->valueSLOT((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const QString(*)>(_a[4])),(*reinterpret_cast< bool(*)>(_a[5])),(*reinterpret_cast< int(*)>(_a[6]))); break;
        case 9: _t->resetSLOT(); break;
        case 10: _t->connectSLOT((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 11: _t->quitSLOT(); break;
        case 12: _t->helpSLOT(); break;
        case 13: _t->clearSLOT(); break;
        case 14: _t->startSLOT(); break;
        case 15: _t->stopSLOT(); break;
        case 16: _t->configSLOT(); break;
        case 17: _t->configDmmSLOT(); break;
        case 18: _t->configRecorderSLOT(); break;
        case 19: _t->printSLOT(); break;
        case 20: _t->exportSLOT(); break;
        case 21: _t->importSLOT(); break;
        case 22: _t->runningSLOT((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 23: _t->applySLOT(); break;
        case 24: _t->showTipsSLOT(); break;
        case 25: _t->startExternalSLOT(); break;
        case 26: _t->exitedSLOT(); break;
        case 27: _t->zoomedSLOT(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData MainWid::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject MainWid::staticMetaObject = {
    { &UIMainWid::staticMetaObject, qt_meta_stringdata_MainWid,
      qt_meta_data_MainWid, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &MainWid::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *MainWid::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *MainWid::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_MainWid))
        return static_cast<void*>(const_cast< MainWid*>(this));
    return UIMainWid::qt_metacast(_clname);
}

int MainWid::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = UIMainWid::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 28)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 28;
    }
    return _id;
}

// SIGNAL 0
void MainWid::running(bool _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void MainWid::info(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void MainWid::error(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void MainWid::useTextLabel(bool _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void MainWid::winGeometry(const QRect & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void MainWid::setConnect(bool _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void MainWid::toolbarVisibility(bool _t1, bool _t2, bool _t3, bool _t4, bool _t5)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)), const_cast<void*>(reinterpret_cast<const void*>(&_t5)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void MainWid::connectDMM(bool _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}
QT_END_MOC_NAMESPACE
