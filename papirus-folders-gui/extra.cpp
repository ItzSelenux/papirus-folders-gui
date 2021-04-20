#include "extra.h"
#include "ui_extra.h"
#include "papirus.h"
#include "polkit.h"
#include "filemanager.h"

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

void extra::on_files_clicked()
{
    filemanager filemanager;
    filemanager.setModal(true);
    filemanager.exec();
}
