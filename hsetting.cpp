#include "hsetting.h"
#include "ui_setting.h"

hSetting::hSetting(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::hSetting)
{
    ui->setupUi(this);
}

hSetting::~hSetting()
{
    delete ui;
}
