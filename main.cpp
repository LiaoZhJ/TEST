#include "TEST.h"
#include <QtWidgets/QApplication>
#include"CAccount.h"
#include "ui_GXNUSEP2101-DWGC-login-20210601-B-Zhy.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    CAccount user;
    user.CaccountInteraction();
    a.exec();
    return 0;
}
