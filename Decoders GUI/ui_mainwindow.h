/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.6.0
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
#include <QtWidgets/QDialogButtonBox>
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
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QTabWidget *mainTab;
    QWidget *HomeTab;
    QLabel *label_102;
    QPushButton *StartDefaultTrip;
    QWidget *TripsTab;
    QTabWidget *TripsTab1;
    QWidget *TripTab;
    QCheckBox *checkBox;
    QLabel *menuItems;
    QLabel *label_4;
    QSpinBox *quantityPurchase;
    QLabel *label_5;
    QLabel *label_6;
    QProgressBar *diabetes;
    QLabel *dProgress;
    QComboBox *menuCB;
    QLabel *label_15;
    QLabel *label_16;
    QLabel *label_19;
    QTableWidget *defPurchase;
    QTableWidget *defMenu;
    QLabel *label_98;
    QPushButton *pushButton_2;
    QLabel *PT;
    QLabel *CR;
    QLabel *GT;
    QPushButton *nextRest;
    QLabel *label;
    QLabel *dCurrentRest;
    QLabel *label_3;
    QLabel *dlvl;
    QDialogButtonBox *warningBox;
    QLabel *dWarning;
    QWidget *TripReview;
    QLabel *label_2;
    QPushButton *ReturnHome;
    QTableWidget *TripReviewTable;
    QLabel *label_7;
    QLabel *TotSpent;
    QWidget *AdminTab;
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
        mainTab = new QTabWidget(centralWidget);
        mainTab->setObjectName(QStringLiteral("mainTab"));
        mainTab->setGeometry(QRect(30, 50, 821, 401));
        HomeTab = new QWidget();
        HomeTab->setObjectName(QStringLiteral("HomeTab"));
        label_102 = new QLabel(HomeTab);
        label_102->setObjectName(QStringLiteral("label_102"));
        label_102->setGeometry(QRect(10, 10, 501, 111));
        label_102->setStyleSheet(QStringLiteral("font: 75 20pt \"Comic Sans MS\";"));
        StartDefaultTrip = new QPushButton(HomeTab);
        StartDefaultTrip->setObjectName(QStringLiteral("StartDefaultTrip"));
        StartDefaultTrip->setGeometry(QRect(30, 240, 111, 23));
        mainTab->addTab(HomeTab, QString());
        TripsTab = new QWidget();
        TripsTab->setObjectName(QStringLiteral("TripsTab"));
        TripsTab1 = new QTabWidget(TripsTab);
        TripsTab1->setObjectName(QStringLiteral("TripsTab1"));
        TripsTab1->setGeometry(QRect(0, 0, 781, 391));
        TripTab = new QWidget();
        TripTab->setObjectName(QStringLiteral("TripTab"));
        checkBox = new QCheckBox(TripTab);
        checkBox->setObjectName(QStringLiteral("checkBox"));
        checkBox->setGeometry(QRect(390, 30, 91, 16));
        menuItems = new QLabel(TripTab);
        menuItems->setObjectName(QStringLiteral("menuItems"));
        menuItems->setGeometry(QRect(130, 50, 61, 20));
        menuItems->setAutoFillBackground(false);
        label_4 = new QLabel(TripTab);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(720, 60, 47, 31));
        quantityPurchase = new QSpinBox(TripTab);
        quantityPurchase->setObjectName(QStringLiteral("quantityPurchase"));
        quantityPurchase->setGeometry(QRect(720, 90, 42, 22));
        label_5 = new QLabel(TripTab);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(670, 200, 81, 16));
        label_6 = new QLabel(TripTab);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(360, 320, 121, 16));
        diabetes = new QProgressBar(TripTab);
        diabetes->setObjectName(QStringLiteral("diabetes"));
        diabetes->setGeometry(QRect(480, 30, 291, 16));
        diabetes->setValue(24);
        dProgress = new QLabel(TripTab);
        dProgress->setObjectName(QStringLiteral("dProgress"));
        dProgress->setGeometry(QRect(510, 10, 171, 16));
        menuCB = new QComboBox(TripTab);
        menuCB->setObjectName(QStringLiteral("menuCB"));
        menuCB->setGeometry(QRect(628, 90, 91, 22));
        label_15 = new QLabel(TripTab);
        label_15->setObjectName(QStringLiteral("label_15"));
        label_15->setGeometry(QRect(680, 280, 71, 16));
        label_16 = new QLabel(TripTab);
        label_16->setObjectName(QStringLiteral("label_16"));
        label_16->setGeometry(QRect(670, 70, 47, 13));
        label_19 = new QLabel(TripTab);
        label_19->setObjectName(QStringLiteral("label_19"));
        label_19->setGeometry(QRect(670, 120, 91, 20));
        defPurchase = new QTableWidget(TripTab);
        defPurchase->setObjectName(QStringLiteral("defPurchase"));
        defPurchase->setGeometry(QRect(320, 70, 301, 251));
        defPurchase->setEditTriggers(QAbstractItemView::NoEditTriggers);
        defPurchase->setAlternatingRowColors(true);
        defPurchase->setSortingEnabled(false);
        defMenu = new QTableWidget(TripTab);
        defMenu->setObjectName(QStringLiteral("defMenu"));
        defMenu->setGeometry(QRect(40, 70, 251, 251));
        defMenu->setEditTriggers(QAbstractItemView::NoEditTriggers);
        defMenu->setAlternatingRowColors(true);
        defMenu->setSortingEnabled(true);
        label_98 = new QLabel(TripTab);
        label_98->setObjectName(QStringLiteral("label_98"));
        label_98->setGeometry(QRect(430, 50, 81, 16));
        pushButton_2 = new QPushButton(TripTab);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(650, 170, 111, 23));
        PT = new QLabel(TripTab);
        PT->setObjectName(QStringLiteral("PT"));
        PT->setGeometry(QRect(700, 150, 47, 13));
        CR = new QLabel(TripTab);
        CR->setObjectName(QStringLiteral("CR"));
        CR->setGeometry(QRect(700, 220, 47, 13));
        GT = new QLabel(TripTab);
        GT->setObjectName(QStringLiteral("GT"));
        GT->setGeometry(QRect(700, 300, 47, 13));
        nextRest = new QPushButton(TripTab);
        nextRest->setObjectName(QStringLiteral("nextRest"));
        nextRest->setGeometry(QRect(660, 250, 101, 23));
        label = new QLabel(TripTab);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(0, 10, 251, 31));
        label->setStyleSheet(QStringLiteral("font: 75 italic 36pt \"Comic Sans MS\";"));
        label->setWordWrap(true);
        dCurrentRest = new QLabel(TripTab);
        dCurrentRest->setObjectName(QStringLiteral("dCurrentRest"));
        dCurrentRest->setGeometry(QRect(250, 0, 211, 51));
        dCurrentRest->setStyleSheet(QStringLiteral("font: 75 italic 14pt \"Comic Sans MS\";"));
        dCurrentRest->setWordWrap(true);
        label_3 = new QLabel(TripTab);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(500, 320, 121, 20));
        dlvl = new QLabel(TripTab);
        dlvl->setObjectName(QStringLiteral("dlvl"));
        dlvl->setGeometry(QRect(650, 10, 171, 16));
        warningBox = new QDialogButtonBox(TripTab);
        warningBox->setObjectName(QStringLiteral("warningBox"));
        warningBox->setGeometry(QRect(270, 60, 231, 151));
        warningBox->setAutoFillBackground(true);
        warningBox->setInputMethodHints(Qt::ImhNone);
        warningBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        warningBox->setCenterButtons(true);
        dWarning = new QLabel(TripTab);
        dWarning->setObjectName(QStringLiteral("dWarning"));
        dWarning->setGeometry(QRect(320, 70, 141, 51));
        dWarning->setStyleSheet(QStringLiteral("font: 75 10pt \"Comic Sans MS\";"));
        dWarning->setWordWrap(true);
        TripsTab1->addTab(TripTab, QString());
        TripReview = new QWidget();
        TripReview->setObjectName(QStringLiteral("TripReview"));
        label_2 = new QLabel(TripReview);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(430, 10, 181, 81));
        ReturnHome = new QPushButton(TripReview);
        ReturnHome->setObjectName(QStringLiteral("ReturnHome"));
        ReturnHome->setGeometry(QRect(500, 280, 111, 23));
        TripReviewTable = new QTableWidget(TripReview);
        TripReviewTable->setObjectName(QStringLiteral("TripReviewTable"));
        TripReviewTable->setGeometry(QRect(10, 20, 271, 321));
        label_7 = new QLabel(TripReview);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(320, 150, 111, 19));
        TotSpent = new QLabel(TripReview);
        TotSpent->setObjectName(QStringLiteral("TotSpent"));
        TotSpent->setGeometry(QRect(420, 150, 68, 19));
        TripsTab1->addTab(TripReview, QString());
        mainTab->addTab(TripsTab, QString());
        AdminTab = new QWidget();
        AdminTab->setObjectName(QStringLiteral("AdminTab"));
        pushButton_5 = new QPushButton(AdminTab);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));
        pushButton_5->setGeometry(QRect(400, 50, 75, 23));
        label_103 = new QLabel(AdminTab);
        label_103->setObjectName(QStringLiteral("label_103"));
        label_103->setGeometry(QRect(80, 30, 47, 13));
        tabWidget_3 = new QTabWidget(AdminTab);
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
        mainTab->addTab(AdminTab, QString());
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

        mainTab->setCurrentIndex(1);
        TripsTab1->setCurrentIndex(0);
        tabWidget_3->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        label_102->setText(QApplication::translate("MainWindow", "<html><head/><body><p>Select Your trip/WIP Page</p></body></html>", 0));
        StartDefaultTrip->setText(QApplication::translate("MainWindow", "Default Trip", 0));
        mainTab->setTabText(mainTab->indexOf(HomeTab), QApplication::translate("MainWindow", "Home", 0));
        checkBox->setText(QApplication::translate("MainWindow", "Shortest Trip", 0));
        menuItems->setText(QApplication::translate("MainWindow", "Menu Items", 0));
        label_4->setText(QApplication::translate("MainWindow", "Quantity", 0));
        label_5->setText(QApplication::translate("MainWindow", "Current Receipt", 0));
        label_6->setText(QApplication::translate("MainWindow", "Total Distance Travelled", 0));
        dProgress->setText(QApplication::translate("MainWindow", "Diabetes Progression Bar Lvl.", 0));
        label_15->setText(QApplication::translate("MainWindow", "Grand Total", 0));
        label_16->setText(QApplication::translate("MainWindow", "Item", 0));
        label_19->setText(QApplication::translate("MainWindow", "Purchase Total", 0));
        label_98->setText(QApplication::translate("MainWindow", "Purchase List", 0));
        pushButton_2->setText(QApplication::translate("MainWindow", "Purchase Item", 0));
        PT->setText(QApplication::translate("MainWindow", "0", 0));
        CR->setText(QApplication::translate("MainWindow", "0", 0));
        GT->setText(QApplication::translate("MainWindow", "0", 0));
        nextRest->setText(QApplication::translate("MainWindow", "Next Restaurant", 0));
        label->setText(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:14pt;\">YOU ARE CURRENTLY AT:</span></p></body></html>", 0));
        dCurrentRest->setText(QString());
        label_3->setText(QString());
        dlvl->setText(QString());
        dWarning->setText(QApplication::translate("MainWindow", "Hi", 0));
        TripsTab1->setTabText(TripsTab1->indexOf(TripTab), QApplication::translate("MainWindow", "Trip", 0));
        label_2->setText(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:12pt;\">Your Trip is complete!</span></p><p><span style=\" font-size:12pt;\">This Page is WIP</span></p></body></html>", 0));
        ReturnHome->setText(QApplication::translate("MainWindow", "Return to Home", 0));
        label_7->setText(QApplication::translate("MainWindow", "Total Spent:", 0));
        TotSpent->setText(QApplication::translate("MainWindow", "0", 0));
        TripsTab1->setTabText(TripsTab1->indexOf(TripReview), QApplication::translate("MainWindow", "Trip Complete", 0));
        mainTab->setTabText(mainTab->indexOf(TripsTab), QApplication::translate("MainWindow", "Trips", 0));
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
        mainTab->setTabText(mainTab->indexOf(AdminTab), QApplication::translate("MainWindow", "Admin", 0));
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
