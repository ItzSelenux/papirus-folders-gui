#ifndef PAPIRUS_H
#define PAPIRUS_H

#include <QDialog>

namespace Ui {
class papirus;
}

class papirus : public QDialog
{
    Q_OBJECT

public:
    explicit papirus(QWidget *parent = nullptr);
    ~papirus();

private slots:
    void on_pushButton_clicked();

private:
    Ui::papirus *ui;
};

#endif // PAPIRUS_H
