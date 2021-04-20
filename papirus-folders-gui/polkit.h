#ifndef POLKIT_H
#define POLKIT_H

#include <QDialog>

namespace Ui {
class polkit;
}

class polkit : public QDialog
{
    Q_OBJECT

public:
    explicit polkit(QWidget *parent = nullptr);
    ~polkit();

private slots:
    void on_close_clicked();

private:
    Ui::polkit *ui;
};

#endif // POLKIT_H
