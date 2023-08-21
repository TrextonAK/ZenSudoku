/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QTreeView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ZenSudoku
{
public:
    QWidget *centralwidget;
    QHBoxLayout *horizontalLayout;
    QStackedWidget *stackedWidget;
    QWidget *Main;
    QPushButton *newGame_1;
    QPushButton *loadGame;
    QPushButton *Quit_2;
    QLabel *GameTitle;
    QFrame *frame;
    QWidget *Load;
    QPushButton *MainMenuLoad;
    QFrame *frame_2;
    QTreeView *saveGameTree;
    QFrame *frame_3;
    QWidget *End;
    QPushButton *NewGame2;
    QPushButton *loadGame2;
    QPushButton *MainMenuEnd;
    QFrame *frame_4;
    QLabel *GameTitle_2;
    QWidget *Game;
    QPushButton *SaveGame;
    QPushButton *SolveGame;
    QPushButton *Quit;
    QTableWidget *playField;
    QFrame *frame_5;
    QFrame *FrameBarH2;
    QFrame *frameBarH1;
    QFrame *FrameBarV1;
    QFrame *FrameBarV2;
    QPushButton *VictoryButton;
    QLineEdit *fileSaveName;
    QMenuBar *menubar;

    void setupUi(QMainWindow *ZenSudoku)
    {
        if (ZenSudoku->objectName().isEmpty())
            ZenSudoku->setObjectName("ZenSudoku");
        ZenSudoku->setEnabled(true);
        ZenSudoku->resize(1920, 1080);
        ZenSudoku->setMinimumSize(QSize(1920, 1080));
        ZenSudoku->setMaximumSize(QSize(1920, 1080));
        ZenSudoku->setStyleSheet(QString::fromUtf8("background-image: url(../MyResources/5.png)"));
        centralwidget = new QWidget(ZenSudoku);
        centralwidget->setObjectName("centralwidget");
        centralwidget->setMaximumSize(QSize(1920, 16777215));
        QFont font;
        font.setPointSize(16);
        centralwidget->setFont(font);
        centralwidget->setStyleSheet(QString::fromUtf8("background: none;"));
        horizontalLayout = new QHBoxLayout(centralwidget);
        horizontalLayout->setObjectName("horizontalLayout");
        stackedWidget = new QStackedWidget(centralwidget);
        stackedWidget->setObjectName("stackedWidget");
        QFont font1;
        font1.setPointSize(9);
        stackedWidget->setFont(font1);
#if QT_CONFIG(tooltip)
        stackedWidget->setToolTip(QString::fromUtf8(""));
#endif // QT_CONFIG(tooltip)
        stackedWidget->setStyleSheet(QString::fromUtf8("background: none;"));
        stackedWidget->setFrameShadow(QFrame::Sunken);
        stackedWidget->setLineWidth(1);
        Main = new QWidget();
        Main->setObjectName("Main");
        Main->setStyleSheet(QString::fromUtf8(""));
        newGame_1 = new QPushButton(Main);
        newGame_1->setObjectName("newGame_1");
        newGame_1->setGeometry(QRect(1170, 170, 501, 161));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Franklin Gothic Demi Cond")});
        font2.setPointSize(32);
        font2.setBold(false);
        newGame_1->setFont(font2);
        newGame_1->setAutoFillBackground(false);
        newGame_1->setStyleSheet(QString::fromUtf8("border-radius: 20px;\n"
"border-width: 2px;\n"
"border-color: rgb(0, 0, 0);\n"
"border-style: solid;\n"
"background: transparent\n"
""));
        loadGame = new QPushButton(Main);
        loadGame->setObjectName("loadGame");
        loadGame->setGeometry(QRect(1170, 430, 501, 161));
        loadGame->setFont(font2);
        loadGame->setAutoFillBackground(false);
        loadGame->setStyleSheet(QString::fromUtf8("border-radius: 20px;\n"
"border-width: 2px;\n"
"border-color: rgb(0, 0, 0);\n"
"border-style: solid;\n"
"background: transparent\n"
""));
        Quit_2 = new QPushButton(Main);
        Quit_2->setObjectName("Quit_2");
        Quit_2->setGeometry(QRect(1170, 680, 501, 161));
        Quit_2->setFont(font2);
        Quit_2->setAutoFillBackground(false);
        Quit_2->setStyleSheet(QString::fromUtf8("border-radius: 20px;\n"
"border-width: 2px;\n"
"border-color: rgb(0, 0, 0);\n"
"border-style: solid;\n"
"background: transparent\n"
""));
        GameTitle = new QLabel(Main);
        GameTitle->setObjectName("GameTitle");
        GameTitle->setGeometry(QRect(90, 830, 971, 191));
        QFont font3;
        font3.setFamilies({QString::fromUtf8("Franklin Gothic Demi")});
        font3.setPointSize(110);
        font3.setBold(true);
        GameTitle->setFont(font3);
        GameTitle->setStyleSheet(QString::fromUtf8("background: none;\n"
"font-color: black;"));
        GameTitle->setAlignment(Qt::AlignCenter);
        frame = new QFrame(Main);
        frame->setObjectName("frame");
        frame->setGeometry(QRect(170, 0, 901, 821));
        frame->setStyleSheet(QString::fromUtf8("background-image: url(../MyResources/YinYang.png)"));
        frame->setFrameShape(QFrame::NoFrame);
        frame->setFrameShadow(QFrame::Plain);
        frame->setLineWidth(0);
        stackedWidget->addWidget(Main);
        Load = new QWidget();
        Load->setObjectName("Load");
        MainMenuLoad = new QPushButton(Load);
        MainMenuLoad->setObjectName("MainMenuLoad");
        MainMenuLoad->setGeometry(QRect(1280, 700, 501, 161));
        MainMenuLoad->setFont(font2);
        MainMenuLoad->setAutoFillBackground(false);
        MainMenuLoad->setStyleSheet(QString::fromUtf8("border-radius: 20px;\n"
"border-width: 2px;\n"
"border-color: rgb(0, 0, 0);\n"
"border-style: solid;\n"
"background: transparent\n"
""));
        frame_2 = new QFrame(Load);
        frame_2->setObjectName("frame_2");
        frame_2->setGeometry(QRect(120, 50, 921, 961));
        frame_2->setStyleSheet(QString::fromUtf8("background-position: center;\n"
"background-repeat: no-repeat;\n"
"background-image: url(../MyResources/loadbackground.png)\n"
""));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        saveGameTree = new QTreeView(frame_2);
        saveGameTree->setObjectName("saveGameTree");
        saveGameTree->setGeometry(QRect(80, 80, 771, 821));
        QFont font4;
        font4.setFamilies({QString::fromUtf8("Franklin Gothic Demi")});
        font4.setPointSize(12);
        font4.setBold(false);
        saveGameTree->setFont(font4);
        saveGameTree->setFrameShape(QFrame::NoFrame);
        saveGameTree->setFrameShadow(QFrame::Plain);
        saveGameTree->setLineWidth(0);
        saveGameTree->setAlternatingRowColors(false);
        saveGameTree->setTextElideMode(Qt::ElideMiddle);
        saveGameTree->setRootIsDecorated(false);
        saveGameTree->setHeaderHidden(true);
        saveGameTree->header()->setVisible(false);
        saveGameTree->header()->setDefaultSectionSize(200);
        saveGameTree->header()->setHighlightSections(true);
        frame_3 = new QFrame(Load);
        frame_3->setObjectName("frame_3");
        frame_3->setGeometry(QRect(1270, 110, 511, 461));
        frame_3->setStyleSheet(QString::fromUtf8("background-image: url(../MyResources/tree.png)"));
        frame_3->setFrameShape(QFrame::StyledPanel);
        frame_3->setFrameShadow(QFrame::Raised);
        stackedWidget->addWidget(Load);
        End = new QWidget();
        End->setObjectName("End");
        NewGame2 = new QPushButton(End);
        NewGame2->setObjectName("NewGame2");
        NewGame2->setGeometry(QRect(1360, 160, 501, 161));
        NewGame2->setFont(font2);
        NewGame2->setAutoFillBackground(false);
        NewGame2->setStyleSheet(QString::fromUtf8("border-radius: 20px;\n"
"border-width: 2px;\n"
"border-color: rgb(0, 0, 0);\n"
"border-style: solid;\n"
"background: transparent\n"
""));
        loadGame2 = new QPushButton(End);
        loadGame2->setObjectName("loadGame2");
        loadGame2->setGeometry(QRect(1360, 410, 501, 161));
        loadGame2->setFont(font2);
        loadGame2->setAutoFillBackground(false);
        loadGame2->setStyleSheet(QString::fromUtf8("border-radius: 20px;\n"
"border-width: 2px;\n"
"border-color: rgb(0, 0, 0);\n"
"border-style: solid;\n"
"background: transparent\n"
""));
        MainMenuEnd = new QPushButton(End);
        MainMenuEnd->setObjectName("MainMenuEnd");
        MainMenuEnd->setGeometry(QRect(1360, 660, 501, 161));
        MainMenuEnd->setFont(font2);
        MainMenuEnd->setAutoFillBackground(false);
        MainMenuEnd->setStyleSheet(QString::fromUtf8("border-radius: 20px;\n"
"border-width: 2px;\n"
"border-color: rgb(0, 0, 0);\n"
"border-style: solid;\n"
"background: transparent\n"
""));
        frame_4 = new QFrame(End);
        frame_4->setObjectName("frame_4");
        frame_4->setGeometry(QRect(120, 20, 1151, 1031));
        frame_4->setStyleSheet(QString::fromUtf8("background-image: url(../MyResources/sun.png);\n"
"background-position: center;"));
        frame_4->setFrameShape(QFrame::StyledPanel);
        frame_4->setFrameShadow(QFrame::Raised);
        GameTitle_2 = new QLabel(frame_4);
        GameTitle_2->setObjectName("GameTitle_2");
        GameTitle_2->setGeometry(QRect(110, -10, 991, 191));
        GameTitle_2->setFont(font3);
        GameTitle_2->setStyleSheet(QString::fromUtf8("background: none;\n"
"font-color: black;"));
        GameTitle_2->setAlignment(Qt::AlignCenter);
        stackedWidget->addWidget(End);
        Game = new QWidget();
        Game->setObjectName("Game");
        SaveGame = new QPushButton(Game);
        SaveGame->setObjectName("SaveGame");
        SaveGame->setGeometry(QRect(1320, 110, 501, 161));
        SaveGame->setFont(font2);
        SaveGame->setAutoFillBackground(false);
        SaveGame->setStyleSheet(QString::fromUtf8("border-radius: 20px;\n"
"border-width: 2px;\n"
"border-color: rgb(0, 0, 0);\n"
"border-style: solid;\n"
"background: transparent\n"
""));
        SolveGame = new QPushButton(Game);
        SolveGame->setObjectName("SolveGame");
        SolveGame->setGeometry(QRect(1320, 350, 501, 161));
        SolveGame->setFont(font2);
        SolveGame->setAutoFillBackground(false);
        SolveGame->setStyleSheet(QString::fromUtf8("border-radius: 20px;\n"
"border-width: 2px;\n"
"border-color: rgb(0, 0, 0);\n"
"border-style: solid;\n"
"background: transparent\n"
""));
        Quit = new QPushButton(Game);
        Quit->setObjectName("Quit");
        Quit->setGeometry(QRect(1320, 580, 501, 161));
        Quit->setFont(font2);
        Quit->setAutoFillBackground(false);
        Quit->setStyleSheet(QString::fromUtf8("border-radius: 20px;\n"
"border-width: 2px;\n"
"border-color: rgb(0, 0, 0);\n"
"border-style: solid;\n"
"background: transparent\n"
""));
        playField = new QTableWidget(Game);
        if (playField->columnCount() < 9)
            playField->setColumnCount(9);
        if (playField->rowCount() < 9)
            playField->setRowCount(9);
        playField->setObjectName("playField");
        playField->setEnabled(true);
        playField->setGeometry(QRect(270, 110, 681, 681));
        QFont font5;
        font5.setFamilies({QString::fromUtf8("Franklin Gothic Medium")});
        font5.setPointSize(20);
        font5.setBold(false);
        playField->setFont(font5);
        playField->setAutoFillBackground(false);
        playField->setStyleSheet(QString::fromUtf8("background: transparent;\n"
"border-style: none;\n"
"border-top: 4px solid #000000;\n"
"border-left: 4px solid #000000;\n"
"border-right: 4px solid #000000;\n"
"border-bottom: 4px solid #000000;\n"
"gridline-color:  #000000;\n"
"font-size: 20pt;"));
        playField->setFrameShape(QFrame::StyledPanel);
        playField->setFrameShadow(QFrame::Sunken);
        playField->setLineWidth(0);
        playField->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        playField->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        playField->setAutoScroll(false);
        playField->setTextElideMode(Qt::ElideMiddle);
        playField->setShowGrid(true);
        playField->setWordWrap(false);
        playField->setCornerButtonEnabled(false);
        playField->setRowCount(9);
        playField->setColumnCount(9);
        playField->horizontalHeader()->setVisible(false);
        playField->horizontalHeader()->setMinimumSectionSize(75);
        playField->horizontalHeader()->setDefaultSectionSize(75);
        playField->horizontalHeader()->setHighlightSections(false);
        playField->verticalHeader()->setVisible(false);
        playField->verticalHeader()->setMinimumSectionSize(75);
        playField->verticalHeader()->setDefaultSectionSize(75);
        playField->verticalHeader()->setHighlightSections(false);
        frame_5 = new QFrame(Game);
        frame_5->setObjectName("frame_5");
        frame_5->setGeometry(QRect(1100, 100, 781, 741));
        frame_5->setStyleSheet(QString::fromUtf8("background-image: url(../MyResources/leaf.png)"));
        frame_5->setFrameShape(QFrame::StyledPanel);
        frame_5->setFrameShadow(QFrame::Raised);
        FrameBarH2 = new QFrame(Game);
        FrameBarH2->setObjectName("FrameBarH2");
        FrameBarH2->setGeometry(QRect(270, 562, 681, 4));
        FrameBarH2->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);"));
        FrameBarH2->setFrameShape(QFrame::StyledPanel);
        FrameBarH2->setFrameShadow(QFrame::Raised);
        frameBarH1 = new QFrame(Game);
        frameBarH1->setObjectName("frameBarH1");
        frameBarH1->setGeometry(QRect(270, 336, 681, 4));
        frameBarH1->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);"));
        frameBarH1->setFrameShape(QFrame::StyledPanel);
        frameBarH1->setFrameShadow(QFrame::Raised);
        FrameBarV1 = new QFrame(Game);
        FrameBarV1->setObjectName("FrameBarV1");
        FrameBarV1->setGeometry(QRect(722, 110, 4, 681));
        FrameBarV1->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);"));
        FrameBarV1->setFrameShape(QFrame::StyledPanel);
        FrameBarV1->setFrameShadow(QFrame::Raised);
        FrameBarV2 = new QFrame(Game);
        FrameBarV2->setObjectName("FrameBarV2");
        FrameBarV2->setGeometry(QRect(494, 110, 4, 681));
        FrameBarV2->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);"));
        FrameBarV2->setFrameShape(QFrame::StyledPanel);
        FrameBarV2->setFrameShadow(QFrame::Raised);
        VictoryButton = new QPushButton(Game);
        VictoryButton->setObjectName("VictoryButton");
        VictoryButton->setEnabled(true);
        VictoryButton->setGeometry(QRect(1320, 810, 501, 161));
        QFont font6;
        font6.setFamilies({QString::fromUtf8("Franklin Gothic Demi Cond")});
        font6.setPointSize(32);
        VictoryButton->setFont(font6);
        VictoryButton->setToolTipDuration(0);
        VictoryButton->setStyleSheet(QString::fromUtf8("border-radius: 20px;\n"
"border-width: 2px;\n"
"border-color: rgb(0, 0, 0);\n"
"border-style: solid;\n"
"background: transparent"));
        fileSaveName = new QLineEdit(Game);
        fileSaveName->setObjectName("fileSaveName");
        fileSaveName->setGeometry(QRect(730, 420, 511, 71));
        fileSaveName->setStyleSheet(QString::fromUtf8("font: 20pt \"Franklin Gothic Demi Cond\";\n"
"text-align: center;\n"
"background-color: black;\n"
"border-radius: 20px;\n"
"border-width: 2px;\n"
"border-color: rgb(0, 0, 0);\n"
"border-style: solid;\n"
"color:white;"));
        fileSaveName->setAlignment(Qt::AlignCenter);
        stackedWidget->addWidget(Game);
        FrameBarH2->raise();
        frameBarH1->raise();
        FrameBarV1->raise();
        FrameBarV2->raise();
        frame_5->raise();
        SaveGame->raise();
        SolveGame->raise();
        Quit->raise();
        playField->raise();
        VictoryButton->raise();
        fileSaveName->raise();

        horizontalLayout->addWidget(stackedWidget);

        ZenSudoku->setCentralWidget(centralwidget);
        menubar = new QMenuBar(ZenSudoku);
        menubar->setObjectName("menubar");
        menubar->setEnabled(false);
        menubar->setGeometry(QRect(0, 0, 1920, 21));
        ZenSudoku->setMenuBar(menubar);

        retranslateUi(ZenSudoku);

        QMetaObject::connectSlotsByName(ZenSudoku);
    } // setupUi

    void retranslateUi(QMainWindow *ZenSudoku)
    {
        ZenSudoku->setWindowTitle(QCoreApplication::translate("ZenSudoku", "ZenSudoku", nullptr));
#if QT_CONFIG(statustip)
        ZenSudoku->setStatusTip(QString());
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(tooltip)
        newGame_1->setToolTip(QCoreApplication::translate("ZenSudoku", "<html><head/><body><p><br/></p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        newGame_1->setText(QCoreApplication::translate("ZenSudoku", "New Game", nullptr));
#if QT_CONFIG(tooltip)
        loadGame->setToolTip(QCoreApplication::translate("ZenSudoku", "<html><head/><body><p><br/></p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        loadGame->setText(QCoreApplication::translate("ZenSudoku", "Load Game", nullptr));
#if QT_CONFIG(tooltip)
        Quit_2->setToolTip(QCoreApplication::translate("ZenSudoku", "<html><head/><body><p><br/></p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        Quit_2->setText(QCoreApplication::translate("ZenSudoku", "Quit", nullptr));
        GameTitle->setText(QCoreApplication::translate("ZenSudoku", "Project Zen", nullptr));
#if QT_CONFIG(tooltip)
        MainMenuLoad->setToolTip(QCoreApplication::translate("ZenSudoku", "<html><head/><body><p><br/></p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        MainMenuLoad->setText(QCoreApplication::translate("ZenSudoku", "Main Menu", nullptr));
#if QT_CONFIG(tooltip)
        NewGame2->setToolTip(QCoreApplication::translate("ZenSudoku", "<html><head/><body><p><br/></p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        NewGame2->setText(QCoreApplication::translate("ZenSudoku", "New Game", nullptr));
#if QT_CONFIG(tooltip)
        loadGame2->setToolTip(QCoreApplication::translate("ZenSudoku", "<html><head/><body><p><br/></p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        loadGame2->setText(QCoreApplication::translate("ZenSudoku", "Load Game", nullptr));
#if QT_CONFIG(tooltip)
        MainMenuEnd->setToolTip(QCoreApplication::translate("ZenSudoku", "<html><head/><body><p><br/></p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        MainMenuEnd->setText(QCoreApplication::translate("ZenSudoku", "Main Menu", nullptr));
        GameTitle_2->setText(QCoreApplication::translate("ZenSudoku", "Enlightenment!", nullptr));
#if QT_CONFIG(tooltip)
        SaveGame->setToolTip(QCoreApplication::translate("ZenSudoku", "<html><head/><body><p><br/></p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        SaveGame->setText(QCoreApplication::translate("ZenSudoku", "Save", nullptr));
#if QT_CONFIG(tooltip)
        SolveGame->setToolTip(QCoreApplication::translate("ZenSudoku", "<html><head/><body><p><br/></p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        SolveGame->setText(QCoreApplication::translate("ZenSudoku", "Solve", nullptr));
#if QT_CONFIG(tooltip)
        Quit->setToolTip(QCoreApplication::translate("ZenSudoku", "<html><head/><body><p><br/></p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        Quit->setText(QCoreApplication::translate("ZenSudoku", "Quit", nullptr));
        VictoryButton->setText(QCoreApplication::translate("ZenSudoku", "Victory!", nullptr));
        fileSaveName->setText(QCoreApplication::translate("ZenSudoku", "Enter File Name", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ZenSudoku: public Ui_ZenSudoku {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
