#include "secdialog.h"
#include "ui_secdialog.h"
#include "license.h"
#include "credits.h"
#include "changelog.h"

secDialog::secDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::secDialog)
{
    ui->setupUi(this);
    //QPixmap pic("/home/itszariep/folder-green.png");
    //ui->label_pic->setPixmap(pic);
}

secDialog::~secDialog()
{
    delete ui;
}

void secDialog::on_license_clicked()
{
        license license;
        license.setModal(true);
        license.exec();

}

void secDialog::on_help_clicked()
{
    credits credits;
    credits.setModal(true);
    credits.exec();
}

void secDialog::on_pushButton_clicked()
{
    changelog changelog;
    changelog.setModal(true);
    changelog.exec();
}

void secDialog::on_close_clicked()
{
    close();
}
