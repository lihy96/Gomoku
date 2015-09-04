/********************************************************************************
** Form generated from reading UI file 'renshuqingqiu.ui'
**
** Created by: Qt User Interface Compiler version 5.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RENSHUQINGQIU_H
#define UI_RENSHUQINGQIU_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_RenshuQingqiu
{
public:
    QLabel *label;
    QPushButton *pushButton;
    QPushButton *pushButton_2;

    void setupUi(QDialog *RenshuQingqiu)
    {
        if (RenshuQingqiu->objectName().isEmpty())
            RenshuQingqiu->setObjectName(QStringLiteral("RenshuQingqiu"));
        RenshuQingqiu->resize(316, 104);
        label = new QLabel(RenshuQingqiu);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(60, 20, 221, 31));
        pushButton = new QPushButton(RenshuQingqiu);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(60, 60, 75, 23));
        pushButton_2 = new QPushButton(RenshuQingqiu);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(170, 60, 75, 23));

        retranslateUi(RenshuQingqiu);

        QMetaObject::connectSlotsByName(RenshuQingqiu);
    } // setupUi

    void retranslateUi(QDialog *RenshuQingqiu)
    {
        RenshuQingqiu->setWindowTitle(QApplication::translate("RenshuQingqiu", "\346\217\220\347\244\272", 0));
        label->setText(QApplication::translate("RenshuQingqiu", "\346\202\250\347\234\237\347\232\204\350\246\201\350\256\244\350\276\223\345\220\227\357\274\237", 0));
        pushButton->setText(QApplication::translate("RenshuQingqiu", "\347\241\256\345\256\232", 0));
        pushButton_2->setText(QApplication::translate("RenshuQingqiu", "\345\217\226\346\266\210", 0));
    } // retranslateUi

};

namespace Ui {
    class RenshuQingqiu: public Ui_RenshuQingqiu {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RENSHUQINGQIU_H
