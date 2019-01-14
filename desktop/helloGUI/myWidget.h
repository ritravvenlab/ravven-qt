#ifndef MYWIDGET_H
#define MYWIDGET_H

#include <QWidget>
#include <QPushButton>
#include <QLabel>

class MyWidget : public QWidget {
    Q_OBJECT

public:
    MyWidget(QWidget *parent = 0);

private:
    QPushButton *btn1;
    QPushButton *btn2;
    QPushButton *btn3;
    QLabel *lbl1;

private slots:
    void onPush();
};

#endif // MYWIDGET_H
