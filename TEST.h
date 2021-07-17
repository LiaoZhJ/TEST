#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_TEST.h"

class TEST : public QMainWindow
{
    Q_OBJECT

public:
    TEST(QWidget *parent = Q_NULLPTR);

private:
    Ui::TESTClass ui;
};
