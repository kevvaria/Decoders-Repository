/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QTabWidget *tabWidget;
    QWidget *tab;
    QLabel *label_102;
    QWidget *tab_2;
    QTabWidget *tabWidget_2;
    QWidget *tab_5;
    QTableView *defRestTable;
    QCheckBox *checkBox;
    QLabel *label_2;
    QLabel *label_4;
    QSpinBox *spinBox_2;
    QLabel *label_5;
    QLineEdit *lineEdit_2;
    QLabel *label_6;
    QTableView *defTripTable;
    QLabel *label_9;
    QLabel *label_12;
    QProgressBar *progressBar_2;
    QLabel *label_14;
    QLineEdit *lineEdit_5;
    QComboBox *comboBox;
    QLineEdit *lineEdit_7;
    QLabel *label_15;
    QLabel *label_16;
    QLabel *label_19;
    QLineEdit *lineEdit_9;
    QTableView *defPurchase;
    QTableView *defPurchase_2;
    QLabel *label_98;
    QPushButton *pushButton_2;
    QPushButton *pushButton_6;
    QWidget *tab_4;
    QPushButton *pushButton_5;
    QLabel *label_103;
    QTabWidget *tabWidget_3;
    QWidget *tab_6;
    QComboBox *adminItemSelection;
    QLabel *label_99;
    QLabel *label_100;
    QPushButton *adminCP;
    QComboBox *adminRC;
    QLabel *label_20;
    QPushButton *adminDelItem;
    QFrame *line;
    QLabel *label_21;
    QLineEdit *addItemName;
    QPushButton *addToMenu;
    QLabel *label_22;
    QTableWidget *adminMenuItem;
    QLabel *label_23;
    QDoubleSpinBox *adminItemSpin;
    QDoubleSpinBox *adminModSpin;
    QLabel *overfl0w;
    QWidget *tab_7;
    QLabel *label_24;
    QLineEdit *newRestname;
    QLabel *label_25;
    QLabel *label_26;
    QTableWidget *AdminRestView;
    QPushButton *AddRestaurant;
    QDoubleSpinBox *dis2Saddle;
    QPushButton *pushButton_4;
    QDoubleSpinBox *DistEdit;
    QLabel *restIndicator;
    QPushButton *DistAdd;
    QLabel *addIndicator;
    QPushButton *loginButton;
    QLabel *label_101;
    QMenuBar *menuBar;
    QMenu *menuDecoders;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(886, 500);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        tabWidget = new QTabWidget(centralWidget);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setGeometry(QRect(30, 50, 821, 401));
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        label_102 = new QLabel(tab);
        label_102->setObjectName(QStringLiteral("label_102"));
        label_102->setGeometry(QRect(250, 20, 381, 31));
        label_102->setStyleSheet(QStringLiteral("font: 75 20pt \"Comic Sans MS\";"));
        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        tabWidget_2 = new QTabWidget(tab_2);
        tabWidget_2->setObjectName(QStringLiteral("tabWidget_2"));
        tabWidget_2->setGeometry(QRect(0, 0, 781, 391));
        tab_5 = new QWidget();
        tab_5->setObjectName(QStringLiteral("tab_5"));
        defRestTable = new QTableView(tab_5);
        defRestTable->setObjectName(QStringLiteral("defRestTable"));
        defRestTable->setGeometry(QRect(10, 30, 171, 291));
        checkBox = new QCheckBox(tab_5);
        checkBox->setObjectName(QStringLiteral("checkBox"));
        checkBox->setGeometry(QRect(390, 30, 91, 16));
        label_2 = new QLabel(tab_5);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(420, 50, 61, 20));
        label_2->setAutoFillBackground(false);
        label_4 = new QLabel(tab_5);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(730, 130, 47, 31));
        spinBox_2 = new QSpinBox(tab_5);
        spinBox_2->setObjectName(QStringLiteral("spinBox_2"));
        spinBox_2->setGeometry(QRect(730, 160, 42, 22));
        label_5 = new QLabel(tab_5);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(680, 270, 81, 16));
        lineEdit_2 = new QLineEdit(tab_5);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(520, 320, 121, 20));
        label_6 = new QLabel(tab_5);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(390, 320, 121, 16));
        defTripTable = new QTableView(tab_5);
        defTripTable->setObjectName(QStringLiteral("defTripTable"));
        defTripTable->setGeometry(QRect(200, 30, 171, 291));
        label_9 = new QLabel(tab_5);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(60, 10, 81, 16));
        label_12 = new QLabel(tab_5);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setGeometry(QRect(260, 10, 81, 16));
        progressBar_2 = new QProgressBar(tab_5);
        progressBar_2->setObjectName(QStringLiteral("progressBar_2"));
        progressBar_2->setGeometry(QRect(480, 30, 291, 16));
        progressBar_2->setValue(24);
        label_14 = new QLabel(tab_5);
        label_14->setObjectName(QStringLiteral("label_14"));
        label_14->setGeometry(QRect(540, 10, 171, 16));
        lineEdit_5 = new QLineEdit(tab_5);
        lineEdit_5->setObjectName(QStringLiteral("lineEdit_5"));
        lineEdit_5->setGeometry(QRect(660, 330, 113, 20));
        comboBox = new QComboBox(tab_5);
        comboBox->setObjectName(QStringLiteral("comboBox"));
        comboBox->setGeometry(QRect(660, 160, 69, 22));
        lineEdit_7 = new QLineEdit(tab_5);
        lineEdit_7->setObjectName(QStringLiteral("lineEdit_7"));
        lineEdit_7->setGeometry(QRect(660, 290, 113, 20));
        label_15 = new QLabel(tab_5);
        label_15->setObjectName(QStringLiteral("label_15"));
        label_15->setGeometry(QRect(690, 310, 71, 16));
        label_16 = new QLabel(tab_5);
        label_16->setObjectName(QStringLiteral("label_16"));
        label_16->setGeometry(QRect(680, 140, 47, 13));
        label_19 = new QLabel(tab_5);
        label_19->setObjectName(QStringLiteral("label_19"));
        label_19->setGeometry(QRect(680, 190, 91, 20));
        lineEdit_9 = new QLineEdit(tab_5);
        lineEdit_9->setObjectName(QStringLiteral("lineEdit_9"));
        lineEdit_9->setGeometry(QRect(660, 210, 113, 20));
        defPurchase = new QTableView(tab_5);
        defPurchase->setObjectName(QStringLiteral("defPurchase"));
        defPurchase->setGeometry(QRect(520, 70, 121, 251));
        defPurchase_2 = new QTableView(tab_5);
        defPurchase_2->setObjectName(QStringLiteral("defPurchase_2"));
        defPurchase_2->setGeometry(QRect(390, 70, 121, 251));
        label_98 = new QLabel(tab_5);
        label_98->setObjectName(QStringLiteral("label_98"));
        label_98->setGeometry(QRect(550, 50, 81, 16));
        pushButton_2 = new QPushButton(tab_5);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(660, 240, 111, 23));
        pushButton_6 = new QPushButton(tab_5);
        pushButton_6->setObjectName(QStringLiteral("pushButton_6"));
        pushButton_6->setGeometry(QRect(130, 330, 111, 23));
        tabWidget_2->addTab(tab_5, QString());
        tabWidget->addTab(tab_2, QString());
        tab_4 = new QWidget();
        tab_4->setObjectName(QStringLiteral("tab_4"));
        pushButton_5 = new QPushButton(tab_4);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));
        pushButton_5->setGeometry(QRect(400, 50, 75, 23));
        label_103 = new QLabel(tab_4);
        label_103->setObjectName(QStringLiteral("label_103"));
        label_103->setGeometry(QRect(80, 30, 47, 13));
        tabWidget_3 = new QTabWidget(tab_4);
        tabWidget_3->setObjectName(QStringLiteral("tabWidget_3"));
        tabWidget_3->setGeometry(QRect(20, 10, 741, 361));
        tab_6 = new QWidget();
        tab_6->setObjectName(QStringLiteral("tab_6"));
        adminItemSelection = new QComboBox(tab_6);
        adminItemSelection->setObjectName(QStringLiteral("adminItemSelection"));
        adminItemSelection->setGeometry(QRect(280, 80, 111, 22));
        label_99 = new QLabel(tab_6);
        label_99->setObjectName(QStringLiteral("label_99"));
        label_99->setGeometry(QRect(310, 60, 47, 13));
        label_100 = new QLabel(tab_6);
        label_100->setObjectName(QStringLiteral("label_100"));
        label_100->setGeometry(QRect(400, 60, 91, 16));
        adminCP = new QPushButton(tab_6);
        adminCP->setObjectName(QStringLiteral("adminCP"));
        adminCP->setGeometry(QRect(390, 120, 75, 23));
        adminRC = new QComboBox(tab_6);
        adminRC->setObjectName(QStringLiteral("adminRC"));
        adminRC->setGeometry(QRect(260, 10, 211, 22));
        label_20 = new QLabel(tab_6);
        label_20->setObjectName(QStringLiteral("label_20"));
        label_20->setGeometry(QRect(170, 10, 71, 16));
        adminDelItem = new QPushButton(tab_6);
        adminDelItem->setObjectName(QStringLiteral("adminDelItem"));
        adminDelItem->setGeometry(QRect(290, 120, 75, 23));
        line = new QFrame(tab_6);
        line->setObjectName(QStringLiteral("line"));
        line->setGeometry(QRect(490, 0, 20, 331));
        line->setFrameShape(QFrame::VLine);
        line->setFrameShadow(QFrame::Sunken);
        label_21 = new QLabel(tab_6);
        label_21->setObjectName(QStringLiteral("label_21"));
        label_21->setGeometry(QRect(560, 10, 101, 41));
        label_21->setStyleSheet(QStringLiteral("font: 15pt \"Comic Sans MS\";"));
        addItemName = new QLineEdit(tab_6);
        addItemName->setObjectName(QStringLiteral("addItemName"));
        addItemName->setGeometry(QRect(550, 80, 113, 20));
        addToMenu = new QPushButton(tab_6);
        addToMenu->setObjectName(QStringLiteral("addToMenu"));
        addToMenu->setGeometry(QRect(560, 150, 75, 23));
        label_22 = new QLabel(tab_6);
        label_22->setObjectName(QStringLiteral("label_22"));
        label_22->setGeometry(QRect(580, 60, 51, 16));
        adminMenuItem = new QTableWidget(tab_6);
        adminMenuItem->setObjectName(QStringLiteral("adminMenuItem"));
        adminMenuItem->setGeometry(QRect(10, 40, 261, 261));
        adminMenuItem->setEditTriggers(QAbstractItemView::NoEditTriggers);
        adminMenuItem->setAlternatingRowColors(true);
        adminMenuItem->setSortingEnabled(true);
        label_23 = new QLabel(tab_6);
        label_23->setObjectName(QStringLiteral("label_23"));
        label_23->setGeometry(QRect(580, 100, 47, 13));
        adminItemSpin = new QDoubleSpinBox(tab_6);
        adminItemSpin->setObjectName(QStringLiteral("adminItemSpin"));
        adminItemSpin->setGeometry(QRect(570, 120, 62, 22));
        adminModSpin = new QDoubleSpinBox(tab_6);
        adminModSpin->setObjectName(QStringLiteral("adminModSpin"));
        adminModSpin->setGeometry(QRect(400, 80, 62, 22));
        overfl0w = new QLabel(tab_6);
        overfl0w->setObjectName(QStringLiteral("overfl0w"));
        overfl0w->setGeometry(QRect(540, 110, 121, 91));
        overfl0w->setWordWrap(true);
        tabWidget_3->addTab(tab_6, QString());
        tab_7 = new QWidget();
        tab_7->setObjectName(QStringLiteral("tab_7"));
        label_24 = new QLabel(tab_7);
        label_24->setObjectName(QStringLiteral("label_24"));
        label_24->setGeometry(QRect(230, 10, 141, 21));
        label_24->setStyleSheet(QStringLiteral("font: 16pt \"Comic Sans MS\";"));
        newRestname = new QLineEdit(tab_7);
        newRestname->setObjectName(QStringLiteral("newRestname"));
        newRestname->setGeometry(QRect(600, 70, 113, 20));
        label_25 = new QLabel(tab_7);
        label_25->setObjectName(QStringLiteral("label_25"));
        label_25->setGeometry(QRect(640, 50, 47, 13));
        label_26 = new QLabel(tab_7);
        label_26->setObjectName(QStringLiteral("label_26"));
        label_26->setGeometry(QRect(600, 100, 121, 21));
        AdminRestView = new QTableWidget(tab_7);
        AdminRestView->setObjectName(QStringLiteral("AdminRestView"));
        AdminRestView->setGeometry(QRect(30, 40, 551, 281));
        AdminRestView->setEditTriggers(QAbstractItemView::NoEditTriggers);
        AdminRestView->setAlternatingRowColors(true);
        AdminRestView->setSortingEnabled(true);
        AddRestaurant = new QPushButton(tab_7);
        AddRestaurant->setObjectName(QStringLiteral("AddRestaurant"));
        AddRestaurant->setGeometry(QRect(600, 300, 101, 23));
        dis2Saddle = new QDoubleSpinBox(tab_7);
        dis2Saddle->setObjectName(QStringLiteral("dis2Saddle"));
        dis2Saddle->setGeometry(QRect(620, 120, 62, 22));
        pushButton_4 = new QPushButton(tab_7);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setGeometry(QRect(570, 10, 161, 21));
        DistEdit = new QDoubleSpinBox(tab_7);
        DistEdit->setObjectName(QStringLiteral("DistEdit"));
        DistEdit->setGeometry(QRect(620, 210, 62, 22));
        restIndicator = new QLabel(tab_7);
        restIndicator->setObjectName(QStringLiteral("restIndicator"));
        restIndicator->setGeometry(QRect(610, 180, 121, 16));
        DistAdd = new QPushButton(tab_7);
        DistAdd->setObjectName(QStringLiteral("DistAdd"));
        DistAdd->setGeometry(QRect(610, 240, 75, 23));
        addIndicator = new QLabel(tab_7);
        addIndicator->setObjectName(QStringLiteral("addIndicator"));
        addIndicator->setGeometry(QRect(580, 270, 141, 21));
        tabWidget_3->addTab(tab_7, QString());
        tabWidget->addTab(tab_4, QString());
        loginButton = new QPushButton(centralWidget);
        loginButton->setObjectName(QStringLiteral("loginButton"));
        loginButton->setGeometry(QRect(764, 0, 121, 23));
        loginButton->setStyleSheet(QStringLiteral("font: 8pt \"Comic Sans MS\";"));
        label_101 = new QLabel(centralWidget);
        label_101->setObjectName(QStringLiteral("label_101"));
        label_101->setGeometry(QRect(260, 10, 381, 31));
        label_101->setStyleSheet(QStringLiteral("font: 75 20pt \"Comic Sans MS\";"));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 886, 21));
        menuDecoders = new QMenu(menuBar);
        menuDecoders->setObjectName(QStringLiteral("menuDecoders"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menuDecoders->menuAction());

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(0);
        tabWidget_2->setCurrentIndex(0);
        tabWidget_3->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        label_102->setText(QApplication::translate("MainWindow", "Select Your trip", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("MainWindow", "Home", 0));
        checkBox->setText(QApplication::translate("MainWindow", "Shortest Trip", 0));
        label_2->setText(QApplication::translate("MainWindow", "Menu Items", 0));
        label_4->setText(QApplication::translate("MainWindow", "Quantity", 0));
        label_5->setText(QApplication::translate("MainWindow", "Current Receipt", 0));
        label_6->setText(QApplication::translate("MainWindow", "Total Distance Travelled", 0));
        label_9->setText(QApplication::translate("MainWindow", "Restaurants", 0));
        label_12->setText(QApplication::translate("MainWindow", "Trip List", 0));
        label_14->setText(QApplication::translate("MainWindow", "Diabetes Progression Bar", 0));
        label_15->setText(QApplication::translate("MainWindow", "Grand Total", 0));
        label_16->setText(QApplication::translate("MainWindow", "Item", 0));
        label_19->setText(QApplication::translate("MainWindow", "Purchase Total", 0));
        label_98->setText(QApplication::translate("MainWindow", "Purchase List", 0));
        pushButton_2->setText(QApplication::translate("MainWindow", "Purchase Item", 0));
        pushButton_6->setText(QApplication::translate("MainWindow", "View All Restaurants", 0));
        tabWidget_2->setTabText(tabWidget_2->indexOf(tab_5), QApplication::translate("MainWindow", "Default", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("MainWindow", "Trips", 0));
        pushButton_5->setText(QApplication::translate("MainWindow", "Delete Item", 0));
        label_103->setText(QApplication::translate("MainWindow", "Menu Items", 0));
        label_99->setText(QApplication::translate("MainWindow", "Item", 0));
        label_100->setText(QApplication::translate("MainWindow", "Modified Price", 0));
        adminCP->setText(QApplication::translate("MainWindow", "Change Price", 0));
        label_20->setText(QApplication::translate("MainWindow", "Restaurant", 0));
        adminDelItem->setText(QApplication::translate("MainWindow", "Delete Item", 0));
        label_21->setText(QApplication::translate("MainWindow", "Add Item", 0));
        addToMenu->setText(QApplication::translate("MainWindow", "Add to Menu", 0));
        label_22->setText(QApplication::translate("MainWindow", "Item Name", 0));
        label_23->setText(QApplication::translate("MainWindow", "Item Price", 0));
        overfl0w->setText(QApplication::translate("MainWindow", "Max Items have been reached. ", 0));
        tabWidget_3->setTabText(tabWidget_3->indexOf(tab_6), QApplication::translate("MainWindow", "Menu Edits", 0));
        label_24->setText(QApplication::translate("MainWindow", "Restaurants", 0));
        label_25->setText(QApplication::translate("MainWindow", "Name", 0));
        label_26->setText(QApplication::translate("MainWindow", "Distance to Saddleback", 0));
        AddRestaurant->setText(QApplication::translate("MainWindow", "Add Restaurant", 0));
        pushButton_4->setText(QApplication::translate("MainWindow", "Add Recommend Restaurants", 0));
        restIndicator->setText(QApplication::translate("MainWindow", "Distance to:", 0));
        DistAdd->setText(QApplication::translate("MainWindow", "Add it!", 0));
        addIndicator->setText(QApplication::translate("MainWindow", "<html><head/><body><p align=\"center\">All set! Click below to finish</p></body></html>", 0));
        tabWidget_3->setTabText(tabWidget_3->indexOf(tab_7), QApplication::translate("MainWindow", "Restaurant Edits", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab_4), QApplication::translate("MainWindow", "Admin", 0));
        loginButton->setText(QApplication::translate("MainWindow", "Administrative Login", 0));
        label_101->setText(QApplication::translate("MainWindow", "Decoder's Fast Food GPS", 0));
        menuDecoders->setTitle(QApplication::translate("MainWindow", "Decoders", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
