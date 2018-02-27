#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->setWindowTitle("收款小精灵");                     //设置窗体标题
    this->setMaximumSize(700,350);                          //窗体最大尺寸
    this->setMinimumSize(700,350);                          //窗体最小尺寸
    this->setWindowFlags(Qt::FramelessWindowHint);//去掉标题栏

    this->setWindowIcon(QIcon(":/images/window-ico.png"));  //窗体图标
    //关闭按钮失效
    this->setWindowFlags(Qt::WindowMinMaxButtonsHint);
    //去掉最大化最小化按钮，保留关闭按钮
    this->setWindowFlags(Qt::WindowCloseButtonHint);

}

MainWindow::~MainWindow()
{
    delete ui;
}

