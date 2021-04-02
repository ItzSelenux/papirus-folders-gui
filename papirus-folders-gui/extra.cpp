#include "extra.h"
#include "ui_extra.h"
#include "colors.h"
#include "papirus.h"
#include "polkit.h"

extra::extra(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::extra)
{
    ui->setupUi(this);
    sh = new QProcess (this);
}

extra::~extra()
{
    delete ui;
}

void extra::on_papirus_clicked()
{
    papirus papirus;
    papirus.setModal(true);
    papirus.exec();
}

void extra::on_colors_clicked()
{
    colors colors;
    colors.setModal(true);
    colors.exec();
}

void extra::on_polkit_clicked()
{
    polkit polkit;
    polkit.setModal(true);
    polkit.exec();
}

void extra::on_close_clicked()
{
    close();
}
