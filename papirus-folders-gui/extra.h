#ifndef EXTRA_H
#define EXTRA_H
#include "QProcess"

#include <QDialog>

namespace Ui {
class extra;
}

class extra : public QDialog
{
    Q_OBJECT

public:
    explicit extra(QWidget *parent = nullptr);
    ~extra();

private slots:
    void on_papirus_clicked();

    void on_colors_clicked();

    void on_polkit_clicked();

    void on_close_clicked();

private:
    Ui::extra *ui;
    QProcess *sh;
};

#endif // EXTRA_H
