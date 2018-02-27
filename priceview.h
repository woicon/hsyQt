#ifndef PRICEVIEW_H
#define PRICEVIEW_H

#include <QMainWindow>

namespace Ui {
class priceView;
}

class priceView : public QMainWindow
{
    Q_OBJECT

public:
    explicit priceView(QWidget *parent = 0);
    ~priceView();

private:
    Ui::priceView *ui;
};

#endif // PRICEVIEW_H
