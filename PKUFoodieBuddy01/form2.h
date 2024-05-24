#ifndef FORM2_H
#define FORM2_H

#include <QWidget>
#include <QPainter>
namespace Ui {
class Form2;
}

class Form2 : public QWidget
{
    Q_OBJECT

public:
    explicit Form2(QWidget *parent = nullptr);
    void paintEvent(QPaintEvent * event);
    ~Form2();

signals:
    void back();
private:
    Ui::Form2 *ui;
};

#endif // FORM2_H
