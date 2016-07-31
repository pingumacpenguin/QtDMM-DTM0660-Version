/****************************************************************************
** Meta object code from reading C++ file 'tipdlg.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../tipdlg.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'tipdlg.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_TipDlg[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: signature, parameters, type, tag, flags
       8,    7,    7,    7, 0x05,
      23,    7,    7,    7, 0x05,

 // slots: signature, parameters, type, tag, flags
      39,    7,    7,    7, 0x0a,
      61,    7,    7,    7, 0x09,
      72,    7,    7,    7, 0x09,
      87,    7,    7,    7, 0x09,
      99,    7,    7,    7, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_TipDlg[] = {
    "TipDlg\0\0showTips(bool)\0currentTip(int)\0"
    "setShowTipsSLOT(bool)\0nextSLOT()\0"
    "previousSLOT()\0closeSLOT()\0"
    "showTipsSLOT(bool)\0"
};

void TipDlg::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        TipDlg *_t = static_cast<TipDlg *>(_o);
        switch (_id) {
        case 0: _t->showTips((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->currentTip((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->setShowTipsSLOT((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->nextSLOT(); break;
        case 4: _t->previousSLOT(); break;
        case 5: _t->closeSLOT(); break;
        case 6: _t->showTipsSLOT((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData TipDlg::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject TipDlg::staticMetaObject = {
    { &UITipDlg::staticMetaObject, qt_meta_stringdata_TipDlg,
      qt_meta_data_TipDlg, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &TipDlg::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *TipDlg::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *TipDlg::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_TipDlg))
        return static_cast<void*>(const_cast< TipDlg*>(this));
    return UITipDlg::qt_metacast(_clname);
}

int TipDlg::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = UITipDlg::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    }
    return _id;
}

// SIGNAL 0
void TipDlg::showTips(bool _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void TipDlg::currentTip(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE
