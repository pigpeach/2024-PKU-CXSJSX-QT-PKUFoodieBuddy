#include "form.h"
#include "ui_form.h"

Form::Form(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Form)
{
    ui->setupUi(this);
    this->setFixedSize(320,588);
    this->setWindowTitle("食堂信息");
    QPushButton *bt =new QPushButton("返回主界面",this);
    bt->move(10,20);
    connect(bt,&QPushButton::clicked,[=](){
        emit this->back();
    });
    //进入到下一个界面的时候，也能返回上一个界面！
}

Form::~Form()
{
    delete ui;
}

void Form::paintEvent(QPaintEvent *event)
{
    QPainter painter(this);
    painter.drawPixmap(0,0,width(),height(),QPixmap(":/p1.jpeg"));
}//改背景图片用的代码

void Form::on_pushButton_clicked()
{

}

