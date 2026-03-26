#include "myframe.h"
#include <QPainter>
#include <QPaintEvent>

MyFrame::MyFrame(QWidget *parent) : QFrame(parent)
{
    linha = QLine(0, 0, 800, 620);
    flag = false;
}

void MyFrame::paintEvent(QPaintEvent *event)
{
    QFrame::paintEvent(event);

    QPainter painter(this);
    painter.setPen(Qt::blue);

    if(flag){
        painter.drawLine(linha);
        flag = false;
    }
}

void MyFrame::mostrar()
{
    flag = true;
    update(); //update para atualizar o frame
}

