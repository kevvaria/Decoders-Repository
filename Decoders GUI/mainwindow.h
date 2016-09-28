#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "dbmanager.h"
#include<QMessageBox>
namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:

    void on_pushButton_6_clicked();

    void on_pushButton_8_clicked();

    void on_pushButton_11_clicked();

    void on_comboBox_3_currentTextChanged(const QString &arg1);

    void on_adminRC_currentTextChanged(const QString &arg1);

    void ClearItemTable();
    void ClearRestTable();

    void updateRestTable();

    void on_adminCP_clicked();

    void on_adminDelItem_clicked();


    void on_addToMenu_clicked();

private:

    void updateItemTable();
    Ui::MainWindow *ui;
    dbManager db;
};

#endif // MAINWINDOW_H
