/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.6.2
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
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
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
    QAction *actionAdmin_Login;
    QAction *actionExit;
    QWidget *centralWidget;
    QGridLayout *gridLayout;
    QLabel *label_101;
    QPushButton *loginButton;
    QTabWidget *mainTab;
    QWidget *HomeTab;
    QLabel *label_102;
    QPushButton *StartDefaultTrip;
    QPushButton *testTrip;
    QPushButton *startTrip;
    QPushButton *ctPush;
    QListWidget *restList;
    QLabel *loR;
    QLabel *label_9;
    QSpinBox *c1SB;
    QLabel *start;
    QLabel *c1Label;
    QTableWidget *restTable;
    QLabel *addR;
    QWidget *TripsTab;
    QGridLayout *gridLayout_4;
    QTabWidget *TripsTab1;
    QWidget *TripTab;
    QGridLayout *gridLayout_3;
    QProgressBar *diabetes;
    QTableWidget *defMenu;
    QComboBox *menuCB;
    QSpinBox *quantityPurchase;
    QLabel *PT;
    QLabel *label;
    QLabel *label_4;
    QLabel *label_19;
    QPushButton *pushButton_2;
    QLabel *label_5;
    QLabel *CR;
    QLabel *dProgress;
    QLabel *label_98;
    QTableWidget *defPurchase;
    QLabel *label_16;
    QCheckBox *checkBox;
    QLabel *dlvl;
    QLabel *GT;
    QPushButton *nextRest;
    QLabel *label_6;
    QLabel *label_15;
    QLabel *label_3;
    QLabel *dCurrentRest;
    QWidget *TripReview;
    QGridLayout *gridLayout_5;
    QTableWidget *TripReviewTable;
    QLabel *label_2;
    QLabel *label_7;
    QLabel *TotSpent;
    QPushButton *ReturnHome;
    QWidget *AdminTab;
    QPushButton *pushButton_5;
    QLabel *label_103;
    QGridLayout *gridLayout_6;
    QTabWidget *tabWidget_3;
    QWidget *tab_6;
    QDoubleSpinBox *adminItemSpin;
    QGridLayout *gridLayout_7;
    QLabel *label_20;
    QFrame *line;
    QLabel *label_21;
    QTableWidget *adminMenuItem;
    QLabel *label_100;
    QLineEdit *addItemName;
    QLabel *label_99;
    QPushButton *adminCP;
    QLabel *label_22;
    QLabel *label_23;
    QDoubleSpinBox *adminModSpin;
    QLabel *overfl0w;
    QPushButton *addToMenu;
    QComboBox *adminItemSelection;
    QPushButton *adminDelItem;
    QComboBox *adminRC;
    QWidget *tab_7;
    QGridLayout *gridLayout_2;
    QLabel *label_24;
    QPushButton *pushButton_4;
    QLabel *label_25;
    QLineEdit *newRestname;
    QLabel *label_26;
    QDoubleSpinBox *dis2Saddle;
    QLabel *restIndicator;
    QDoubleSpinBox *DistEdit;
    QPushButton *DistAdd;
    QLabel *addIndicator;
    QPushButton *AddRestaurant;
    QTableWidget *AdminRestView;
    QMenuBar *menuBar;
    QMenu *menuFile;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(1001, 743);
        MainWindow->setStyleSheet(QLatin1String("QToolTip\n"
"{\n"
"     border: 1px solid black;\n"
"     background-color: #ffa02f;\n"
"     padding: 1px;\n"
"     border-radius: 3px;\n"
"     opacity: 100;\n"
"}\n"
"\n"
"QWidget\n"
"{\n"
"    color: #b1b1b1;\n"
"    background-color: #323232;\n"
"}\n"
"\n"
"QWidget:item:hover\n"
"{\n"
"    background-color: QLinearGradient( x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #ffa02f, stop: 1 #ca0619);\n"
"    color: #000000;\n"
"}\n"
"\n"
"QWidget:item:selected\n"
"{\n"
"    background-color: QLinearGradient( x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #ffa02f, stop: 1 #d7801a);\n"
"}\n"
"\n"
"QMenuBar::item\n"
"{\n"
"    background: transparent;\n"
"}\n"
"\n"
"QMenuBar::item:selected\n"
"{\n"
"    background: transparent;\n"
"    border: 1px solid #ffaa00;\n"
"}\n"
"\n"
"QMenuBar::item:pressed\n"
"{\n"
"    background: #444;\n"
"    border: 1px solid #000;\n"
"    background-color: QLinearGradient(\n"
"        x1:0, y1:0,\n"
"        x2:0, y2:1,\n"
"        stop:1 #212121,\n"
"        stop:0.4 #343434/*,\n"
"        stop:0.2 #3"
                        "43434,\n"
"        stop:0.1 #ffaa00*/\n"
"    );\n"
"    margin-bottom:-1px;\n"
"    padding-bottom:1px;\n"
"}\n"
"\n"
"QMenu\n"
"{\n"
"    border: 1px solid #000;\n"
"}\n"
"\n"
"QMenu::item\n"
"{\n"
"    padding: 2px 20px 2px 20px;\n"
"}\n"
"\n"
"QMenu::item:selected\n"
"{\n"
"    color: #000000;\n"
"}\n"
"\n"
"QWidget:disabled\n"
"{\n"
"    color: #404040;\n"
"    background-color: #323232;\n"
"}\n"
"\n"
"QAbstractItemView\n"
"{\n"
"    background-color: QLinearGradient( x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #4d4d4d, stop: 0.1 #646464, stop: 1 #5d5d5d);\n"
"}\n"
"\n"
"QWidget:focus\n"
"{\n"
"    border: 2px solid QLinearGradient( x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #ffa02f, stop: 1 #d7801a);\n"
"}\n"
"\n"
"QLineEdit\n"
"{\n"
"    background-color: QLinearGradient( x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #4d4d4d, stop: 0 #646464, stop: 1 #5d5d5d);\n"
"    padding: 1px;\n"
"    border-style: solid;\n"
"    border: 1px solid #1e1e1e;\n"
"    border-radius: 5;\n"
"}\n"
"\n"
"QPushButton\n"
"{\n"
"    color: #b1b1b1;\n"
""
                        "    background-color: QLinearGradient( x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #565656, stop: 0.1 #525252, stop: 0.5 #4e4e4e, stop: 0.9 #4a4a4a, stop: 1 #464646);\n"
"    border-width: 1px;\n"
"    border-color: #1e1e1e;\n"
"    border-style: solid;\n"
"    border-radius: 6;\n"
"    padding: 3px;\n"
"    font-size: 12px;\n"
"    padding-left: 5px;\n"
"    padding-right: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed\n"
"{\n"
"    background-color: QLinearGradient( x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #2d2d2d, stop: 0.1 #2b2b2b, stop: 0.5 #292929, stop: 0.9 #282828, stop: 1 #252525);\n"
"}\n"
"\n"
"QComboBox\n"
"{\n"
"    selection-background-color: #ffaa00;\n"
"    background-color: QLinearGradient( x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #565656, stop: 0.1 #525252, stop: 0.5 #4e4e4e, stop: 0.9 #4a4a4a, stop: 1 #464646);\n"
"    border-style: solid;\n"
"    border: 1px solid #1e1e1e;\n"
"    border-radius: 5;\n"
"}\n"
"\n"
"QComboBox:hover,QPushButton:hover\n"
"{\n"
"    border: 2px solid QLinearGradient( x1: 0, y1: 0, x2: 0,"
                        " y2: 1, stop: 0 #ffa02f, stop: 1 #d7801a);\n"
"}\n"
"\n"
"\n"
"QComboBox:on\n"
"{\n"
"    padding-top: 3px;\n"
"    padding-left: 4px;\n"
"    background-color: QLinearGradient( x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #2d2d2d, stop: 0.1 #2b2b2b, stop: 0.5 #292929, stop: 0.9 #282828, stop: 1 #252525);\n"
"    selection-background-color: #ffaa00;\n"
"}\n"
"\n"
"QComboBox QAbstractItemView\n"
"{\n"
"    border: 2px solid darkgray;\n"
"    selection-background-color: QLinearGradient( x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #ffa02f, stop: 1 #d7801a);\n"
"}\n"
"\n"
"  \n"
"QGroupBox:focus\n"
"{\n"
"border: 2px solid QLinearGradient( x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #ffa02f, stop: 1 #d7801a);\n"
"}\n"
"\n"
"QTextEdit:focus\n"
"{\n"
"    border: 2px solid QLinearGradient( x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #ffa02f, stop: 1 #d7801a);\n"
"}\n"
"\n"
"QScrollBar:horizontal {\n"
"     border: 1px solid #222222;\n"
"     background: QLinearGradient( x1: 0, y1: 0, x2: 0, y2: 1, stop: 0.0 #121212, stop: 0.2 #282828, stop: 1 #4848"
                        "48);\n"
"     height: 7px;\n"
"     margin: 0px 16px 0 16px;\n"
"}\n"
"\n"
"QScrollBar::handle:horizontal\n"
"{\n"
"      background: QLinearGradient( x1: 0, y1: 0, x2: 1, y2: 0, stop: 0 #ffa02f, stop: 0.5 #d7801a, stop: 1 #ffa02f);\n"
"      min-height: 20px;\n"
"      border-radius: 2px;\n"
"}\n"
"\n"
"QScrollBar::add-line:horizontal {\n"
"      border: 1px solid #1b1b19;\n"
"      border-radius: 2px;\n"
"      background: QLinearGradient( x1: 0, y1: 0, x2: 1, y2: 0, stop: 0 #ffa02f, stop: 1 #d7801a);\n"
"      width: 14px;\n"
"      subcontrol-position: right;\n"
"      subcontrol-origin: margin;\n"
"}\n"
"\n"
"QScrollBar::sub-line:horizontal {\n"
"      border: 1px solid #1b1b19;\n"
"      border-radius: 2px;\n"
"      background: QLinearGradient( x1: 0, y1: 0, x2: 1, y2: 0, stop: 0 #ffa02f, stop: 1 #d7801a);\n"
"      width: 14px;\n"
"     subcontrol-position: left;\n"
"     subcontrol-origin: margin;\n"
"}\n"
"\n"
"QScrollBar::right-arrow:horizontal, QScrollBar::left-arrow:horizontal\n"
"{\n"
"      bord"
                        "er: 1px solid black;\n"
"      width: 1px;\n"
"      height: 1px;\n"
"      background: white;\n"
"}\n"
"\n"
"QScrollBar::add-page:horizontal, QScrollBar::sub-page:horizontal\n"
"{\n"
"      background: none;\n"
"}\n"
"\n"
"QScrollBar:vertical\n"
"{\n"
"      background: QLinearGradient( x1: 0, y1: 0, x2: 1, y2: 0, stop: 0.0 #121212, stop: 0.2 #282828, stop: 1 #484848);\n"
"      width: 7px;\n"
"      margin: 16px 0 16px 0;\n"
"      border: 1px solid #222222;\n"
"}\n"
"\n"
"QScrollBar::handle:vertical\n"
"{\n"
"      background: QLinearGradient( x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #ffa02f, stop: 0.5 #d7801a, stop: 1 #ffa02f);\n"
"      min-height: 20px;\n"
"      border-radius: 2px;\n"
"}\n"
"\n"
"QScrollBar::add-line:vertical\n"
"{\n"
"      border: 1px solid #1b1b19;\n"
"      border-radius: 2px;\n"
"      background: QLinearGradient( x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #ffa02f, stop: 1 #d7801a);\n"
"      height: 14px;\n"
"      subcontrol-position: bottom;\n"
"      subcontrol-origin: margin;\n"
"}\n"
"\n"
""
                        "QScrollBar::sub-line:vertical\n"
"{\n"
"      border: 1px solid #1b1b19;\n"
"      border-radius: 2px;\n"
"      background: QLinearGradient( x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #d7801a, stop: 1 #ffa02f);\n"
"      height: 14px;\n"
"      subcontrol-position: top;\n"
"      subcontrol-origin: margin;\n"
"}\n"
"\n"
"QScrollBar::up-arrow:vertical, QScrollBar::down-arrow:vertical\n"
"{\n"
"      border: 1px solid black;\n"
"      width: 1px;\n"
"      height: 1px;\n"
"      background: white;\n"
"}\n"
"\n"
"\n"
"QScrollBar::add-page:vertical, QScrollBar::sub-page:vertical\n"
"{\n"
"      background: none;\n"
"}\n"
"\n"
"QTextEdit\n"
"{\n"
"    background-color: #242424;\n"
"}\n"
"\n"
"QPlainTextEdit\n"
"{\n"
"    background-color: #242424;\n"
"}\n"
"\n"
"QHeaderView::section\n"
"{\n"
"    background-color: QLinearGradient(x1:0, y1:0, x2:0, y2:1, stop:0 #616161, stop: 0.5 #505050, stop: 0.6 #434343, stop:1 #656565);\n"
"    color: white;\n"
"    padding-left: 4px;\n"
"    border: 1px solid #6c6c6c;\n"
"}\n"
"\n"
""
                        "QCheckBox:disabled\n"
"{\n"
"color: #414141;\n"
"}\n"
"\n"
"QDockWidget::title\n"
"{\n"
"    text-align: center;\n"
"    spacing: 3px; /* spacing between items in the tool bar */\n"
"    background-color: QLinearGradient(x1:0, y1:0, x2:0, y2:1, stop:0 #323232, stop: 0.5 #242424, stop:1 #323232);\n"
"}\n"
"\n"
"QDockWidget::close-button, QDockWidget::float-button\n"
"{\n"
"    text-align: center;\n"
"    spacing: 1px; /* spacing between items in the tool bar */\n"
"    background-color: QLinearGradient(x1:0, y1:0, x2:0, y2:1, stop:0 #323232, stop: 0.5 #242424, stop:1 #323232);\n"
"}\n"
"\n"
"QDockWidget::close-button:hover, QDockWidget::float-button:hover\n"
"{\n"
"    background: #242424;\n"
"}\n"
"\n"
"QDockWidget::close-button:pressed, QDockWidget::float-button:pressed\n"
"{\n"
"    padding: 1px -1px -1px 1px;\n"
"}\n"
"\n"
"QMainWindow::separator\n"
"{\n"
"    background-color: QLinearGradient(x1:0, y1:0, x2:0, y2:1, stop:0 #161616, stop: 0.5 #151515, stop: 0.6 #212121, stop:1 #343434);\n"
"    color: white"
                        ";\n"
"    padding-left: 4px;\n"
"    border: 1px solid #4c4c4c;\n"
"    spacing: 3px; /* spacing between items in the tool bar */\n"
"}\n"
"\n"
"QMainWindow::separator:hover\n"
"{\n"
"\n"
"    background-color: QLinearGradient(x1:0, y1:0, x2:0, y2:1, stop:0 #d7801a, stop:0.5 #b56c17 stop:1 #ffa02f);\n"
"    color: white;\n"
"    padding-left: 4px;\n"
"    border: 1px solid #6c6c6c;\n"
"    spacing: 3px; /* spacing between items in the tool bar */\n"
"}\n"
"\n"
"QToolBar::handle\n"
"{\n"
"     spacing: 3px; /* spacing between items in the tool bar */\n"
"     background: url(:/images/handle.png);\n"
"}\n"
"\n"
"QMenu::separator\n"
"{\n"
"    height: 2px;\n"
"    background-color: QLinearGradient(x1:0, y1:0, x2:0, y2:1, stop:0 #161616, stop: 0.5 #151515, stop: 0.6 #212121, stop:1 #343434);\n"
"    color: white;\n"
"    padding-left: 4px;\n"
"    margin-left: 10px;\n"
"    margin-right: 5px;\n"
"}\n"
"\n"
"QProgressBar\n"
"{\n"
"    border: 2px solid grey;\n"
"    border-radius: 5px;\n"
"    text-align: center;\n"
""
                        "}\n"
"\n"
"QProgressBar::chunk\n"
"{\n"
"    background-color: #d7801a;\n"
"    width: 2.15px;\n"
"    margin: 0.5px;\n"
"}\n"
"\n"
"QTabBar::tab {\n"
"    color: #b1b1b1;\n"
"    border: 1px solid #444;\n"
"    border-bottom-style: none;\n"
"    background-color: #323232;\n"
"    padding-left: 10px;\n"
"    padding-right: 10px;\n"
"    padding-top: 3px;\n"
"    padding-bottom: 2px;\n"
"    margin-right: -1px;\n"
"}\n"
"\n"
"QTabWidget::pane {\n"
"    border: 1px solid #444;\n"
"    top: 1px;\n"
"}\n"
"\n"
"QTabBar::tab:last\n"
"{\n"
"    margin-right: 0; /* the last selected tab has nothing to overlap with on the right */\n"
"    border-top-right-radius: 3px;\n"
"}\n"
"\n"
"QTabBar::tab:first:!selected\n"
"{\n"
" margin-left: 0px; /* the last selected tab has nothing to overlap with on the right */\n"
"\n"
"\n"
"    border-top-left-radius: 3px;\n"
"}\n"
"\n"
"QTabBar::tab:!selected\n"
"{\n"
"    color: #b1b1b1;\n"
"    border-bottom-style: solid;\n"
"    margin-top: 3px;\n"
"    background-color: QLinearGradi"
                        "ent(x1:0, y1:0, x2:0, y2:1, stop:1 #212121, stop:.4 #343434);\n"
"}\n"
"\n"
"QTabBar::tab:selected\n"
"{\n"
"    border-top-left-radius: 3px;\n"
"    border-top-right-radius: 3px;\n"
"    margin-bottom: 0px;\n"
"}\n"
"\n"
"QTabBar::tab:!selected:hover\n"
"{\n"
"    /*border-top: 2px solid #ffaa00;\n"
"    padding-bottom: 3px;*/\n"
"    border-top-left-radius: 3px;\n"
"    border-top-right-radius: 3px;\n"
"    background-color: QLinearGradient(x1:0, y1:0, x2:0, y2:1, stop:1 #212121, stop:0.4 #343434, stop:0.2 #343434, stop:0.1 #ffaa00);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked, QRadioButton::indicator:unchecked{\n"
"    color: #b1b1b1;\n"
"    background-color: #323232;\n"
"    border: 1px solid #b1b1b1;\n"
"    border-radius: 6px;\n"
"}\n"
"\n"
"QRadioButton::indicator:checked\n"
"{\n"
"    background-color: qradialgradient(\n"
"        cx: 0.5, cy: 0.5,\n"
"        fx: 0.5, fy: 0.5,\n"
"        radius: 1.0,\n"
"        stop: 0.25 #ffaa00,\n"
"        stop: 0.3 #323232\n"
"    );\n"
"}\n"
"\n"
"QCheckBox"
                        "::indicator{\n"
"    color: #b1b1b1;\n"
"    background-color: #323232;\n"
"    border: 1px solid #b1b1b1;\n"
"    width: 9px;\n"
"    height: 9px;\n"
"}\n"
"\n"
"QRadioButton::indicator\n"
"{\n"
"    border-radius: 6px;\n"
"}\n"
"\n"
"QRadioButton::indicator:hover, QCheckBox::indicator:hover\n"
"{\n"
"    border: 1px solid #ffaa00;\n"
"}\n"
"\n"
"QCheckBox::indicator:checked\n"
"{\n"
"    image:url(:/images/checkbox.png);\n"
"}\n"
"\n"
"QCheckBox::indicator:disabled, QRadioButton::indicator:disabled\n"
"{\n"
"    border: 1px solid #444;\n"
"}"));
        actionAdmin_Login = new QAction(MainWindow);
        actionAdmin_Login->setObjectName(QStringLiteral("actionAdmin_Login"));
        actionExit = new QAction(MainWindow);
        actionExit->setObjectName(QStringLiteral("actionExit"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        gridLayout = new QGridLayout(centralWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label_101 = new QLabel(centralWidget);
        label_101->setObjectName(QStringLiteral("label_101"));
        label_101->setStyleSheet(QStringLiteral("font: 75 20pt \"Comic Sans MS\";"));

        gridLayout->addWidget(label_101, 0, 0, 1, 1);

        loginButton = new QPushButton(centralWidget);
        loginButton->setObjectName(QStringLiteral("loginButton"));
        loginButton->setMinimumSize(QSize(100, 0));
        loginButton->setStyleSheet(QStringLiteral("font: 8pt \"Comic Sans MS\";"));
        loginButton->setIconSize(QSize(10, 16));

        gridLayout->addWidget(loginButton, 0, 1, 1, 1);

        mainTab = new QTabWidget(centralWidget);
        mainTab->setObjectName(QStringLiteral("mainTab"));
        HomeTab = new QWidget();
        HomeTab->setObjectName(QStringLiteral("HomeTab"));
        label_102 = new QLabel(HomeTab);
        label_102->setObjectName(QStringLiteral("label_102"));
        label_102->setGeometry(QRect(9, 9, 221, 38));
        label_102->setStyleSheet(QStringLiteral("font: 75 20pt \"Comic Sans MS\";"));
        StartDefaultTrip = new QPushButton(HomeTab);
        StartDefaultTrip->setObjectName(QStringLiteral("StartDefaultTrip"));
        StartDefaultTrip->setGeometry(QRect(10, 60, 141, 23));
        testTrip = new QPushButton(HomeTab);
        testTrip->setObjectName(QStringLiteral("testTrip"));
        testTrip->setGeometry(QRect(10, 100, 141, 23));
        startTrip = new QPushButton(HomeTab);
        startTrip->setObjectName(QStringLiteral("startTrip"));
        startTrip->setGeometry(QRect(430, 280, 161, 23));
        ctPush = new QPushButton(HomeTab);
        ctPush->setObjectName(QStringLiteral("ctPush"));
        ctPush->setGeometry(QRect(10, 140, 141, 23));
        restList = new QListWidget(HomeTab);
        restList->setObjectName(QStringLiteral("restList"));
        restList->setGeometry(QRect(590, 70, 256, 192));
        loR = new QLabel(HomeTab);
        loR->setObjectName(QStringLiteral("loR"));
        loR->setGeometry(QRect(270, 40, 121, 16));
        label_9 = new QLabel(HomeTab);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(410, 40, 211, 16));
        c1SB = new QSpinBox(HomeTab);
        c1SB->setObjectName(QStringLiteral("c1SB"));
        c1SB->setGeometry(QRect(500, 70, 42, 22));
        start = new QLabel(HomeTab);
        start->setObjectName(QStringLiteral("start"));
        start->setGeometry(QRect(470, 130, 111, 16));
        c1Label = new QLabel(HomeTab);
        c1Label->setObjectName(QStringLiteral("c1Label"));
        c1Label->setGeometry(QRect(490, 160, 47, 13));
        restTable = new QTableWidget(HomeTab);
        restTable->setObjectName(QStringLiteral("restTable"));
        restTable->setGeometry(QRect(180, 70, 256, 192));
        addR = new QLabel(HomeTab);
        addR->setObjectName(QStringLiteral("addR"));
        addR->setGeometry(QRect(480, 110, 91, 16));
        mainTab->addTab(HomeTab, QString());
        TripsTab = new QWidget();
        TripsTab->setObjectName(QStringLiteral("TripsTab"));
        gridLayout_4 = new QGridLayout(TripsTab);
        gridLayout_4->setSpacing(6);
        gridLayout_4->setContentsMargins(11, 11, 11, 11);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        TripsTab1 = new QTabWidget(TripsTab);
        TripsTab1->setObjectName(QStringLiteral("TripsTab1"));
        TripTab = new QWidget();
        TripTab->setObjectName(QStringLiteral("TripTab"));
        gridLayout_3 = new QGridLayout(TripTab);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        diabetes = new QProgressBar(TripTab);
        diabetes->setObjectName(QStringLiteral("diabetes"));
        diabetes->setValue(24);

        gridLayout_3->addWidget(diabetes, 1, 5, 1, 5);

        defMenu = new QTableWidget(TripTab);
        defMenu->setObjectName(QStringLiteral("defMenu"));
        defMenu->setEditTriggers(QAbstractItemView::NoEditTriggers);
        defMenu->setAlternatingRowColors(true);
        defMenu->setSortingEnabled(true);

        gridLayout_3->addWidget(defMenu, 3, 0, 10, 3);

        menuCB = new QComboBox(TripTab);
        menuCB->setObjectName(QStringLiteral("menuCB"));
        menuCB->setStyleSheet(QStringLiteral(""));

        gridLayout_3->addWidget(menuCB, 4, 7, 1, 2);

        quantityPurchase = new QSpinBox(TripTab);
        quantityPurchase->setObjectName(QStringLiteral("quantityPurchase"));

        gridLayout_3->addWidget(quantityPurchase, 4, 9, 1, 1);

        PT = new QLabel(TripTab);
        PT->setObjectName(QStringLiteral("PT"));

        gridLayout_3->addWidget(PT, 6, 8, 1, 1);

        label = new QLabel(TripTab);
        label->setObjectName(QStringLiteral("label"));
        label->setStyleSheet(QStringLiteral("font: 75 italic 36pt \"Comic Sans MS\";"));
        label->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label->setWordWrap(true);

        gridLayout_3->addWidget(label, 0, 0, 2, 1);

        label_4 = new QLabel(TripTab);
        label_4->setObjectName(QStringLiteral("label_4"));

        gridLayout_3->addWidget(label_4, 2, 9, 1, 1);

        label_19 = new QLabel(TripTab);
        label_19->setObjectName(QStringLiteral("label_19"));
        label_19->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(label_19, 5, 7, 1, 1);

        pushButton_2 = new QPushButton(TripTab);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));

        gridLayout_3->addWidget(pushButton_2, 7, 7, 1, 3);

        label_5 = new QLabel(TripTab);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(label_5, 8, 7, 1, 1);

        CR = new QLabel(TripTab);
        CR->setObjectName(QStringLiteral("CR"));

        gridLayout_3->addWidget(CR, 9, 8, 1, 1);

        dProgress = new QLabel(TripTab);
        dProgress->setObjectName(QStringLiteral("dProgress"));

        gridLayout_3->addWidget(dProgress, 0, 6, 1, 2);

        label_98 = new QLabel(TripTab);
        label_98->setObjectName(QStringLiteral("label_98"));

        gridLayout_3->addWidget(label_98, 2, 4, 1, 2);

        defPurchase = new QTableWidget(TripTab);
        defPurchase->setObjectName(QStringLiteral("defPurchase"));
        defPurchase->setEditTriggers(QAbstractItemView::NoEditTriggers);
        defPurchase->setAlternatingRowColors(true);
        defPurchase->setSortingEnabled(false);

        gridLayout_3->addWidget(defPurchase, 3, 3, 10, 4);

        label_16 = new QLabel(TripTab);
        label_16->setObjectName(QStringLiteral("label_16"));

        gridLayout_3->addWidget(label_16, 3, 7, 1, 1);

        checkBox = new QCheckBox(TripTab);
        checkBox->setObjectName(QStringLiteral("checkBox"));

        gridLayout_3->addWidget(checkBox, 1, 3, 1, 2);

        dlvl = new QLabel(TripTab);
        dlvl->setObjectName(QStringLiteral("dlvl"));

        gridLayout_3->addWidget(dlvl, 0, 8, 1, 1);

        GT = new QLabel(TripTab);
        GT->setObjectName(QStringLiteral("GT"));

        gridLayout_3->addWidget(GT, 12, 8, 2, 1);

        nextRest = new QPushButton(TripTab);
        nextRest->setObjectName(QStringLiteral("nextRest"));

        gridLayout_3->addWidget(nextRest, 10, 7, 1, 3);

        label_6 = new QLabel(TripTab);
        label_6->setObjectName(QStringLiteral("label_6"));

        gridLayout_3->addWidget(label_6, 14, 1, 1, 3);

        label_15 = new QLabel(TripTab);
        label_15->setObjectName(QStringLiteral("label_15"));
        label_15->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(label_15, 11, 7, 1, 1);

        label_3 = new QLabel(TripTab);
        label_3->setObjectName(QStringLiteral("label_3"));

        gridLayout_3->addWidget(label_3, 14, 6, 1, 1);

        dCurrentRest = new QLabel(TripTab);
        dCurrentRest->setObjectName(QStringLiteral("dCurrentRest"));
        dCurrentRest->setStyleSheet(QStringLiteral("font: 75 italic 14pt \"Comic Sans MS\";"));
        dCurrentRest->setWordWrap(true);

        gridLayout_3->addWidget(dCurrentRest, 0, 1, 2, 2);

        TripsTab1->addTab(TripTab, QString());
        dProgress->raise();
        dlvl->raise();
        checkBox->raise();
        diabetes->raise();
        label_98->raise();
        label_4->raise();
        defMenu->raise();
        defPurchase->raise();
        menuCB->raise();
        quantityPurchase->raise();
        label_19->raise();
        PT->raise();
        CR->raise();
        GT->raise();
        label_6->raise();
        label_3->raise();
        pushButton_2->raise();
        label_5->raise();
        nextRest->raise();
        label_15->raise();
        label->raise();
        label_16->raise();
        dCurrentRest->raise();
        TripReview = new QWidget();
        TripReview->setObjectName(QStringLiteral("TripReview"));
        gridLayout_5 = new QGridLayout(TripReview);
        gridLayout_5->setSpacing(6);
        gridLayout_5->setContentsMargins(11, 11, 11, 11);
        gridLayout_5->setObjectName(QStringLiteral("gridLayout_5"));
        TripReviewTable = new QTableWidget(TripReview);
        TripReviewTable->setObjectName(QStringLiteral("TripReviewTable"));

        gridLayout_5->addWidget(TripReviewTable, 0, 0, 3, 1);

        label_2 = new QLabel(TripReview);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout_5->addWidget(label_2, 0, 2, 1, 2);

        label_7 = new QLabel(TripReview);
        label_7->setObjectName(QStringLiteral("label_7"));

        gridLayout_5->addWidget(label_7, 1, 1, 1, 1);

        TotSpent = new QLabel(TripReview);
        TotSpent->setObjectName(QStringLiteral("TotSpent"));

        gridLayout_5->addWidget(TotSpent, 1, 2, 1, 1);

        ReturnHome = new QPushButton(TripReview);
        ReturnHome->setObjectName(QStringLiteral("ReturnHome"));

        gridLayout_5->addWidget(ReturnHome, 2, 3, 1, 1);

        TripsTab1->addTab(TripReview, QString());

        gridLayout_4->addWidget(TripsTab1, 0, 0, 1, 1);

        mainTab->addTab(TripsTab, QString());
        AdminTab = new QWidget();
        AdminTab->setObjectName(QStringLiteral("AdminTab"));
        pushButton_5 = new QPushButton(AdminTab);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));
        pushButton_5->setGeometry(QRect(400, 50, 75, 23));
        label_103 = new QLabel(AdminTab);
        label_103->setObjectName(QStringLiteral("label_103"));
        label_103->setGeometry(QRect(80, 30, 47, 13));
        gridLayout_6 = new QGridLayout(AdminTab);
        gridLayout_6->setSpacing(6);
        gridLayout_6->setContentsMargins(11, 11, 11, 11);
        gridLayout_6->setObjectName(QStringLiteral("gridLayout_6"));
        tabWidget_3 = new QTabWidget(AdminTab);
        tabWidget_3->setObjectName(QStringLiteral("tabWidget_3"));
        tab_6 = new QWidget();
        tab_6->setObjectName(QStringLiteral("tab_6"));
        adminItemSpin = new QDoubleSpinBox(tab_6);
        adminItemSpin->setObjectName(QStringLiteral("adminItemSpin"));
        adminItemSpin->setGeometry(QRect(570, 120, 87, 22));
        gridLayout_7 = new QGridLayout(tab_6);
        gridLayout_7->setSpacing(6);
        gridLayout_7->setContentsMargins(11, 11, 11, 11);
        gridLayout_7->setObjectName(QStringLiteral("gridLayout_7"));
        label_20 = new QLabel(tab_6);
        label_20->setObjectName(QStringLiteral("label_20"));

        gridLayout_7->addWidget(label_20, 0, 0, 1, 1);

        line = new QFrame(tab_6);
        line->setObjectName(QStringLiteral("line"));
        line->setFrameShape(QFrame::VLine);
        line->setFrameShadow(QFrame::Sunken);

        gridLayout_7->addWidget(line, 0, 4, 7, 1);

        label_21 = new QLabel(tab_6);
        label_21->setObjectName(QStringLiteral("label_21"));
        label_21->setStyleSheet(QStringLiteral("font: 15pt \"Comic Sans MS\";"));

        gridLayout_7->addWidget(label_21, 0, 6, 2, 1);

        adminMenuItem = new QTableWidget(tab_6);
        adminMenuItem->setObjectName(QStringLiteral("adminMenuItem"));
        adminMenuItem->setEditTriggers(QAbstractItemView::NoEditTriggers);
        adminMenuItem->setAlternatingRowColors(true);
        adminMenuItem->setSortingEnabled(true);

        gridLayout_7->addWidget(adminMenuItem, 1, 0, 6, 2);

        label_100 = new QLabel(tab_6);
        label_100->setObjectName(QStringLiteral("label_100"));

        gridLayout_7->addWidget(label_100, 2, 3, 1, 1);

        addItemName = new QLineEdit(tab_6);
        addItemName->setObjectName(QStringLiteral("addItemName"));

        gridLayout_7->addWidget(addItemName, 3, 5, 1, 2);

        label_99 = new QLabel(tab_6);
        label_99->setObjectName(QStringLiteral("label_99"));

        gridLayout_7->addWidget(label_99, 2, 2, 1, 1);

        adminCP = new QPushButton(tab_6);
        adminCP->setObjectName(QStringLiteral("adminCP"));

        gridLayout_7->addWidget(adminCP, 5, 3, 1, 1);

        label_22 = new QLabel(tab_6);
        label_22->setObjectName(QStringLiteral("label_22"));

        gridLayout_7->addWidget(label_22, 2, 6, 1, 1);

        label_23 = new QLabel(tab_6);
        label_23->setObjectName(QStringLiteral("label_23"));

        gridLayout_7->addWidget(label_23, 4, 6, 1, 1);

        adminModSpin = new QDoubleSpinBox(tab_6);
        adminModSpin->setObjectName(QStringLiteral("adminModSpin"));

        gridLayout_7->addWidget(adminModSpin, 3, 3, 2, 1);

        overfl0w = new QLabel(tab_6);
        overfl0w->setObjectName(QStringLiteral("overfl0w"));
        overfl0w->setWordWrap(true);

        gridLayout_7->addWidget(overfl0w, 5, 5, 2, 2);

        addToMenu = new QPushButton(tab_6);
        addToMenu->setObjectName(QStringLiteral("addToMenu"));

        gridLayout_7->addWidget(addToMenu, 6, 6, 1, 1);

        adminItemSelection = new QComboBox(tab_6);
        adminItemSelection->setObjectName(QStringLiteral("adminItemSelection"));

        gridLayout_7->addWidget(adminItemSelection, 3, 2, 2, 1);

        adminDelItem = new QPushButton(tab_6);
        adminDelItem->setObjectName(QStringLiteral("adminDelItem"));

        gridLayout_7->addWidget(adminDelItem, 5, 2, 1, 1);

        adminRC = new QComboBox(tab_6);
        adminRC->setObjectName(QStringLiteral("adminRC"));

        gridLayout_7->addWidget(adminRC, 0, 1, 1, 1);

        tabWidget_3->addTab(tab_6, QString());
        tab_7 = new QWidget();
        tab_7->setObjectName(QStringLiteral("tab_7"));
        gridLayout_2 = new QGridLayout(tab_7);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        label_24 = new QLabel(tab_7);
        label_24->setObjectName(QStringLiteral("label_24"));
        label_24->setStyleSheet(QStringLiteral("font: 16pt \"Comic Sans MS\";"));

        gridLayout_2->addWidget(label_24, 0, 0, 1, 1);

        pushButton_4 = new QPushButton(tab_7);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));

        gridLayout_2->addWidget(pushButton_4, 0, 1, 1, 1);

        label_25 = new QLabel(tab_7);
        label_25->setObjectName(QStringLiteral("label_25"));

        gridLayout_2->addWidget(label_25, 1, 1, 1, 1);

        newRestname = new QLineEdit(tab_7);
        newRestname->setObjectName(QStringLiteral("newRestname"));

        gridLayout_2->addWidget(newRestname, 2, 1, 1, 1);

        label_26 = new QLabel(tab_7);
        label_26->setObjectName(QStringLiteral("label_26"));

        gridLayout_2->addWidget(label_26, 3, 1, 1, 1);

        dis2Saddle = new QDoubleSpinBox(tab_7);
        dis2Saddle->setObjectName(QStringLiteral("dis2Saddle"));

        gridLayout_2->addWidget(dis2Saddle, 4, 1, 1, 1);

        restIndicator = new QLabel(tab_7);
        restIndicator->setObjectName(QStringLiteral("restIndicator"));

        gridLayout_2->addWidget(restIndicator, 5, 1, 1, 1);

        DistEdit = new QDoubleSpinBox(tab_7);
        DistEdit->setObjectName(QStringLiteral("DistEdit"));

        gridLayout_2->addWidget(DistEdit, 6, 1, 1, 1);

        DistAdd = new QPushButton(tab_7);
        DistAdd->setObjectName(QStringLiteral("DistAdd"));

        gridLayout_2->addWidget(DistAdd, 7, 1, 1, 1);

        addIndicator = new QLabel(tab_7);
        addIndicator->setObjectName(QStringLiteral("addIndicator"));

        gridLayout_2->addWidget(addIndicator, 8, 1, 1, 1);

        AddRestaurant = new QPushButton(tab_7);
        AddRestaurant->setObjectName(QStringLiteral("AddRestaurant"));

        gridLayout_2->addWidget(AddRestaurant, 9, 1, 1, 1);

        AdminRestView = new QTableWidget(tab_7);
        AdminRestView->setObjectName(QStringLiteral("AdminRestView"));
        AdminRestView->setEditTriggers(QAbstractItemView::NoEditTriggers);
        AdminRestView->setAlternatingRowColors(true);
        AdminRestView->setSortingEnabled(true);

        gridLayout_2->addWidget(AdminRestView, 1, 0, 5, 1);

        tabWidget_3->addTab(tab_7, QString());

        gridLayout_6->addWidget(tabWidget_3, 0, 0, 1, 1);

        mainTab->addTab(AdminTab, QString());

        gridLayout->addWidget(mainTab, 1, 0, 1, 2);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1001, 21));
        menuFile = new QMenu(menuBar);
        menuFile->setObjectName(QStringLiteral("menuFile"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menuFile->menuAction());
        menuFile->addAction(actionAdmin_Login);
        menuFile->addSeparator();
        menuFile->addAction(actionExit);

        retranslateUi(MainWindow);

        mainTab->setCurrentIndex(0);
        TripsTab1->setCurrentIndex(0);
        tabWidget_3->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        actionAdmin_Login->setText(QApplication::translate("MainWindow", "Admin Login", 0));
        actionExit->setText(QApplication::translate("MainWindow", "Exit", 0));
        label_101->setText(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:16pt;\">Decoder's Fast Food GPS</span></p></body></html>", 0));
        loginButton->setText(QApplication::translate("MainWindow", "Log Out", 0));
        label_102->setText(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:14pt;\">Select Trip:</span></p></body></html>", 0));
        StartDefaultTrip->setText(QApplication::translate("MainWindow", "Default Trip", 0));
        testTrip->setText(QApplication::translate("MainWindow", "Custom Trip 1", 0));
        startTrip->setText(QApplication::translate("MainWindow", "Start Trip", 0));
        ctPush->setText(QApplication::translate("MainWindow", "Custom Trip 2", 0));
        loR->setText(QApplication::translate("MainWindow", "List of Restaurants", 0));
        label_9->setText(QApplication::translate("MainWindow", "Amount of restaurants user wants to go to", 0));
        start->setText(QApplication::translate("MainWindow", "Starting Restaurant:", 0));
        c1Label->setText(QString());
        addR->setText(QApplication::translate("MainWindow", "You Have added:", 0));
        mainTab->setTabText(mainTab->indexOf(HomeTab), QApplication::translate("MainWindow", "Home", 0));
        PT->setText(QApplication::translate("MainWindow", "0", 0));
        label->setText(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:10pt;\">	Currently At:</span></p></body></html>", 0));
        label_4->setText(QApplication::translate("MainWindow", "Quantity", 0));
        label_19->setText(QApplication::translate("MainWindow", "Purchase Total", 0));
        pushButton_2->setText(QApplication::translate("MainWindow", "Purchase Item", 0));
        label_5->setText(QApplication::translate("MainWindow", "Current Receipt", 0));
        CR->setText(QApplication::translate("MainWindow", "0", 0));
        dProgress->setText(QApplication::translate("MainWindow", "Diabetes Progression Bar Lvl.", 0));
        label_98->setText(QApplication::translate("MainWindow", "Purchase List", 0));
        label_16->setText(QApplication::translate("MainWindow", "Item", 0));
        checkBox->setText(QApplication::translate("MainWindow", "Shortest Trip", 0));
        dlvl->setText(QString());
        GT->setText(QApplication::translate("MainWindow", "0", 0));
        nextRest->setText(QApplication::translate("MainWindow", "Next Restaurant", 0));
        label_6->setText(QApplication::translate("MainWindow", "Total Distance Travelled", 0));
        label_15->setText(QApplication::translate("MainWindow", "Grand Total", 0));
        label_3->setText(QString());
        dCurrentRest->setText(QString());
        TripsTab1->setTabText(TripsTab1->indexOf(TripTab), QApplication::translate("MainWindow", "Trip", 0));
        label_2->setText(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:12pt;\">Your Trip is complete!</span></p><p><span style=\" font-size:12pt;\">This Page is WIP</span></p></body></html>", 0));
        label_7->setText(QApplication::translate("MainWindow", "Total Spent:", 0));
        TotSpent->setText(QApplication::translate("MainWindow", "0", 0));
        ReturnHome->setText(QApplication::translate("MainWindow", "Return to Home", 0));
        TripsTab1->setTabText(TripsTab1->indexOf(TripReview), QApplication::translate("MainWindow", "Trip Complete", 0));
        mainTab->setTabText(mainTab->indexOf(TripsTab), QApplication::translate("MainWindow", "Trips", 0));
        pushButton_5->setText(QApplication::translate("MainWindow", "Delete Item", 0));
        label_103->setText(QApplication::translate("MainWindow", "Menu Items", 0));
        label_20->setText(QApplication::translate("MainWindow", "Restaurant", 0));
        label_21->setText(QApplication::translate("MainWindow", "Add Item", 0));
        label_100->setText(QApplication::translate("MainWindow", "Modified Price", 0));
        label_99->setText(QApplication::translate("MainWindow", "Item", 0));
        adminCP->setText(QApplication::translate("MainWindow", "Change Price", 0));
        label_22->setText(QApplication::translate("MainWindow", "Item Name", 0));
        label_23->setText(QApplication::translate("MainWindow", "Item Price", 0));
        overfl0w->setText(QApplication::translate("MainWindow", "Max Items have been reached. ", 0));
        addToMenu->setText(QApplication::translate("MainWindow", "Add to Menu", 0));
        adminDelItem->setText(QApplication::translate("MainWindow", "Delete Item", 0));
        tabWidget_3->setTabText(tabWidget_3->indexOf(tab_6), QApplication::translate("MainWindow", "Menu Edits", 0));
        label_24->setText(QApplication::translate("MainWindow", "Restaurants", 0));
        pushButton_4->setText(QApplication::translate("MainWindow", "Add Recommend Restaurants", 0));
        label_25->setText(QApplication::translate("MainWindow", "Name", 0));
        label_26->setText(QApplication::translate("MainWindow", "Distance to Saddleback", 0));
        restIndicator->setText(QApplication::translate("MainWindow", "Distance to:", 0));
        DistAdd->setText(QApplication::translate("MainWindow", "Add it!", 0));
        addIndicator->setText(QApplication::translate("MainWindow", "<html><head/><body><p align=\"center\">All set! Click below to finish</p></body></html>", 0));
        AddRestaurant->setText(QApplication::translate("MainWindow", "Add Restaurant", 0));
        tabWidget_3->setTabText(tabWidget_3->indexOf(tab_7), QApplication::translate("MainWindow", "Restaurant Edits", 0));
        mainTab->setTabText(mainTab->indexOf(AdminTab), QApplication::translate("MainWindow", "Admin", 0));
        menuFile->setTitle(QApplication::translate("MainWindow", "File", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
