#ifndef CHANGELOG_H
#define CHANGELOG_H

#include <QDialog>

namespace Ui {
class changelog;
}

class changelog : public QDialog
{
    Q_OBJECT

public:
    explicit changelog(QWidget *parent = nullptr);
    ~changelog();

private slots:
    void on_help_clicked();

    void on_license_clicked();

    void on_close_clicked();

private:
    Ui::changelog *ui;
};

#endif // CHANGELOG_H
