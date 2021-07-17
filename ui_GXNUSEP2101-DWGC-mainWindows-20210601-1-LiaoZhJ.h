/********************************************************************************
** Form generated from reading UI file 'GXNUSEP2101-DWGC-mainWindows-20210601-1-LiaoZhJUMyPej.ui'
**
** Created by: Qt User Interface Compiler version 5.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef GXNUSEP2101_2D_DWGC_2D_MAINWINDOWS_2D_20210601_2D_1_2D_LIAOZHJUMYPEJ_H
#define GXNUSEP2101_2D_DWGC_2D_MAINWINDOWS_2D_20210601_2D_1_2D_LIAOZHJUMYPEJ_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableView>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow :public QMainWindow
{
public:
    explicit Ui_MainWindow(QMainWindow* parent = 0) :
        QMainWindow(parent)
    {
        this->setupUi(this);
    };
public:
    QAction *Find;
    QAction *Replace;
    QAction *OneByImport;
    QAction *BulkNew;
    QAction *BulkImport;
    QAction *CardShare;
    QAction *CardcaseShare;
    QAction *Export;
    QWidget *centralwidget;
    QTextBrowser *Hello;
    QLineEdit *CardcaseName;
    QTableView *Cardcase;
    QMenuBar *menubar;
    QMenu *menuFind;
    QMenu *menuNew;
    QMenu *menuShare;
    QMenu *RecycleBin;
    QMenu *menuPrint;
    QMenu *menuPermissions;
    QMenu *menuAccount;
    QMenu *menuSetting;
    QStatusBar *statusbar;

    void accept() {
        this->show();
    }

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(801, 600);
        Find = new QAction(MainWindow);
        Find->setObjectName(QStringLiteral("Find"));
        Replace = new QAction(MainWindow);
        Replace->setObjectName(QStringLiteral("Replace"));
        OneByImport = new QAction(MainWindow);
        OneByImport->setObjectName(QStringLiteral("OneByImport"));
        BulkNew = new QAction(MainWindow);
        BulkNew->setObjectName(QStringLiteral("BulkNew"));
        BulkImport = new QAction(MainWindow);
        BulkImport->setObjectName(QStringLiteral("BulkImport"));
        CardShare = new QAction(MainWindow);
        CardShare->setObjectName(QStringLiteral("CardShare"));
        CardcaseShare = new QAction(MainWindow);
        CardcaseShare->setObjectName(QStringLiteral("CardcaseShare"));
        Export = new QAction(MainWindow);
        Export->setObjectName(QStringLiteral("Export"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        Hello = new QTextBrowser(centralwidget);
        Hello->setObjectName(QStringLiteral("Hello"));
        Hello->setGeometry(QRect(250, 30, 281, 51));
        CardcaseName = new QLineEdit(centralwidget);
        CardcaseName->setObjectName(QStringLiteral("CardcaseName"));
        CardcaseName->setGeometry(QRect(80, 110, 91, 31));
        Cardcase = new QTableView(centralwidget);
        Cardcase->setObjectName(QStringLiteral("Cardcase"));
        Cardcase->setGeometry(QRect(80, 140, 641, 371));
        MainWindow->setCentralWidget(centralwidget);
        Cardcase->raise();
        Hello->raise();
        CardcaseName->raise();
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 801, 26));
        menuFind = new QMenu(menubar);
        menuFind->setObjectName(QStringLiteral("menuFind"));
        menuNew = new QMenu(menubar);
        menuNew->setObjectName(QStringLiteral("menuNew"));
        menuShare = new QMenu(menubar);
        menuShare->setObjectName(QStringLiteral("menuShare"));
        RecycleBin = new QMenu(menubar);
        RecycleBin->setObjectName(QStringLiteral("RecycleBin"));
        menuPrint = new QMenu(menubar);
        menuPrint->setObjectName(QStringLiteral("menuPrint"));
        menuPermissions = new QMenu(menubar);
        menuPermissions->setObjectName(QStringLiteral("menuPermissions"));
        menuAccount = new QMenu(menubar);
        menuAccount->setObjectName(QStringLiteral("menuAccount"));
        menuSetting = new QMenu(menubar);
        menuSetting->setObjectName(QStringLiteral("menuSetting"));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menuNew->menuAction());
        menubar->addAction(menuFind->menuAction());
        menubar->addAction(menuShare->menuAction());
        menubar->addAction(RecycleBin->menuAction());
        menubar->addAction(menuPrint->menuAction());
        menubar->addAction(menuPermissions->menuAction());
        menubar->addAction(menuAccount->menuAction());
        menubar->addAction(menuSetting->menuAction());
        menuFind->addAction(Find);
        menuFind->addAction(Replace);
        menuNew->addAction(OneByImport);
        menuNew->addAction(BulkNew);
        menuNew->addAction(BulkImport);
        menuShare->addAction(CardShare);
        menuShare->addAction(CardcaseShare);
        menuShare->addAction(Export);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        Find->setText(QApplication::translate("MainWindow", "\346\237\245\346\211\276", nullptr));
        Replace->setText(QApplication::translate("MainWindow", "\346\233\277\346\215\242", nullptr));
        OneByImport->setText(QApplication::translate("MainWindow", "\351\200\220\347\211\207\346\226\260\345\242\236", nullptr));
        BulkNew->setText(QApplication::translate("MainWindow", "\346\211\271\351\207\217\346\226\260\345\242\236", nullptr));
        BulkImport->setText(QApplication::translate("MainWindow", "\346\211\271\351\207\217\345\257\274\345\205\245", nullptr));
        CardShare->setText(QApplication::translate("MainWindow", "\345\220\215\347\211\207\345\205\261\344\272\253", nullptr));
        CardcaseShare->setText(QApplication::translate("MainWindow", "\345\220\215\347\211\207\345\244\271\345\205\261\344\272\253", nullptr));
        Export->setText(QApplication::translate("MainWindow", "\345\257\274\345\207\272", nullptr));
        Hello->setHtml(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'SimSun'; font-size:9.07563pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:18pt; font-weight:600; font-style:italic;\">\346\254\242\350\277\216\344\275\277\347\224\250\345\220\215\347\211\207\345\206\214</span></p></body></html>", nullptr));
        CardcaseName->setText(QApplication::translate("MainWindow", "\346\210\221\347\232\204\345\220\215\347\211\207\345\244\271", nullptr));
        menuFind->setTitle(QApplication::translate("MainWindow", "\346\237\245\346\211\276", nullptr));
        menuNew->setTitle(QApplication::translate("MainWindow", "\346\226\260\345\242\236", nullptr));
        menuShare->setTitle(QApplication::translate("MainWindow", "\345\205\261\344\272\253", nullptr));
        RecycleBin->setTitle(QApplication::translate("MainWindow", "\345\233\236\346\224\266\347\256\261", nullptr));
        menuPrint->setTitle(QApplication::translate("MainWindow", "\346\211\223\345\215\260", nullptr));
        menuPermissions->setTitle(QApplication::translate("MainWindow", "\346\235\203\351\231\220", nullptr));
        menuAccount->setTitle(QApplication::translate("MainWindow", "\350\264\246\346\210\267", nullptr));
        menuSetting->setTitle(QApplication::translate("MainWindow", "\350\256\276\347\275\256", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // GXNUSEP2101_2D_DWGC_2D_MAINWINDOWS_2D_20210601_2D_1_2D_LIAOZHJUMYPEJ_H
