#include "renshuqingqiu.h"
#include "ui_renshuqingqiu.h"

RenshuQingqiu::RenshuQingqiu(QString str,QWidget *parent) :
    QDialog(parent),
    ui(new Ui::RenshuQingqiu)
{
    ui->setupUi(this);
    renshu = false;
    ui->label->setText(str);
}

RenshuQingqiu::~RenshuQingqiu()
{
    delete ui;
}

void RenshuQingqiu::on_pushButton_clicked()
{
    renshu = true;
    close();
}

void RenshuQingqiu::on_pushButton_2_clicked()
{
    close();
}
