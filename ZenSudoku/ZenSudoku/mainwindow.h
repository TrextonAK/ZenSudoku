#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QTableWidget>

QT_BEGIN_NAMESPACE
namespace Ui { class ZenSudoku; }
QT_END_NAMESPACE

/* This is the Main UI controlling class. It holds implementation for sending/receiving signals and slots from both the
 * GUI Designer and Sudoku Class.  It controls navigation and the data from user inputs
 */

class MainWindow : public QMainWindow
{
    Q_OBJECT
signals:
    void sendNewData(int a, int b, int itemData);
    void sendFileName(QString userInput);
    void loadedBoard(int board[9][9]);
public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
public slots:
     void on_newGame_1_clicked();

    void receiveNewBoard(int board[9][9]);
    void receiveSolution(int board[9][9]);
    void receiveDataCheck(bool answer, int a, int b, int itemData);
    void detectWin();
    void on_saveGameTree_doubleClicked(const QModelIndex &index);


private slots:

    void VictoryButton_clicked();
    void on_loadGame_clicked();
    void SaveGame_clicked();
    void on_MainMenuLoad_clicked();
    void on_Quit_clicked();
    void on_Quit_2_clicked();
    void on_NewGame2_clicked();
    void on_loadGame2_clicked();
    void on_MainMenuEnd_clicked();
    void on_playField_itemChanged(QTableWidgetItem *item);
    void on_fileSaveName_returnPressed();
    void on_saveGameTree_windowIconTextChanged(const QString &iconText);
    void on_saveGameTree_activated(const QModelIndex &index);

private:
    Ui::ZenSudoku *ui;
};
#endif // MAINWINDOW_H
