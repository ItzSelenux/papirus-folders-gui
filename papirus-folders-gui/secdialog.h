#ifndef SECDIALOG_H
#define SECDIALOG_H

#include <QDialog>

namespace Ui {
class secDialog;
}

class secDialog : public QDialog
{
    Q_OBJECT

public:
    explicit secDialog(QWidget *parent = nullptr);
    ~secDialog();

private slots:
    void on_license_clicked();

    void on_help_clicked();

    void on_pushButton_clicked();

private:
    Ui::secDialog *ui;
};

#endif // SECDIALOG_H
