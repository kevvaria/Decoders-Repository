#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "dbmanager.h"
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


    void on_pushButton_2_clicked();

private:
    Ui::MainWindow *ui;
    dbManager db;
};

#endif // MAINWINDOW_H
