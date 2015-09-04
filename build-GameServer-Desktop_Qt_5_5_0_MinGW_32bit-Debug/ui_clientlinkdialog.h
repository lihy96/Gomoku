/********************************************************************************
** Form generated from reading UI file 'clientlinkdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CLIENTLINKDIALOG_H
#define UI_CLIENTLINKDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_ClientLinkDialog
{
public:
    QLabel *label;
    QLineEdit *lineEdit;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;
    QPushButton *pushButton_6;
    QPushButton *pushButton_7;
    QPushButton *pushButton_8;
    QPushButton *pushButton_9;
    QPushButton *pushButton_10;
    QPushButton *pushButton_11;
    QPushButton *pushButton_12;
    QPushButton *pushButton_13;
    QPushButton *pushButton_14;
    QPushButton *pushButton_15;
    QPushButton *pushButton;

    void setupUi(QDialog *ClientLinkDialog)
    {
        if (ClientLinkDialog->objectName().isEmpty())
            ClientLinkDialog->setObjectName(QStringLiteral("ClientLinkDialog"));
        ClientLinkDialog->resize(280, 200);
        label = new QLabel(ClientLinkDialog);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(10, 30, 61, 16));
        lineEdit = new QLineEdit(ClientLinkDialog);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(70, 30, 171, 20));
        pushButton_2 = new QPushButton(ClientLinkDialog);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(10, 80, 31, 31));
        pushButton_3 = new QPushButton(ClientLinkDialog);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(50, 80, 31, 31));
        pushButton_4 = new QPushButton(ClientLinkDialog);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setGeometry(QRect(90, 80, 31, 31));
        pushButton_5 = new QPushButton(ClientLinkDialog);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));
        pushButton_5->setGeometry(QRect(130, 80, 31, 31));
        pushButton_6 = new QPushButton(ClientLinkDialog);
        pushButton_6->setObjectName(QStringLiteral("pushButton_6"));
        pushButton_6->setGeometry(QRect(170, 80, 31, 31));
        pushButton_7 = new QPushButton(ClientLinkDialog);
        pushButton_7->setObjectName(QStringLiteral("pushButton_7"));
        pushButton_7->setGeometry(QRect(10, 120, 31, 31));
        pushButton_8 = new QPushButton(ClientLinkDialog);
        pushButton_8->setObjectName(QStringLiteral("pushButton_8"));
        pushButton_8->setGeometry(QRect(50, 120, 31, 31));
        pushButton_9 = new QPushButton(ClientLinkDialog);
        pushButton_9->setObjectName(QStringLiteral("pushButton_9"));
        pushButton_9->setGeometry(QRect(210, 120, 31, 31));
        pushButton_10 = new QPushButton(ClientLinkDialog);
        pushButton_10->setObjectName(QStringLiteral("pushButton_10"));
        pushButton_10->setGeometry(QRect(50, 80, 31, 31));
        pushButton_11 = new QPushButton(ClientLinkDialog);
        pushButton_11->setObjectName(QStringLiteral("pushButton_11"));
        pushButton_11->setGeometry(QRect(210, 120, 31, 31));
        pushButton_12 = new QPushButton(ClientLinkDialog);
        pushButton_12->setObjectName(QStringLiteral("pushButton_12"));
        pushButton_12->setGeometry(QRect(90, 120, 31, 31));
        pushButton_13 = new QPushButton(ClientLinkDialog);
        pushButton_13->setObjectName(QStringLiteral("pushButton_13"));
        pushButton_13->setGeometry(QRect(130, 120, 31, 31));
        pushButton_14 = new QPushButton(ClientLinkDialog);
        pushButton_14->setObjectName(QStringLiteral("pushButton_14"));
        pushButton_14->setGeometry(QRect(170, 120, 31, 31));
        pushButton_15 = new QPushButton(ClientLinkDialog);
        pushButton_15->setObjectName(QStringLiteral("pushButton_15"));
        pushButton_15->setGeometry(QRect(210, 80, 31, 31));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        pushButton_15->setFont(font);
        pushButton = new QPushButton(ClientLinkDialog);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(70, 160, 121, 23));

        retranslateUi(ClientLinkDialog);

        QMetaObject::connectSlotsByName(ClientLinkDialog);
    } // setupUi

    void retranslateUi(QDialog *ClientLinkDialog)
    {
        ClientLinkDialog->setWindowTitle(QApplication::translate("ClientLinkDialog", "connecting...", 0));
        label->setText(QApplication::translate("ClientLinkDialog", "Enter IP:", 0));
        pushButton_2->setText(QApplication::translate("ClientLinkDialog", "1", 0));
        pushButton_3->setText(QApplication::translate("ClientLinkDialog", "1", 0));
        pushButton_4->setText(QApplication::translate("ClientLinkDialog", "3", 0));
        pushButton_5->setText(QApplication::translate("ClientLinkDialog", "4", 0));
        pushButton_6->setText(QApplication::translate("ClientLinkDialog", "5", 0));
        pushButton_7->setText(QApplication::translate("ClientLinkDialog", "6", 0));
        pushButton_8->setText(QApplication::translate("ClientLinkDialog", "7", 0));
        pushButton_9->setText(QApplication::translate("ClientLinkDialog", "1", 0));
        pushButton_10->setText(QApplication::translate("ClientLinkDialog", "2", 0));
        pushButton_11->setText(QApplication::translate("ClientLinkDialog", "del", 0));
        pushButton_12->setText(QApplication::translate("ClientLinkDialog", "8", 0));
        pushButton_13->setText(QApplication::translate("ClientLinkDialog", "9", 0));
        pushButton_14->setText(QApplication::translate("ClientLinkDialog", "0", 0));
        pushButton_15->setText(QApplication::translate("ClientLinkDialog", ".", 0));
        pushButton->setText(QApplication::translate("ClientLinkDialog", "\347\241\256\345\256\232", 0));
    } // retranslateUi

};

namespace Ui {
    class ClientLinkDialog: public Ui_ClientLinkDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CLIENTLINKDIALOG_H
