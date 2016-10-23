#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "dbmanager.h"
#include "Restaurant.h"
#include "login.h"
#include "distance.h"
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

    void on_ReturnHome_clicked();

    void clearReview();



    void on_actionAdmin_Login_triggered();  //Login through the toolbar at the top instead of button.


    void on_defMenu_clicked();          //More fluid item ordering! Can use the actual menu to select which item you want to order or the combo box.

    void on_StartDefaultTrip_clicked(); //Button on Home page to display summary of trip

    void on_testTrip_clicked();     //Button on Home page to display summary of trip

    void on_startTrip_clicked();    //Opens trip tab and beginds the trip

    void comboBoxDisplayMenuPrototype();    //Combo Box restaurant switch

    void on_actionExit_triggered();

    void on_c1SB_valueChanged(int arg1);

    void on_restTable_cellDoubleClicked(int row, int column);

    Restaurant getRest(QString re);

    int getRestIndex(Restaurant re);

    void on_ctPush_clicked();

    void initcRest();

private:
    int numRests; //the number of restaurants
    int index;    //index for distances
    QVector<double> distIn; //get distances for a new restaurant



    QVector<Distance> distancestoStr(QString dist);

    void updateItemTable(); //updates item table
    void updateRestTable(); //update the restaurant table

    bool add2Rests(); //adds the two additional given restaurants to the db
    Ui::MainWindow *ui;
    dbManager db; //database wrapper class
    QVector<Restaurant> rest; //master list of restaurants
    QVector<Restaurant> nSort; //the list we iterate thru
    QVector<Restaurant> temp; //temporary holder list



    int indexTrip;
    int col;
    int row;
    Login logWindow;
    void finishTrip();
    double spentInTrip;
    bool isLoggedIn;
    int numAdd;
    int tripNum;
    QVector<int> sortR(QVector<Restaurant> restVec);

};

#endif // MAINWINDOW_H
