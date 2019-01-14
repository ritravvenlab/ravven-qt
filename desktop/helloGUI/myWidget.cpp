#include "myWidget.h"
#include <QVBoxLayout>
#include <QGridLayout>

MyWidget::MyWidget(QWidget *parent):QWidget(parent){
    // instantiate layout widgets
    btn1 = new QPushButton("Push Me");
    btn2 = new QPushButton("Push Me");
    btn3 = new QPushButton("Push Me");
    lbl1 = new QLabel("");

    QGridLayout *grid = new QGridLayout(this);
    grid->addWidget(btn1, 0, 0);
    grid->addWidget(btn2, 0, 1);
    grid->addWidget(btn3, 1, 0);
    grid->addWidget(lbl1, 1, 1);

    setLayout(grid);

    // link up the button push with the function onPush
    connect(btn1,SIGNAL(clicked()),this,SLOT(onPush()));
}

void MyWidget::onPush(){
    lbl1->setText("Just Pushed");
}

