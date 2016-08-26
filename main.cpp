#include "mainwindow.h"
#include <QApplication>
#include "controller.h"
#include <iostream>
#include <QDebug>

using namespace std;

int main(int argc, char *argv[])
{
   // test_setData();
    resetData();
 //  qDebug()<<"flag！！！!\n";
    prepare();
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
 //   w.showSize();
    return a.exec();
}
