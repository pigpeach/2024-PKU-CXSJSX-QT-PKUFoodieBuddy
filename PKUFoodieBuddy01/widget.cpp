#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    QPushButton *button=new QPushButton("食堂信息",this);
    button->setParent(this);
    button->move(100,190);
    button->setFixedSize(131,51);
    this->setWindowTitle("PKUFoodieBuddy");
    //设置窗口固定大小
     this->setFixedSize(320,588);

    //新页面
    pg=new Form;
    connect(button,&QPushButton::clicked,[=](){
        this->hide();
        pg->show();
    });
    //监听打开的新页面发出的信号
    connect(pg,&Form::back,[=](){
      pg->hide();
      this->show();

    });
}

Widget::~Widget()
{
    delete ui;
}

void Widget::paintEvent(QPaintEvent *event)
{
    QPainter painter(this);
    painter.drawPixmap(0,0,width(),height(),QPixmap(":/p1.jpeg"));
}

void Widget::on_pushButton_clicked()
{

}

