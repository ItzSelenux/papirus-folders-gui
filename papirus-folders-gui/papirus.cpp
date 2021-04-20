#include "papirus.h"
#include "ui_papirus.h"

papirus::papirus(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::papirus)
{
    ui->setupUi(this);
}

papirus::~papirus()
{
    delete ui;
}

void papirus::on_pushButton_clicked()
{
    close();
}
