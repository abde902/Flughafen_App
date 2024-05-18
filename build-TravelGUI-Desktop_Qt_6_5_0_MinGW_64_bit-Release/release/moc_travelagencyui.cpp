/****************************************************************************
** Meta object code from reading C++ file 'travelagencyui.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.5.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../TravelGUI/travelagencyui.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'travelagencyui.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.5.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#ifndef Q_CONSTINIT
#define Q_CONSTINIT
#endif

QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
QT_WARNING_DISABLE_GCC("-Wuseless-cast")
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSTravelagencyUIENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSTravelagencyUIENDCLASS = QtMocHelpers::stringData(
    "TravelagencyUI",
    "saveChanges",
    "",
    "on_buttonOpenFile_clicked",
    "on_einzelnclicked",
    "displayReisenByKundenId",
    "Customer*",
    "customer"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSTravelagencyUIENDCLASS_t {
    uint offsetsAndSizes[16];
    char stringdata0[15];
    char stringdata1[12];
    char stringdata2[1];
    char stringdata3[26];
    char stringdata4[18];
    char stringdata5[24];
    char stringdata6[10];
    char stringdata7[9];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSTravelagencyUIENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSTravelagencyUIENDCLASS_t qt_meta_stringdata_CLASSTravelagencyUIENDCLASS = {
    {
        QT_MOC_LITERAL(0, 14),  // "TravelagencyUI"
        QT_MOC_LITERAL(15, 11),  // "saveChanges"
        QT_MOC_LITERAL(27, 0),  // ""
        QT_MOC_LITERAL(28, 25),  // "on_buttonOpenFile_clicked"
        QT_MOC_LITERAL(54, 17),  // "on_einzelnclicked"
        QT_MOC_LITERAL(72, 23),  // "displayReisenByKundenId"
        QT_MOC_LITERAL(96, 9),  // "Customer*"
        QT_MOC_LITERAL(106, 8)   // "customer"
    },
    "TravelagencyUI",
    "saveChanges",
    "",
    "on_buttonOpenFile_clicked",
    "on_einzelnclicked",
    "displayReisenByKundenId",
    "Customer*",
    "customer"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSTravelagencyUIENDCLASS[] = {

 // content:
      11,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   38,    2, 0x08,    1 /* Private */,
       3,    0,   39,    2, 0x08,    2 /* Private */,
       4,    0,   40,    2, 0x08,    3 /* Private */,
       5,    1,   41,    2, 0x08,    4 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 6,    7,

       0        // eod
};

Q_CONSTINIT const QMetaObject TravelagencyUI::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_CLASSTravelagencyUIENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSTravelagencyUIENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSTravelagencyUIENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<TravelagencyUI, std::true_type>,
        // method 'saveChanges'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_buttonOpenFile_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_einzelnclicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'displayReisenByKundenId'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<Customer *, std::false_type>
    >,
    nullptr
} };

void TravelagencyUI::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<TravelagencyUI *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->saveChanges(); break;
        case 1: _t->on_buttonOpenFile_clicked(); break;
        case 2: _t->on_einzelnclicked(); break;
        case 3: _t->displayReisenByKundenId((*reinterpret_cast< std::add_pointer_t<Customer*>>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject *TravelagencyUI::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TravelagencyUI::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSTravelagencyUIENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int TravelagencyUI::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 4;
    }
    return _id;
}
QT_WARNING_POP
