#include "polkit.h"
#include "ui_polkit.h"

polkit::polkit(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::polkit)
{
    ui->setupUi(this);
}

polkit::~polkit()
{
    delete ui;
}

void polkit::on_close_clicked()
{
    close();
}
