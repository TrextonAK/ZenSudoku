#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include "sudoku.h"
#include <QTableWidget>
#include <QTableWidgetItem>
#include <QString>
#include <random>
#include <QtCore>
#include <bits/stdc++.h>
#include <stdlib.h>
#include <cmath>
#include <QObject>
#include <QFileSystemModel>
#include <QModelIndex>
#include <QMediaPlayer>
#include "qmediaplayer.h"
#include <QUrl>
#include <QAudioOutput>

/* This file contains the definitions, control, and implementation of all the UI elements
 * as well as sending/receiving data/validation from the main Sudoku class game/board.
 * It also holds implementation for all signals/calls for slots in regards to sending data.
 */
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::ZenSudoku)
{
/*Constructor and UI main setup window.
 * Contains: signals/slots for main UI and Sudoku class, Game loading file model connectors,
 * save game file models
 * Media player sounds/music
 */
    ui->setupUi(this);
    Sudoku *sudokuClass = new Sudoku();

    //connects: starts new game
    connect(ui->newGame_1, &QPushButton::clicked, sudokuClass, &Sudoku::createNewGame);
    //connects:gets new board and places items into table
    connect (sudokuClass, &Sudoku::sendNewBoard, this, &MainWindow::receiveNewBoard);
    //connects: solves the game on button press
    connect(ui->SolveGame, &QPushButton::clicked, sudokuClass, &Sudoku::solveSlot);
    //connects: gets solution and places into table if solved
    connect(sudokuClass, &Sudoku::sendSolution,this,&MainWindow::receiveSolution);
    //connects: creates a new game on 2nd button
    connect(ui->NewGame2, &QPushButton::clicked, sudokuClass, &Sudoku::createNewGame);
    //connects: gets new board and places into table via user entry
    connect(sudokuClass, &Sudoku::sendNewBoard, this, &MainWindow::receiveNewBoard);
    //connects: new data from user
    connect(this, &MainWindow::sendNewData, sudokuClass, &Sudoku::getNewData);
    //connects: checks data and turns color red/black
    connect(sudokuClass, &Sudoku::sendDataCheck, this, &MainWindow::receiveDataCheck);
    //connects: sends win condtion to main window
    connect(sudokuClass, &Sudoku::sendWin, this, &MainWindow::detectWin);
    //connects: changes screen for victory
    connect(ui->VictoryButton, &QPushButton::clicked, this, &MainWindow::VictoryButton_clicked);
    //connects: initiates save game
    connect(ui->SaveGame, &QPushButton::clicked, this, &MainWindow::SaveGame_clicked);
    //connects: saves the game to file in Sudoku Class
    connect(this, &MainWindow::sendFileName, sudokuClass, &Sudoku::saveGame);
    //connects: sends the loaded board to the Sudoku Class
    connect(this, &MainWindow::loadedBoard, sudokuClass, &Sudoku::getLoadedBoard);

//Save game file model
    QFileSystemModel *model = new QFileSystemModel;
    model->setRootPath(QDir::currentPath());

    ui->saveGameTree->setModel(model);
    ui->saveGameTree->setRootIndex(model->index("SaveGame"));
//media player and audio selection
    QMediaPlayer *mediaPlayer = new QMediaPlayer(this);
    QAudioOutput *audioOutput = new QAudioOutput(this);


    mediaPlayer->setAudioOutput(audioOutput);
    mediaPlayer->setSource(QUrl::fromLocalFile("../MyResources/zenmusic.mp3"));
    mediaPlayer->play();
}

MainWindow::~MainWindow()
{
    delete ui;
}

/**
 * @brief MainWindow::on_newGame_1_clicked
 * Change to game board and start signal for new game
 */
void MainWindow::on_newGame_1_clicked()
{

    ui->stackedWidget->setCurrentIndex(3);
}
/**
 * @brief MainWindow::on_loadGame_clicked
 * change to load game screen
 */
void MainWindow::on_loadGame_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);
}

/**
 * @brief MainWindow::on_MainMenuLoad_clicked
 * Change to main menu screen
 */
void MainWindow::on_MainMenuLoad_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);

}
/**
 * @brief MainWindow::SaveGame_clicked
 * toggle pop for save game icon and send signal to Sudoku.Savegame
 */
void MainWindow::SaveGame_clicked()
{
    ui->fileSaveName->show();
}
/**
 * @brief MainWindow::on_fileSaveName_returnPressed
 * emits signal to savegame file
 */
void MainWindow::on_fileSaveName_returnPressed()
{
    QString userInput = ui->fileSaveName->displayText();
    emit sendFileName(userInput);
    ui->fileSaveName->hide();

}
/**
 * @brief MainWindow::on_Quit_clicked
 * Closes game
 */
