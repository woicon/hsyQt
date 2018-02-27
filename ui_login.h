/********************************************************************************
** Form generated from reading UI file 'login.ui'
**
** Created by: Qt User Interface Compiler version 5.10.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGIN_H
#define UI_LOGIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QComboBox *loginComboBox;
    QPushButton *pushButton;
    QWidget *widget;
    QLabel *label;
    QCheckBox *checkBox;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(340, 390);
        MainWindow->setStyleSheet(QStringLiteral("background:#ffffff"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        loginComboBox = new QComboBox(centralwidget);
        loginComboBox->addItem(QString());
        loginComboBox->addItem(QString());
        loginComboBox->addItem(QString());
        loginComboBox->setObjectName(QStringLiteral("loginComboBox"));
        loginComboBox->setGeometry(QRect(20, 180, 301, 51));
        loginComboBox->setStyleSheet(QLatin1String("border:1px solid rgb(204, 204, 204);\n"
"background: #FFFFFF;\n"
"border-radius: 2px;"));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(20, 280, 301, 51));
        pushButton->setStyleSheet(QLatin1String("background-color:rgb(84, 207, 170);\n"
"color:rgb(255, 255, 255);\n"
"border-radius:2px;\n"
"border:none;\n"
"font-family: MicrosoftSansSerif;\n"
"font-size: 22px;\n"
"letter-spacing: 2;"));
        widget = new QWidget(centralwidget);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(60, 10, 201, 151));
        widget->setStyleSheet(QStringLiteral("background:url(:/images/logo-login.png) no-repeat center;"));
        label = new QLabel(centralwidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(20, 350, 131, 21));
        label->setStyleSheet(QLatin1String("font-size:11px;\n"
"color:rgb(204, 204, 204);\n"
"font-family: Microsoft YaHei;"));
        checkBox = new QCheckBox(centralwidget);
        checkBox->setObjectName(QStringLiteral("checkBox"));
        checkBox->setGeometry(QRect(20, 250, 73, 18));
        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(300, 0, 40, 40));
        QIcon icon;
        icon.addFile(QStringLiteral(":/images/ico/close-hover.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_2->setIcon(icon);
        pushButton_2->setIconSize(QSize(20, 20));
        pushButton_2->setFlat(true);
        pushButton_3 = new QPushButton(centralwidget);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(219, 350, 101, 20));
        pushButton_3->setLayoutDirection(Qt::RightToLeft);
        pushButton_3->setStyleSheet(QLatin1String("\n"
"font-family: Microsoft YaHei;\n"
"font-size: 12px;\n"
"color: #rgb(153, 153, 153);"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/images/ico/arr.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_3->setIcon(icon1);
        pushButton_3->setAutoDefault(false);
        pushButton_3->setFlat(true);
        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        loginComboBox->setItemText(0, QApplication::translate("MainWindow", "\346\224\266\351\223\266\345\217\260001", nullptr));
        loginComboBox->setItemText(1, QApplication::translate("MainWindow", "\346\224\266\351\223\266\345\217\260002", nullptr));
        loginComboBox->setItemText(2, QApplication::translate("MainWindow", "\346\224\266\351\223\266\345\217\260003", nullptr));

        pushButton->setText(QApplication::translate("MainWindow", "\347\231\273\351\231\206", nullptr));
        label->setText(QApplication::translate("MainWindow", "V0.1.1\302\251huihosuyin.cn", nullptr));
        checkBox->setText(QApplication::translate("MainWindow", "\350\207\252\345\212\250\347\231\273\351\231\206", nullptr));
        pushButton_2->setText(QString());
        pushButton_3->setText(QApplication::translate("MainWindow", "\344\273\243\347\220\206\346\234\215\345\212\241\345\231\250\350\256\276\347\275\256", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGIN_H
