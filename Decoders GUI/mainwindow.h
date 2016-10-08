#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "dbmanager.h"
#include<QMessageBox>
#include <QStringList>
namespace Ui {
class MainWindow;
}
/*!
 * \brief The MainWindow class
 *
 * MainWindow Class
 */
class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    /*!
     * \brief MainWindow
     * \param parent
     */
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:

    void on_pushButton_6_clicked();

    void on_pushButton_8_clicked();

    void on_pushButton_11_clicked();

    void on_adminRC_currentTextChanged(const QString &arg1);

    void ClearItemTable();
    void ClearRestTable();


    void on_adminCP_clicked();

    void on_adminDelItem_clicked();


    void on_addToMenu_clicked();


    void on_AddRestaurant_clicked();



    void on_pushButton_4_clicked();

    void on_DistAdd_clicked();

    //void on_pushButton_3_clicked();

    void on_loginButton_clicked();

private:
    int numRests; //the number of restaurants
    int index;    //index for distances
    QVector<double> distIn; //get distances for a new restaurant



    QVector<double> distancestoStr(QString dist);

    void updateItemTable(); //updates item table
    void updateRestTable(); //update the restaurant table

    bool add2Rests(); //adds the two additional given restaurants to the db
    Ui::MainWindow *ui;
    dbManager db; //database wrapper class
};

#endif // MAINWINDOW_H
