#include "filemanager.h"
#include "ui_filemanager.h"

filemanager::filemanager(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::filemanager)
{
    ui->setupUi(this);
}

filemanager::~filemanager()
{
    delete ui;
}
