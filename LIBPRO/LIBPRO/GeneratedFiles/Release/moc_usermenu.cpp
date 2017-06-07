/****************************************************************************
** Meta object code from reading C++ file 'usermenu.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../usermenu.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'usermenu.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_UserMenu_t {
    QByteArrayData data[20];
    char stringdata0[438];
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
QT_MOC_LITERAL(8, 159, 21), // "on_saveButton_clicked"
QT_MOC_LITERAL(9, 181, 23), // "on_searchButton_clicked"
QT_MOC_LITERAL(10, 205, 27), // "on_listWidget_2_itemClicked"
QT_MOC_LITERAL(11, 233, 20), // "on_addButton_clicked"
QT_MOC_LITERAL(12, 254, 27), // "on_listWidget_3_itemClicked"
QT_MOC_LITERAL(13, 282, 23), // "on_removeButton_clicked"
QT_MOC_LITERAL(14, 306, 33), // "on_listWidget_2_itemDoubleCli..."
QT_MOC_LITERAL(15, 340, 25), // "on_returnButton_2_clicked"
QT_MOC_LITERAL(16, 366, 22), // "on_addButton_2_clicked"
QT_MOC_LITERAL(17, 389, 18), // "checkBookItemExist"
QT_MOC_LITERAL(18, 408, 16), // "QListWidgetItem*"
QT_MOC_LITERAL(19, 425, 12) // "QListWidget*"

    },
    "UserMenu\0on_findBookButton_clicked\0\0"
    "on_historyButton_clicked\0"
    "on_returnButton_clicked\0"
    "on_returnButton2_clicked\0"
    "on_profileButton_clicked\0"
    "on_changeButton_clicked\0on_saveButton_clicked\0"
    "on_searchButton_clicked\0"
    "on_listWidget_2_itemClicked\0"
    "on_addButton_clicked\0on_listWidget_3_itemClicked\0"
    "on_removeButton_clicked\0"
    "on_listWidget_2_itemDoubleClicked\0"
    "on_returnButton_2_clicked\0"
    "on_addButton_2_clicked\0checkBookItemExist\0"
    "QListWidgetItem*\0QListWidget*"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_UserMenu[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      16,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   94,    2, 0x0a /* Public */,
       3,    0,   95,    2, 0x0a /* Public */,
       4,    0,   96,    2, 0x0a /* Public */,
       5,    0,   97,    2, 0x0a /* Public */,
       6,    0,   98,    2, 0x0a /* Public */,
       7,    0,   99,    2, 0x0a /* Public */,
       8,    0,  100,    2, 0x0a /* Public */,
       9,    0,  101,    2, 0x0a /* Public */,
      10,    0,  102,    2, 0x0a /* Public */,
      11,    0,  103,    2, 0x0a /* Public */,
      12,    0,  104,    2, 0x0a /* Public */,
      13,    0,  105,    2, 0x0a /* Public */,
      14,    0,  106,    2, 0x0a /* Public */,
      15,    0,  107,    2, 0x0a /* Public */,
      16,    0,  108,    2, 0x0a /* Public */,
      17,    2,  109,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Bool, 0x80000000 | 18, 0x80000000 | 19,    2,    2,

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
        case 7: _t->on_searchButton_clicked(); break;
        case 8: _t->on_listWidget_2_itemClicked(); break;
        case 9: _t->on_addButton_clicked(); break;
        case 10: _t->on_listWidget_3_itemClicked(); break;
        case 11: _t->on_removeButton_clicked(); break;
        case 12: _t->on_listWidget_2_itemDoubleClicked(); break;
        case 13: _t->on_returnButton_2_clicked(); break;
        case 14: _t->on_addButton_2_clicked(); break;
        case 15: { bool _r = _t->checkBookItemExist((*reinterpret_cast< QListWidgetItem*(*)>(_a[1])),(*reinterpret_cast< QListWidget*(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 15:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QListWidget* >(); break;
            }
            break;
        }
    }
}

const QMetaObject UserMenu::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_UserMenu.data,
      qt_meta_data_UserMenu,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *UserMenu::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *UserMenu::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
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
        if (_id < 16)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 16;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 16)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 16;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
