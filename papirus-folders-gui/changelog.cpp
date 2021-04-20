#include "changelog.h"
#include "ui_changelog.h"
#include "help.h"
#include "license.h"
#include "secdialog.h"

changelog::changelog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::changelog)
{
    ui->setupUi(this);
}

changelog::~changelog()
{
    delete ui;
}

void changelog::on_help_clicked()
{
    help help;
    help.setModal(true);
    help.exec();
}

void changelog::on_license_clicked()
{
    license license;
    license.setModal(true);
    license.exec();
}

void changelog::on_close_clicked()
{
    close();
}
