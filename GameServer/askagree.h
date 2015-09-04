#ifndef ASKAGREE_H
#define ASKAGREE_H

#include <QDialog>

namespace Ui {
class AskAgree;
}

class AskAgree : public QDialog
{
    Q_OBJECT

public:
    explicit AskAgree(QString label,QString line,QWidget *parent = 0);
    ~AskAgree();
    bool agree;

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::AskAgree *ui;
};

#endif // ASKAGREE_H
