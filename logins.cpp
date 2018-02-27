#include "logins.h"
#include "ui_logins.h"

logins::logins(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::logins)
{
    ui->setupUi(this);
}

logins::~logins()
{
    delete ui;
}
