#ifndef HSETTING_H
#define HSETTING_H

#include <QDialog>

namespace Ui {
class hSetting;
}

class hSetting : public QDialog
{
    Q_OBJECT

public:
    explicit hSetting(QWidget *parent = 0);
    ~hSetting();

private:
    Ui::hSetting *ui;
};

#endif // HSETTING_H
