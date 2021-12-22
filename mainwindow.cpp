#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "secdialog.h"
#include "help.h"
#include <QInputDialog>
#include "papirus.h"
#include "polkit.h"
#include "filemanager.h"
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    x = new QProcess (this);

}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_black_clicked()
{
    x->start("pkexec papirus-folders -C black");
}

void MainWindow::on_blue_clicked()
{
    x->start("pkexec papirus-folders -C blue");
}

void MainWindow::on_bluegrey_clicked()
{
    x->start("pkexec papirus-folders -C bluegrey");
}

void MainWindow::on_breeze_clicked()
{
    x->start("pkexec papirus-folders -C breeze");
}

void MainWindow::on_brown_clicked()
{
    x->start("pkexec papirus-folders -C brown");
}

void MainWindow::on_carmine_clicked()
{
    x->start("pkexec papirus-folders -C carmine");
}

void MainWindow::on_cyan_clicked()
{
    x->start("pkexec papirus-folders -C cyan");
}

void MainWindow::on_deeporange_clicked()
{
    x->start("pkexec papirus-folders -C deeporange");
}

void MainWindow::on_green_clicked()
{
    x->start("pkexec papirus-folders -C green");
}

void MainWindow::on_grey_clicked()
{
    x->start("pkexec papirus-folders -C grey");
}

void MainWindow::on_indigo_clicked()
{
    x->start("pkexec papirus-folders -C indigo");
}

void MainWindow::on_magenta_clicked()
{
    x->start("pkexec papirus-folders -C magenta");
}

void MainWindow::on_nordic_clicked()
{
    x->start("pkexec papirus-folders -C nordic");
}

void MainWindow::on_orange_clicked()
{
    x->start("pkexec papirus-folders -C orange");
}

void MainWindow::on_palebrown_clicked()
{
    x->start("pkexec papirus-folders -C palebrown");
}

void MainWindow::on_paleorange_clicked()
{
    x->start("pkexec papirus-folders -C paleorange");
}

void MainWindow::on_pink_clicked()
{
    x->start("pkexec papirus-folders -C pink");
}

void MainWindow::on_red_clicked()
{
    x->start("pkexec papirus-folders -C red");
}

void MainWindow::on_teal_clicked()
{
    x->start("pkexec papirus-folders -C teal");
}

void MainWindow::on_violet_clicked()
{
    x->start("pkexec papirus-folders -C violet");
}

void MainWindow::on_white_clicked()
{
    x->start("pkexec papirus-folders -C white");
}

void MainWindow::on_yaru_clicked()
{
    x->start("pkexec papirus-folders -C yaru");
}

void MainWindow::on_yellow_clicked()
{
    x->start("pkexec papirus-folders -C yellow");
}

void MainWindow::on_revert_clicked()
{
     x->start("pkexec papirus-folders -D");
}

void MainWindow::on_kill_clicked()
{
    x->start("killall caja dolphin nautilus nemo pcmanfm spacefm thunar Thunar");
}

void MainWindow::on_help_triggered()
{
    help help;
    help.setModal(true);
    help.exec();
}


void MainWindow::on_about_triggered()
{
    secDialog secdialog;
    secdialog.setModal(true);
    secdialog.exec();
}


void MainWindow::on_filemanager_triggered()
{
    filemanager filemanager;
    filemanager.setModal(true);
    filemanager.exec();
}


void MainWindow::on_polkit_triggered()
{
    polkit polkit;
    polkit.setModal(true);
    polkit.exec();
}


void MainWindow::on_papirus_triggered()
{
    papirus papirus;
    papirus.setModal(true);
    papirus.exec();
}

void MainWindow::on_dark_cyan_clicked()
{
    x->start("pkexec papirus-folders -C darkcyan");
}

