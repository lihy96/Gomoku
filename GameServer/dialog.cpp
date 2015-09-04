#include "dialog.h"
#include "ui_dialog.h"

Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);
    isZhuJi = 0;
}

Dialog::~Dialog()
{
    delete ui;
}

void Dialog::on_pushButton_clicked()
{
    if(ui->radioButton->isChecked())
        isZhuJi = 1;
    else if(ui->radioButton_2->isChecked())
        isZhuJi = 2;
    close();
}

void Dialog::on_pushButton_2_clicked()
{
    close();
}
