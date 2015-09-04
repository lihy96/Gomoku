#include "askagree.h"
#include "ui_askagree.h"

AskAgree::AskAgree(QString label,QString line,QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AskAgree)
{
    ui->setupUi(this);
    ui->label->setText(label);
    ui->lineEdit->setText(line);
    agree = false;
}

AskAgree::~AskAgree()
{
    delete ui;
}

void AskAgree::on_pushButton_clicked()
{
    agree = true;
    close();
}

void AskAgree::on_pushButton_2_clicked()
{
    close();
}
