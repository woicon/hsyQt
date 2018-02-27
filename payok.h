#ifndef PAYOK_H
#define PAYOK_H

#include <QDialog>

namespace Ui {
class payOk;
}

class payOk : public QDialog
{
    Q_OBJECT

public:
    explicit payOk(QWidget *parent = 0);
    ~payOk();

private:
    Ui::payOk *ui;
};

#endif // PAYOK_H
