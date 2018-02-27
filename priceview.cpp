#include "priceview.h"
#include "ui_priceview.h"

priceView::priceView(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::priceView)
{
    ui->setupUi(this);
}

priceView::~priceView()
{
    delete ui;
}
