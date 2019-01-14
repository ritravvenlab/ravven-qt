#include <QApplication>
#include <QDebug>
#include "myWidget.h"
#include <QVBoxLayout>
#include <QFrame>

int main(int argc, char *argv[]){
    QApplication app(argc,argv);
    qDebug() << "hello world\n";

    QVBoxLayout *myLayout = new QVBoxLayout;
    MyWidget *myWidget1 = new MyWidget;
    MyWidget *myWidget2 = new MyWidget;

    myLayout->addWidget(myWidget1);
    myLayout->addWidget(myWidget2);

    QFrame *myFrame = new QFrame;
    myFrame->setLayout(myLayout);

    myFrame->show();
    return app.exec();
}
