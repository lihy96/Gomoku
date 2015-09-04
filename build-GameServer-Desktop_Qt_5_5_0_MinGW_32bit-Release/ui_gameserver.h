/********************************************************************************
** Form generated from reading UI file 'gameserver.ui'
**
** Created by: Qt User Interface Compiler version 5.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GAMESERVER_H
#define UI_GAMESERVER_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_GameServer
{
public:
    QWidget *centralWidget;
    QPushButton *pushButton_create;
    QPushButton *pushButton_add;
    QPushButton *pushButton_start;
    QPushButton *pushButton_renshu;
    QLabel *label_zhu;
    QLCDNumber *lcdNumber_zhu1;
    QLCDNumber *lcdNumber_zhu2;
    QPushButton *pushButton_save;
    QPushButton *pushButton_open;
    QPushButton *pushButton_closeroom;
    QPushButton *pushButton_cry;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *GameServer)
    {
        if (GameServer->objectName().isEmpty())
            GameServer->setObjectName(QStringLiteral("GameServer"));
        GameServer->resize(900, 650);
        centralWidget = new QWidget(GameServer);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        pushButton_create = new QPushButton(centralWidget);
        pushButton_create->setObjectName(QStringLiteral("pushButton_create"));
        pushButton_create->setGeometry(QRect(810, 30, 75, 23));
        pushButton_add = new QPushButton(centralWidget);
        pushButton_add->setObjectName(QStringLiteral("pushButton_add"));
        pushButton_add->setGeometry(QRect(810, 110, 75, 23));
        pushButton_start = new QPushButton(centralWidget);
        pushButton_start->setObjectName(QStringLiteral("pushButton_start"));
        pushButton_start->setGeometry(QRect(810, 190, 75, 23));
        pushButton_renshu = new QPushButton(centralWidget);
        pushButton_renshu->setObjectName(QStringLiteral("pushButton_renshu"));
        pushButton_renshu->setGeometry(QRect(810, 220, 75, 23));
        label_zhu = new QLabel(centralWidget);
        label_zhu->setObjectName(QStringLiteral("label_zhu"));
        label_zhu->setGeometry(QRect(600, 170, 171, 161));
        lcdNumber_zhu1 = new QLCDNumber(centralWidget);
        lcdNumber_zhu1->setObjectName(QStringLiteral("lcdNumber_zhu1"));
        lcdNumber_zhu1->setGeometry(QRect(600, 110, 71, 31));
        lcdNumber_zhu2 = new QLCDNumber(centralWidget);
        lcdNumber_zhu2->setObjectName(QStringLiteral("lcdNumber_zhu2"));
        lcdNumber_zhu2->setGeometry(QRect(680, 110, 91, 31));
        pushButton_save = new QPushButton(centralWidget);
        pushButton_save->setObjectName(QStringLiteral("pushButton_save"));
        pushButton_save->setGeometry(QRect(810, 300, 75, 23));
        pushButton_open = new QPushButton(centralWidget);
        pushButton_open->setObjectName(QStringLiteral("pushButton_open"));
        pushButton_open->setGeometry(QRect(810, 330, 75, 23));
        pushButton_closeroom = new QPushButton(centralWidget);
        pushButton_closeroom->setObjectName(QStringLiteral("pushButton_closeroom"));
        pushButton_closeroom->setGeometry(QRect(810, 60, 75, 23));
        pushButton_cry = new QPushButton(centralWidget);
        pushButton_cry->setObjectName(QStringLiteral("pushButton_cry"));
        pushButton_cry->setGeometry(QRect(810, 390, 75, 23));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(620, 350, 151, 51));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\271\274\345\234\206"));
        font.setPointSize(13);
        label->setFont(font);
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(600, 90, 71, 16));
        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(700, 90, 71, 16));
        GameServer->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(GameServer);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 900, 23));
        GameServer->setMenuBar(menuBar);
        mainToolBar = new QToolBar(GameServer);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        GameServer->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(GameServer);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        GameServer->setStatusBar(statusBar);

        retranslateUi(GameServer);

        QMetaObject::connectSlotsByName(GameServer);
    } // setupUi

    void retranslateUi(QMainWindow *GameServer)
    {
        GameServer->setWindowTitle(QApplication::translate("GameServer", "\344\272\224\345\255\220\346\243\213", 0));
        pushButton_create->setText(QApplication::translate("GameServer", "\345\210\233\345\273\272\346\210\277\351\227\264", 0));
        pushButton_add->setText(QApplication::translate("GameServer", "\345\212\240\345\205\245\346\210\277\351\227\264", 0));
        pushButton_start->setText(QApplication::translate("GameServer", "\345\274\200\345\247\213\346\270\270\346\210\217", 0));
        pushButton_renshu->setText(QApplication::translate("GameServer", "\350\257\267\346\261\202\347\273\223\346\235\237", 0));
        label_zhu->setText(QApplication::translate("GameServer", "\346\234\254\346\234\272", 0));
        pushButton_save->setText(QApplication::translate("GameServer", "\344\277\235\345\255\230\346\243\213\345\261\200", 0));
        pushButton_open->setText(QApplication::translate("GameServer", "\346\211\223\345\274\200\346\243\213\345\261\200", 0));
        pushButton_closeroom->setText(QApplication::translate("GameServer", "\345\205\263\351\227\255\346\210\277\351\227\264", 0));
        pushButton_cry->setText(QApplication::translate("GameServer", "\346\202\224\346\243\213", 0));
        label->setText(QApplication::translate("GameServer", "\350\275\256\345\210\260\344\275\240\344\272\206\357\274\201", 0));
        label_2->setText(QApplication::translate("GameServer", "\345\211\251\344\275\231\346\227\266\351\227\264\357\274\232", 0));
        label_3->setText(QApplication::translate("GameServer", "\346\200\273\347\224\250\346\227\266\357\274\232", 0));
    } // retranslateUi

};

namespace Ui {
    class GameServer: public Ui_GameServer {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GAMESERVER_H
