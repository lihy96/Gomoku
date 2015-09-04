#ifndef CLIENTLINKDIALOG_H
#define CLIENTLINKDIALOG_H

#include <QDialog>

namespace Ui {
class ClientLinkDialog;
}

class ClientLinkDialog : public QDialog
{
    Q_OBJECT

public:
    explicit ClientLinkDialog(QWidget *parent = 0);
    ~ClientLinkDialog();
    QString clientLinkString;

private slots:
    void on_pushButton_2_clicked();

    void on_pushButton_10_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_6_clicked();

    void on_pushButton_15_clicked();

    void on_pushButton_7_clicked();

    void on_pushButton_8_clicked();

    void on_pushButton_12_clicked();

    void on_pushButton_13_clicked();

    void on_pushButton_14_clicked();

    void on_pushButton_11_clicked();

    void on_pushButton_clicked();

private:
    Ui::ClientLinkDialog *ui;
};

#endif // CLIENTLINKDIALOG_H
