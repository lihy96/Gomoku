#include "gameserver.h"
#include "dialog.h"
#include <QApplication>

//#include <QDebug>
//#include <iostream>

int main(int argc, char *argv[])
{
   // std::cout << "cout\n";
    //qDebug() << "qDebug()\n";


    QApplication a(argc, argv);
    Dialog *dia = new Dialog();
    dia->show();
    dia->exec();
    int flag = dia->isZhuJi;
    if(flag==0) return 0;

    GameServer w(flag,0);
    w.show();

    return a.exec();
}
