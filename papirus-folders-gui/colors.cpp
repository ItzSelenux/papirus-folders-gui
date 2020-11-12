#include "colors.h"
#include "ui_colors.h"

colors::colors(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::colors)
{
    ui->setupUi(this);
}

colors::~colors()
{
    delete ui;
}

void colors::on_pushButton_clicked()
{
    close();
}
