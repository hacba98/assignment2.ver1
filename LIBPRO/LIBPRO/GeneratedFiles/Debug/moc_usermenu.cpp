/****************************************************************************
** Meta object code from reading C++ file 'usermenu.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../usermenu.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'usermenu.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_UserMenu_t {
    QByteArrayData data[9];
    char stringdata0[181];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_UserMenu_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_UserMenu_t qt_meta_stringdata_UserMenu = {
    {
QT_MOC_LITERAL(0, 0, 8), // "UserMenu"
QT_MOC_LITERAL(1, 9, 25), // "on_findBookButton_clicked"
QT_MOC_LITERAL(2, 35, 0), // ""
QT_MOC_LITERAL(3, 36, 24), // "on_historyButton_clicked"
QT_MOC_LITERAL(4, 61, 23), // "on_returnButton_clicked"
QT_MOC_LITERAL(5, 85, 24), // "on_returnButton2_clicked"
QT_MOC_LITERAL(6, 110, 24), // "on_profileButton_clicked"
QT_MOC_LITERAL(7, 135, 23), // "on_changeButton_clicked"
QT_MOC_LITERAL(8, 159, 21) // "on_saveButton_clicked"

    },
    "UserMenu\0on_findBookButton_clicked\0\0"
    "on_historyButton_clicked\0"
    "on_returnButton_clicked\0"
    "on_returnButton2_clicked\0"
    "on_profileButton_clicked\0"
    "on_changeButton_clicked\0on_saveButton_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_UserMenu[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   49,    2, 0x0a /* Public */,
       3,    0,   50,    2, 0x0a /* Public */,
       4,    0,   51,    2, 0x0a /* Public */,
       5,    0,   52,    2, 0x0a /* Public */,
       6,    0,   53,    2, 0x0a /* Public */,
       7,    0,   54,    2, 0x0a /* Public */,
       8,    0,   55,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void UserMenu::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        UserMenu *_t = static_cast<UserMenu *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_findBookButton_clicked(); break;
        case 1: _t->on_historyButton_clicked(); break;
        case 2: _t->on_returnButton_clicked(); break;
        case 3: _t->on_returnButton2_clicked(); break;
        case 4: _t->on_profileButton_clicked(); break;
        case 5: _t->on_changeButton_clicked(); break;
        case 6: _t->on_saveButton_clicked(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject UserMenu::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_UserMenu.data,
      qt_meta_data_UserMenu,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *UserMenu::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *UserMenu::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_UserMenu.stringdata0))
        return static_cast<void*>(const_cast< UserMenu*>(this));
    if (!strcmp(_clname, "Ui::UserMenu"))
        return static_cast< Ui::UserMenu*>(const_cast< UserMenu*>(this));
    return QWidget::qt_metacast(_clname);
}

int UserMenu::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 7;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
