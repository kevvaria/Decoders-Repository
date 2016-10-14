#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "dbmanager.h"
#include "Restaurant.h"
#include "login.h"
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

    void displayMenu();

    void on_quantityPurchase_valueChanged(int arg1);

    void initializeRest();

    void dMenu();

    void on_menuCB_currentIndexChanged(const QString &arg1);

    void on_pushButton_2_clicked();

    void clearReceipt();

    double updateReceipt(int row, int column);

  //  void on_defMenu_cellClicked(int row, int column);

    void initializeReceipt();

    void on_nextRest_clicked();

    void checkDiabetes(int i);

    void on_warningBox_accepted();

    void on_warningBox_rejected();

    void on_StartDefaultTrip_clicked();

    void on_ReturnHome_clicked();

    void clearReview();

    QVector<Restaurant> sortR(QVector<Restaurant> hi);

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
    QVector<Restaurant> rest;

    int indexTrip;
    int col;
    int row;
    Login logWindow;
    void finishTrip();
    double spentInTrip;
    bool isLoggedIn;

};

#endif // MAINWINDOW_H
