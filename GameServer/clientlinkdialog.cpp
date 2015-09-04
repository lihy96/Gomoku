#include "clientlinkdialog.h"
#include "ui_clientlinkdialog.h"

ClientLinkDialog::ClientLinkDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ClientLinkDialog)
{
    ui->setupUi(this);
}

ClientLinkDialog::~ClientLinkDialog()
{
    delete ui;
}

void ClientLinkDialog::on_pushButton_2_clicked()
{
    QString text = ui->lineEdit->text();
    text += "1";
    ui->lineEdit->setText(text);
}

void ClientLinkDialog::on_pushButton_10_clicked()
{
    QString text = ui->lineEdit->text();
    text += "2";
    ui->lineEdit->setText(text);
}

void ClientLinkDialog::on_pushButton_4_clicked()
{
    QString text = ui->lineEdit->text();
    text += "3";
    ui->lineEdit->setText(text);
}

void ClientLinkDialog::on_pushButton_5_clicked()
{
    QString text = ui->lineEdit->text();
    text += "4";
    ui->lineEdit->setText(text);
}

void ClientLinkDialog::on_pushButton_6_clicked()
{
    QString text = ui->lineEdit->text();
    text += "5";
    ui->lineEdit->setText(text);
}

void ClientLinkDialog::on_pushButton_15_clicked()
{
    QString text = ui->lineEdit->text();
    text += ".";
    ui->lineEdit->setText(text);
}

void ClientLinkDialog::on_pushButton_7_clicked()
{
    QString text = ui->lineEdit->text();
    text += "6";
    ui->lineEdit->setText(text);
}

void ClientLinkDialog::on_pushButton_8_clicked()
{
    QString text = ui->lineEdit->text();
    text += "7";
    ui->lineEdit->setText(text);
}

void ClientLinkDialog::on_pushButton_12_clicked()
{
    QString text = ui->lineEdit->text();
    text += "8";
    ui->lineEdit->setText(text);
}

void ClientLinkDialog::on_pushButton_13_clicked()
{
    QString text = ui->lineEdit->text();
    text += "9";
    ui->lineEdit->setText(text);
}

void ClientLinkDialog::on_pushButton_14_clicked()
{
    QString text = ui->lineEdit->text();
    text += "0";
    ui->lineEdit->setText(text);
}

void ClientLinkDialog::on_pushButton_11_clicked()
{
    QString text = ui->lineEdit->text();
    QString tmp = "";
    for(int i = 0;i < text.length()-1;i++){
        tmp += text[i];
    }
    ui->lineEdit->setText(tmp);
}

void ClientLinkDialog::on_pushButton_clicked()
{
    clientLinkString = ui->lineEdit->text();
    close();
}
