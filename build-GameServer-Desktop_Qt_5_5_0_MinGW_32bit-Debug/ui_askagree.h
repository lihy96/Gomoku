/********************************************************************************
** Form generated from reading UI file 'askagree.ui'
**
** Created by: Qt User Interface Compiler version 5.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ASKAGREE_H
#define UI_ASKAGREE_H

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

class Ui_AskAgree
{
public:
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QLabel *label;
    QLineEdit *lineEdit;

    void setupUi(QDialog *AskAgree)
    {
        if (AskAgree->objectName().isEmpty())
            AskAgree->setObjectName(QStringLiteral("AskAgree"));
        AskAgree->resize(400, 300);
        pushButton = new QPushButton(AskAgree);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(100, 130, 75, 23));
        pushButton_2 = new QPushButton(AskAgree);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(190, 130, 75, 23));
        label = new QLabel(AskAgree);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(90, 80, 54, 12));
        lineEdit = new QLineEdit(AskAgree);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(190, 70, 113, 20));

        retranslateUi(AskAgree);

        QMetaObject::connectSlotsByName(AskAgree);
    } // setupUi

    void retranslateUi(QDialog *AskAgree)
    {
        AskAgree->setWindowTitle(QApplication::translate("AskAgree", "Dialog", 0));
        pushButton->setText(QApplication::translate("AskAgree", "\347\241\256\345\256\232", 0));
        pushButton_2->setText(QApplication::translate("AskAgree", "\345\217\226\346\266\210", 0));
        label->setText(QApplication::translate("AskAgree", "TextLabel", 0));
    } // retranslateUi

};

namespace Ui {
    class AskAgree: public Ui_AskAgree {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ASKAGREE_H
