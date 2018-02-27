#include "payok.h"
#include "ui_payok.h"

payOk::payOk(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::payOk)
{
    ui->setupUi(this);
}

payOk::~payOk()
{
    delete ui;
}
