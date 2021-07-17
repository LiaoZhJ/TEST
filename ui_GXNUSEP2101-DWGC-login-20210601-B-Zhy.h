/********************************************************************************
** Form generated from reading UI file 'GXNUSEP2101-DWGC-login-20210601-B-ZhypQFHgd.ui'
**
** Created by: Qt User Interface Compiler version 5.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef GXNUSEP2101_2D_DWGC_2D_LOGIN_2D_20210601_2D_B_2D_ZHYPQFHGD_H
#define GXNUSEP2101_2D_DWGC_2D_LOGIN_2D_20210601_2D_B_2D_ZHYPQFHGD_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include "ui_GXNUSEP2101-DWGC-mainWindows-20210601-1-LiaoZhJ.h"
#include<qobject.h>
#include <QtWidgets/QMessageBox>

QT_BEGIN_NAMESPACE

class Ui_userName:public QDialog
{

    Q_OBJECT

public slots:
    void on_loginButtonClicked() {
        QString userName, password, yanznText;
        userName = lineEdit->text();
        password = passWord->text();
        yanznText = yanzm->text();
        if (userName == "admin" && password == "admin" && yanznText == "1234") {
            this->hide();
            emit showmain();
            Ui_userName::mainWindow.show();
        }
        else {
            QMessageBox::warning(this,tr("error"),tr("please check your account and password!!!"),QMessageBox::Yes);
            lineEdit->clear();
            lineEdit->setFocus();
        }
    };

signals:
    void showmain();
public:
    explicit Ui_userName(QDialog* parent = 0) :
        QDialog(parent)
    {
        this->setupUi(this);
    };
public:
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLineEdit *lineEdit;
    QLineEdit *passWord;
    QLineEdit *yanzm;
    QPushButton *login;
    QPushButton *cancel;
    QLabel *label_5;
    Ui_MainWindow mainWindow;
    

    void setupUi(QDialog *userName)
    {
        if (userName->objectName().isEmpty())
            userName->setObjectName(QStringLiteral("userName"));
        userName->resize(421, 337);
        label = new QLabel(userName);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(130, 0, 131, 31));
        label_2 = new QLabel(userName);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(100, 50, 71, 31));
        label_3 = new QLabel(userName);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(110, 90, 61, 31));
        label_4 = new QLabel(userName);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(100, 120, 81, 51));
        lineEdit = new QLineEdit(userName);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(200, 60, 113, 20));
        passWord = new QLineEdit(userName);
        passWord->setObjectName(QStringLiteral("passWord"));
        passWord->setGeometry(QRect(200, 100, 113, 20));
        passWord->setEchoMode(QLineEdit::Password);
        yanzm = new QLineEdit(userName);
        yanzm->setObjectName(QStringLiteral("yanzm"));
        yanzm->setGeometry(QRect(200, 140, 113, 20));
        login = new QPushButton(userName);
        login->setObjectName(QStringLiteral("login"));
        login->setGeometry(QRect(120, 190, 56, 21));
        cancel = new QPushButton(userName);
        cancel->setObjectName(QStringLiteral("cancel"));
        cancel->setGeometry(QRect(240, 190, 61, 21));
        label_5 = new QLabel(userName);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(230, 220, 91, 41));

        Ui_MainWindow w;
        QObject::connect(login,SIGNAL(showmain()),&w,SLOT(accpet()));
        w.move(0,0);
        connect(login, SIGNAL(clicked()), this, SLOT(on_loginButtonClicked()));

        retranslateUi(userName);

        QMetaObject::connectSlotsByName(userName);
    } // setupUi

    void retranslateUi(QDialog *userName)
    {
        userName->setWindowTitle(QApplication::translate("userName", "Dialog", nullptr));
        label->setText(QApplication::translate("userName", "<html><head/><body><p align=\"center\"><span style=\" font-size:14pt;\">\345\220\215\347\211\207\345\206\214\347\263\273\347\273\237</span></p></body></html>", nullptr));
        label_2->setText(QApplication::translate("userName", "<html><head/><body><p align=\"center\"><span style=\" font-size:12pt;\">\347\224\250\346\210\267\345\220\215\357\274\232</span></p></body></html>", nullptr));
        label_3->setText(QApplication::translate("userName", "<html><head/><body><p align=\"center\"><span style=\" font-size:12pt;\">\345\217\243\344\273\244\357\274\232</span></p></body></html>", nullptr));
        label_4->setText(QApplication::translate("userName", "<html><head/><body><p align=\"center\"><span style=\" font-size:12pt;\">\351\252\214\350\257\201\347\240\201\357\274\232</span></p></body></html>", nullptr));
        login->setText(QApplication::translate("userName", "\347\231\273\345\275\225", nullptr));
        cancel->setText(QApplication::translate("userName", "\345\217\226\346\266\210", nullptr));
        label_5->setText(QApplication::translate("userName", "<html><head/><body><p align=\"center\"><span style=\" color:#0000ff;\">\345\277\230\344\272\206\345\217\243\344\273\244\357\274\237</span></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class userName: public Ui_userName {};
} // namespace Ui

QT_END_NAMESPACE

#endif // GXNUSEP2101_2D_DWGC_2D_LOGIN_2D_20210601_2D_B_2D_ZHYPQFHGD_H
