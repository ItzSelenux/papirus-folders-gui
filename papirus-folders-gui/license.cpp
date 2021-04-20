#include "license.h"
#include "ui_license.h"

license::license(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::license)
{
    ui->setupUi(this);
}

license::~license()
{
    delete ui;
}

void license::on_pushButton_clicked()
{
    close();
}
