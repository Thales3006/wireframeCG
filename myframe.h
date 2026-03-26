#ifndef MYFRAME_H
#define MYFRAME_H

#include <QFrame>
#include <QWidget>

class MyFrame : public QFrame
{
    Q_OBJECT
public:
    MyFrame(QWidget *parent = nullptr);
    void paintEvent(QPaintEvent *event) override;

public slots:
    void mostrar();

private:
    QLine linha;
    bool flag;
};

#endif // MYFRAME_H
