#ifndef FORM_H
#define FORM_H

#include <QWidget>
#include <QPainter>
namespace Ui {
class Form;
}

class Form : public QWidget
{
    Q_OBJECT

public:
    explicit Form(QWidget *parent = nullptr);
    void paintEvent(QPaintEvent * event);
    ~Form();

signals:
    void back();

private slots:
    void on_pushButton_clicked();

private:
    Ui::Form *ui;
};

#endif // FORM_H
