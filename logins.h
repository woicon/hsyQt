#ifndef LOGINS_H
#define LOGINS_H

#include <QMainWindow>

namespace Ui {
class logins;
}

class logins : public QMainWindow
{
    Q_OBJECT

public:
    explicit logins(QWidget *parent = 0);
    ~logins();

private:
    Ui::logins *ui;
};

#endif // LOGINS_H