void MainWindow::on_Quit_clicked()
{
    QCoreApplication::quit();
}
/**
 * @brief MainWindow::on_Quit_2_clicked
 * Closes game
 */
void MainWindow::on_Quit_2_clicked()
{
    QCoreApplication::quit();
}

/**
 * @brief MainWindow::on_NewGame2_clicked
 * Initiates new game process
 */
void MainWindow::on_NewGame2_clicked()
{
    ui->stackedWidget->setCurrentIndex(3);
}

/**
 * @brief MainWindow::on_loadGame2_clicked
 */
void MainWindow::on_loadGame2_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);
}

/**
 * @brief MainWindow::on_MainMenuEnd_clicked
 * Change to main Menu
 */
void MainWindow::on_MainMenuEnd_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
}

/**
 * @brief MainWindow::receiveNewBoard
 * @param board
 * Receive board input from sudoku class. Convert int array
 * to Widget items and insert into sudoku table.
 */
void MainWindow::receiveNewBoard(int board[9][9]){
    for (int i =0; i < 9; i++){
        for (int j = 0; j < 9; j++){
            int val = board[i][j];

            QTableWidgetItem *newItem = new QTableWidgetItem(QString::number(val));
            newItem->setTextAlignment(Qt::AlignCenter);
            if (val ==0){
                ui->playField->setItem(i,j, nullptr);
            }
            else{
            ui->playField->setItem(i,j,newItem);
            }
        }
    }
    ui->VictoryButton->hide();
    ui->fileSaveName->hide();
}

/**
 * @brief MainWindow::receiveSolution
 * @param board
 * Solution calculation and check received from Sudoku Class
 * insert WidgetItems into puzzle for completion;
 */
void MainWindow::receiveSolution(int board[9][9])
{
    for (int i =0; i < 9; i++){
        for (int j = 0; j < 9; j++){
            int val = board[i][j];
            QTableWidgetItem *newItem = new QTableWidgetItem(QString::number(val));
            newItem->setTextAlignment(Qt::AlignCenter);
            ui->playField->setItem(i,j,newItem);
    }
}
}
/**
 * @brief MainWindow::VictoryButton_clicked
 * change to victory screen
 */
void MainWindow::VictoryButton_clicked()
{
ui->stackedWidget->setCurrentIndex(2);
}

/**
 * @brief MainWindow::on_playField_itemChanged
 * @param item
 */
void MainWindow::on_playField_itemChanged(QTableWidgetItem *item)
{
item->setTextAlignment(Qt::AlignCenter);
int a = item->row();
int b = item->column();
int itemData = item->data(Qt::DisplayRole).toInt();
if(itemData > 0 && itemData <= 9){
emit sendNewData(a, b, itemData);
}
else{
ui->playField->takeItem(a,b);
}
}
/**
 * Receiver slot for Signal sendDataCheck. Modify to change appearance/Structure of changed
 * cell widgets.
 * @brief MainWindow::receiveDataCheck
 * @param answer - bool check on validity of entered data
 * @param a - row
 * @param b - column
 * @param itemData - data of cell changed
 */
void MainWindow::receiveDataCheck(bool answer, int a, int b, int itemData){
//user input black if true
if (answer == true)
ui->playField->item(a,b)->setForeground(Qt::black);
//user input red if false
if (answer == false)
    ui->playField->item(a,b)->setForeground(Qt::red);
}
/**
 * @brief MainWindow::detectWin
 * receives signal to detect if win succeeds
 */
void MainWindow::detectWin()
{
ui->VictoryButton->show();
}

/**
 * @brief MainWindow::on_saveGameTree_doubleClicked
 * @param index
 * Loads selected file on double click. Copys file data to
 * Sudoku Board and sends it into the table widget
 */
void MainWindow::on_saveGameTree_doubleClicked(const QModelIndex &index)
{
QFileSystemModel *load = new QFileSystemModel;
//use selected index to get file path
QFile file(load->filePath(index));

//create array to load numbers from file
const int rows = 9;
const int cols = 9;
int digitArray[rows][cols];
int row = 0;
int col = 0;

//open selected file read only
if(file.open(QFile::ReadOnly))
{
    //iterate through file via char and place into int array
    QTextStream in(&file);
    while(!in.atEnd()) {
            QString numbers = in.readAll();
            for (QChar C : numbers){
            QString digit = C;
            int intDigit = digit.toInt();
            digitArray[row][col] = intDigit;
            col++;
            if (col == cols){
                col = 0;
                row++;
            }
            if (row == rows){
                break;
            }
            }

    }
//send to Sudoku Class for board copy
    emit loadedBoard(digitArray);
//Set widget to game screen
    ui->stackedWidget->setCurrentIndex(3);


}
}


