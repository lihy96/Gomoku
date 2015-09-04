#ifndef RENSHUQINGQIU_H
#define RENSHUQINGQIU_H

#include <QDialog>

namespace Ui {
class RenshuQingqiu;
}

class RenshuQingqiu : public QDialog
{
    Q_OBJECT

public:
    explicit RenshuQingqiu(QString str,QWidget *parent = 0);
    ~RenshuQingqiu();
    bool renshu;

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::RenshuQingqiu *ui;
};

#endif // RENSHUQINGQIU_H
