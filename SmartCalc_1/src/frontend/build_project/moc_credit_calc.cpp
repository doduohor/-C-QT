/****************************************************************************
** Meta object code from reading C++ file 'credit_calc.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.5.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../credit_calc.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'credit_calc.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.5.3. It"
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
struct qt_meta_stringdata_CLASScredit_calcENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASScredit_calcENDCLASS = QtMocHelpers::stringData(
    "credit_calc",
    "on_button_calculation_clicked",
    "",
    "calculateAnnuityPayment",
    "total_amount",
    "term",
    "interest_rate",
    "QStandardItemModel*",
    "model",
    "calculateDifferentialPayment"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASScredit_calcENDCLASS_t {
    uint offsetsAndSizes[20];
    char stringdata0[12];
    char stringdata1[30];
    char stringdata2[1];
    char stringdata3[24];
    char stringdata4[13];
    char stringdata5[5];
    char stringdata6[14];
    char stringdata7[20];
    char stringdata8[6];
    char stringdata9[29];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASScredit_calcENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASScredit_calcENDCLASS_t qt_meta_stringdata_CLASScredit_calcENDCLASS = {
    {
        QT_MOC_LITERAL(0, 11),  // "credit_calc"
        QT_MOC_LITERAL(12, 29),  // "on_button_calculation_clicked"
        QT_MOC_LITERAL(42, 0),  // ""
        QT_MOC_LITERAL(43, 23),  // "calculateAnnuityPayment"
        QT_MOC_LITERAL(67, 12),  // "total_amount"
        QT_MOC_LITERAL(80, 4),  // "term"
        QT_MOC_LITERAL(85, 13),  // "interest_rate"
        QT_MOC_LITERAL(99, 19),  // "QStandardItemModel*"
        QT_MOC_LITERAL(119, 5),  // "model"
        QT_MOC_LITERAL(125, 28)   // "calculateDifferentialPayment"
    },
    "credit_calc",
    "on_button_calculation_clicked",
    "",
    "calculateAnnuityPayment",
    "total_amount",
    "term",
    "interest_rate",
    "QStandardItemModel*",
    "model",
    "calculateDifferentialPayment"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASScredit_calcENDCLASS[] = {

 // content:
      11,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   32,    2, 0x08,    1 /* Private */,
       3,    4,   33,    2, 0x08,    2 /* Private */,
       9,    4,   42,    2, 0x08,    7 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Double, QMetaType::Int, QMetaType::Double, 0x80000000 | 7,    4,    5,    6,    8,
    QMetaType::Void, QMetaType::Double, QMetaType::Int, QMetaType::Double, 0x80000000 | 7,    4,    5,    6,    8,

       0        // eod
};

Q_CONSTINIT const QMetaObject credit_calc::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_CLASScredit_calcENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASScredit_calcENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASScredit_calcENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<credit_calc, std::true_type>,
        // method 'on_button_calculation_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'calculateAnnuityPayment'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<double, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<double, std::false_type>,
        QtPrivate::TypeAndForceComplete<QStandardItemModel *, std::false_type>,
        // method 'calculateDifferentialPayment'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<double, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<double, std::false_type>,
        QtPrivate::TypeAndForceComplete<QStandardItemModel *, std::false_type>
    >,
    nullptr
} };

void credit_calc::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<credit_calc *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->on_button_calculation_clicked(); break;
        case 1: _t->calculateAnnuityPayment((*reinterpret_cast< std::add_pointer_t<double>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<double>>(_a[3])),(*reinterpret_cast< std::add_pointer_t<QStandardItemModel*>>(_a[4]))); break;
        case 2: _t->calculateDifferentialPayment((*reinterpret_cast< std::add_pointer_t<double>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<double>>(_a[3])),(*reinterpret_cast< std::add_pointer_t<QStandardItemModel*>>(_a[4]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 3:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QStandardItemModel* >(); break;
            }
            break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 3:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QStandardItemModel* >(); break;
            }
            break;
        }
    }
}

const QMetaObject *credit_calc::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *credit_calc::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASScredit_calcENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int credit_calc::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    return _id;
}
QT_WARNING_POP
