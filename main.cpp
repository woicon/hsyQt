#include "mainwindow.h"
#include <QApplication>
#include <QFile>

class CommonHelper
{
public:
    static void setStyle(const QString &style) {
        QFile qss(style);
        qss.open(QFile::ReadOnly);
        qApp->setStyleSheet(qss.readAll());
        qss.close();
    }
};
int main(int argc, char *argv[])
{
#if (QT_VERSION >= QT_VERSION_CHECK(5, 6, 0))
    QCoreApplication::setAttribute(Qt::AA_EnableHighDpiScaling);
#endif

    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    // 加载QSS样式
    CommonHelper::setStyle(":/style.qss");
    return a.exec();
}

