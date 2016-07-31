/****************************************************************************
** Meta object code from reading C++ file 'configdlg.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../configdlg.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'configdlg.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_ConfigDlg[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      15,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: signature, parameters, type, tag, flags
      11,   10,   10,   10, 0x05,
      22,   10,   10,   10, 0x05,
      37,   10,   10,   10, 0x05,

 // slots: signature, parameters, type, tag, flags
      46,   10,   10,   10, 0x0a,
      64,   10,   10,   10, 0x0a,
      76,   10,   10,   10, 0x0a,
     101,   99,   10,   10, 0x0a,
     127,   10,   10,   10, 0x0a,
     149,   10,   10,   10, 0x0a,
     172,   10,   10,   10, 0x0a,
     191,   10,   10,   10, 0x0a,
     211,   10,   10,   10, 0x0a,
     224,   99,   10,   10, 0x0a,
     279,  274,   10,   10, 0x09,
     313,   10,   10,   10, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_ConfigDlg[] = {
    "ConfigDlg\0\0accepted()\0showTips(bool)\0"
    "zoomed()\0connectSLOT(bool)\0applySLOT()\0"
    "setSampleTimeSLOT(int)\0,\0"
    "setGraphSizeSLOT(int,int)\0"
    "setShowTipsSLOT(bool)\0setCurrentTipSLOT(int)\0"
    "zoomInSLOT(double)\0zoomOutSLOT(double)\0"
    "cancelSLOT()\0"
    "thresholdChangedSLOT(DMMGraph::CursorMode,double)\0"
    "item\0pageSelectedSLOT(Q3ListViewItem*)\0"
    "factoryDefaultsSLOT()\0"
};

void ConfigDlg::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        ConfigDlg *_t = static_cast<ConfigDlg *>(_o);
        switch (_id) {
        case 0: _t->accepted(); break;
        case 1: _t->showTips((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->zoomed(); break;
        case 3: _t->connectSLOT((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: _t->applySLOT(); break;
        case 5: _t->setSampleTimeSLOT((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->setGraphSizeSLOT((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 7: _t->setShowTipsSLOT((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 8: _t->setCurrentTipSLOT((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 9: _t->zoomInSLOT((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 10: _t->zoomOutSLOT((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 11: _t->cancelSLOT(); break;
        case 12: _t->thresholdChangedSLOT((*reinterpret_cast< DMMGraph::CursorMode(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2]))); break;
        case 13: _t->pageSelectedSLOT((*reinterpret_cast< Q3ListViewItem*(*)>(_a[1]))); break;
        case 14: _t->factoryDefaultsSLOT(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData ConfigDlg::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject ConfigDlg::staticMetaObject = {
    { &UIConfigDlg::staticMetaObject, qt_meta_stringdata_ConfigDlg,
      qt_meta_data_ConfigDlg, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &ConfigDlg::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *ConfigDlg::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *ConfigDlg::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ConfigDlg))
        return static_cast<void*>(const_cast< ConfigDlg*>(this));
    return UIConfigDlg::qt_metacast(_clname);
}

int ConfigDlg::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = UIConfigDlg::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 15)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 15;
    }
    return _id;
}

// SIGNAL 0
void ConfigDlg::accepted()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void ConfigDlg::showTips(bool _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void ConfigDlg::zoomed()
{
    QMetaObject::activate(this, &staticMetaObject, 2, 0);
}
QT_END_MOC_NAMESPACE
