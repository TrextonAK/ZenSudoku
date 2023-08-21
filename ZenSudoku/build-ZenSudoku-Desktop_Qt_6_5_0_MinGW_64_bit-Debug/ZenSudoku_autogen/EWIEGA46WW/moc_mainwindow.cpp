/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.5.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../ZenSudoku/mainwindow.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSMainWindowENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSMainWindowENDCLASS = QtMocHelpers::stringData(
    "MainWindow",
    "sendNewData",
    "",
    "a",
    "b",
    "itemData",
    "sendFileName",
    "userInput",
    "loadedBoard",
    "int[9][9]",
    "board",
    "on_newGame_1_clicked",
    "receiveNewBoard",
    "receiveSolution",
    "receiveDataCheck",
    "answer",
    "detectWin",
    "on_saveGameTree_doubleClicked",
    "QModelIndex",
    "index",
    "VictoryButton_clicked",
    "on_loadGame_clicked",
    "SaveGame_clicked",
    "on_MainMenuLoad_clicked",
    "on_Quit_clicked",
    "on_Quit_2_clicked",
    "on_NewGame2_clicked",
    "on_loadGame2_clicked",
    "on_MainMenuEnd_clicked",
    "on_playField_itemChanged",
    "QTableWidgetItem*",
    "item",
    "on_fileSaveName_returnPressed",
    "on_pushButton_7_clicked",
    "on_saveGameTree_windowIconTextChanged",
    "iconText",
    "on_saveGameTree_activated"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSMainWindowENDCLASS_t {
    uint offsetsAndSizes[74];
    char stringdata0[11];
    char stringdata1[12];
    char stringdata2[1];
    char stringdata3[2];
    char stringdata4[2];
    char stringdata5[9];
    char stringdata6[13];
    char stringdata7[10];
    char stringdata8[12];
    char stringdata9[10];
    char stringdata10[6];
    char stringdata11[21];
    char stringdata12[16];
    char stringdata13[16];
    char stringdata14[17];
    char stringdata15[7];
    char stringdata16[10];
    char stringdata17[30];
    char stringdata18[12];
    char stringdata19[6];
    char stringdata20[22];
    char stringdata21[20];
    char stringdata22[17];
    char stringdata23[24];
    char stringdata24[16];
    char stringdata25[18];
    char stringdata26[20];
    char stringdata27[21];
    char stringdata28[23];
    char stringdata29[25];
    char stringdata30[18];
    char stringdata31[5];
    char stringdata32[30];
    char stringdata33[24];
    char stringdata34[38];
    char stringdata35[9];
    char stringdata36[26];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSMainWindowENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSMainWindowENDCLASS_t qt_meta_stringdata_CLASSMainWindowENDCLASS = {
    {
        QT_MOC_LITERAL(0, 10),  // "MainWindow"
        QT_MOC_LITERAL(11, 11),  // "sendNewData"
        QT_MOC_LITERAL(23, 0),  // ""
        QT_MOC_LITERAL(24, 1),  // "a"
        QT_MOC_LITERAL(26, 1),  // "b"
        QT_MOC_LITERAL(28, 8),  // "itemData"
        QT_MOC_LITERAL(37, 12),  // "sendFileName"
        QT_MOC_LITERAL(50, 9),  // "userInput"
        QT_MOC_LITERAL(60, 11),  // "loadedBoard"
        QT_MOC_LITERAL(72, 9),  // "int[9][9]"
        QT_MOC_LITERAL(82, 5),  // "board"
        QT_MOC_LITERAL(88, 20),  // "on_newGame_1_clicked"
        QT_MOC_LITERAL(109, 15),  // "receiveNewBoard"
        QT_MOC_LITERAL(125, 15),  // "receiveSolution"
        QT_MOC_LITERAL(141, 16),  // "receiveDataCheck"
        QT_MOC_LITERAL(158, 6),  // "answer"
        QT_MOC_LITERAL(165, 9),  // "detectWin"
        QT_MOC_LITERAL(175, 29),  // "on_saveGameTree_doubleClicked"
        QT_MOC_LITERAL(205, 11),  // "QModelIndex"
        QT_MOC_LITERAL(217, 5),  // "index"
        QT_MOC_LITERAL(223, 21),  // "VictoryButton_clicked"
        QT_MOC_LITERAL(245, 19),  // "on_loadGame_clicked"
        QT_MOC_LITERAL(265, 16),  // "SaveGame_clicked"
        QT_MOC_LITERAL(282, 23),  // "on_MainMenuLoad_clicked"
        QT_MOC_LITERAL(306, 15),  // "on_Quit_clicked"
        QT_MOC_LITERAL(322, 17),  // "on_Quit_2_clicked"
        QT_MOC_LITERAL(340, 19),  // "on_NewGame2_clicked"
        QT_MOC_LITERAL(360, 20),  // "on_loadGame2_clicked"
        QT_MOC_LITERAL(381, 22),  // "on_MainMenuEnd_clicked"
        QT_MOC_LITERAL(404, 24),  // "on_playField_itemChanged"
        QT_MOC_LITERAL(429, 17),  // "QTableWidgetItem*"
        QT_MOC_LITERAL(447, 4),  // "item"
        QT_MOC_LITERAL(452, 29),  // "on_fileSaveName_returnPressed"
        QT_MOC_LITERAL(482, 23),  // "on_pushButton_7_clicked"
        QT_MOC_LITERAL(506, 37),  // "on_saveGameTree_windowIconTex..."
        QT_MOC_LITERAL(544, 8),  // "iconText"
        QT_MOC_LITERAL(553, 25)   // "on_saveGameTree_activated"
    },
    "MainWindow",
    "sendNewData",
    "",
    "a",
    "b",
    "itemData",
    "sendFileName",
    "userInput",
    "loadedBoard",
    "int[9][9]",
    "board",
    "on_newGame_1_clicked",
    "receiveNewBoard",
    "receiveSolution",
    "receiveDataCheck",
    "answer",
    "detectWin",
    "on_saveGameTree_doubleClicked",
    "QModelIndex",
    "index",
    "VictoryButton_clicked",
    "on_loadGame_clicked",
    "SaveGame_clicked",
    "on_MainMenuLoad_clicked",
    "on_Quit_clicked",
    "on_Quit_2_clicked",
    "on_NewGame2_clicked",
    "on_loadGame2_clicked",
    "on_MainMenuEnd_clicked",
    "on_playField_itemChanged",
    "QTableWidgetItem*",
    "item",
    "on_fileSaveName_returnPressed",
    "on_pushButton_7_clicked",
    "on_saveGameTree_windowIconTextChanged",
    "iconText",
    "on_saveGameTree_activated"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSMainWindowENDCLASS[] = {

 // content:
      11,       // revision
       0,       // classname
       0,    0, // classinfo
      23,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    3,  152,    2, 0x06,    1 /* Public */,
       6,    1,  159,    2, 0x06,    5 /* Public */,
       8,    1,  162,    2, 0x06,    7 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
      11,    0,  165,    2, 0x0a,    9 /* Public */,
      12,    1,  166,    2, 0x0a,   10 /* Public */,
      13,    1,  169,    2, 0x0a,   12 /* Public */,
      14,    4,  172,    2, 0x0a,   14 /* Public */,
      16,    0,  181,    2, 0x0a,   19 /* Public */,
      17,    1,  182,    2, 0x0a,   20 /* Public */,
      20,    0,  185,    2, 0x08,   22 /* Private */,
      21,    0,  186,    2, 0x08,   23 /* Private */,
      22,    0,  187,    2, 0x08,   24 /* Private */,
      23,    0,  188,    2, 0x08,   25 /* Private */,
      24,    0,  189,    2, 0x08,   26 /* Private */,
      25,    0,  190,    2, 0x08,   27 /* Private */,
      26,    0,  191,    2, 0x08,   28 /* Private */,
      27,    0,  192,    2, 0x08,   29 /* Private */,
      28,    0,  193,    2, 0x08,   30 /* Private */,
      29,    1,  194,    2, 0x08,   31 /* Private */,
      32,    0,  197,    2, 0x08,   33 /* Private */,
      33,    0,  198,    2, 0x08,   34 /* Private */,
      34,    1,  199,    2, 0x08,   35 /* Private */,
      36,    1,  202,    2, 0x08,   37 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Int,    3,    4,    5,
    QMetaType::Void, QMetaType::QString,    7,
    QMetaType::Void, 0x80000000 | 9,   10,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 9,   10,
    QMetaType::Void, 0x80000000 | 9,   10,
    QMetaType::Void, QMetaType::Bool, QMetaType::Int, QMetaType::Int, QMetaType::Int,   15,    3,    4,    5,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 18,   19,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 30,   31,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   35,
    QMetaType::Void, 0x80000000 | 18,   19,

       0        // eod
};

Q_CONSTINIT const QMetaObject MainWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_CLASSMainWindowENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSMainWindowENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSMainWindowENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<MainWindow, std::true_type>,
        // method 'sendNewData'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'sendFileName'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'loadedBoard'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'on_newGame_1_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'receiveNewBoard'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'receiveSolution'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'receiveDataCheck'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'detectWin'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_saveGameTree_doubleClicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QModelIndex &, std::false_type>,
        // method 'VictoryButton_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_loadGame_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'SaveGame_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_MainMenuLoad_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_Quit_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_Quit_2_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_NewGame2_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_loadGame2_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_MainMenuEnd_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_playField_itemChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QTableWidgetItem *, std::false_type>,
        // method 'on_fileSaveName_returnPressed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_pushButton_7_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_saveGameTree_windowIconTextChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'on_saveGameTree_activated'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QModelIndex &, std::false_type>
    >,
    nullptr
} };

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MainWindow *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->sendNewData((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[3]))); break;
        case 1: _t->sendFileName((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 2: _t->loadedBoard((*reinterpret_cast< std::add_pointer_t<int[9][9]>>(_a[1]))); break;
        case 3: _t->on_newGame_1_clicked(); break;
        case 4: _t->receiveNewBoard((*reinterpret_cast< std::add_pointer_t<int[9][9]>>(_a[1]))); break;
        case 5: _t->receiveSolution((*reinterpret_cast< std::add_pointer_t<int[9][9]>>(_a[1]))); break;
        case 6: _t->receiveDataCheck((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[3])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[4]))); break;
        case 7: _t->detectWin(); break;
        case 8: _t->on_saveGameTree_doubleClicked((*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[1]))); break;
        case 9: _t->VictoryButton_clicked(); break;
        case 10: _t->on_loadGame_clicked(); break;
        case 11: _t->SaveGame_clicked(); break;
        case 12: _t->on_MainMenuLoad_clicked(); break;
        case 13: _t->on_Quit_clicked(); break;
        case 14: _t->on_Quit_2_clicked(); break;
        case 15: _t->on_NewGame2_clicked(); break;
        case 16: _t->on_loadGame2_clicked(); break;
        case 17: _t->on_MainMenuEnd_clicked(); break;
        case 18: _t->on_playField_itemChanged((*reinterpret_cast< std::add_pointer_t<QTableWidgetItem*>>(_a[1]))); break;
        case 19: _t->on_fileSaveName_returnPressed(); break;
        case 20: _t->on_pushButton_7_clicked(); break;


        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (MainWindow::*)(int , int , int );
            if (_t _q_method = &MainWindow::sendNewData; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (MainWindow::*)(QString );
            if (_t _q_method = &MainWindow::sendFileName; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (MainWindow::*)(int [9][9]);
            if (_t _q_method = &MainWindow::loadedBoard; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
    }
}

const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSMainWindowENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 23)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 23;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 23)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 23;
    }
    return _id;
}

// SIGNAL 0
void MainWindow::sendNewData(int _t1, int _t2, int _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void MainWindow::sendFileName(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void MainWindow::loadedBoard(int _t1[9][9])
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_WARNING_POP
