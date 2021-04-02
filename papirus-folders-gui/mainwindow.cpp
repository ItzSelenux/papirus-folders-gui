#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "secdialog.h"
#include "colors.h"
#include "help.h"
#include <QTranslator>
#include "extra.h"
#include <QInputDialog>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    folder = new QProcess (this);

}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_black_clicked()
{
    folder->start("pkexec papirus-folders -C black");
}

void MainWindow::on_pushButton_clicked()
{
    secDialog secdialog;
    secdialog.setModal(true);
    secdialog.exec();
}

void MainWindow::on_blue_clicked()
{
    folder->start("pkexec papirus-folders -C blue");
}

void MainWindow::on_bluegrey_clicked()
{
    folder->start("pkexec papirus-folders -C bluegrey");
}

void MainWindow::on_breeze_clicked()
{
    folder->start("pkexec papirus-folders -C breeze");
}

void MainWindow::on_brown_clicked()
{
    folder->start("pkexec papirus-folders -C brown");
}

void MainWindow::on_cyan_clicked()
{
    folder->start("pkexec papirus-folders -C cyan");
}

void MainWindow::on_deeporange_clicked()
{
    folder->start("pkexec papirus-folders -C deeporange");
}

void MainWindow::on_green_clicked()
{
    folder->start("pkexec papirus-folders -C green");
}

void MainWindow::on_grey_clicked()
{
    folder->start("pkexec papirus-folders -C grey");
}

void MainWindow::on_indigo_clicked()
{
    folder->start("pkexec papirus-folders -C indigo");
}

void MainWindow::on_magenta_clicked()
{
    folder->start("pkexec papirus-folders -C magenta");
}

void MainWindow::on_nordic_clicked()
{
    folder->start("pkexec papirus-folders -C nordic");
}

void MainWindow::on_orange_clicked()
{
    folder->start("pkexec papirus-folders -C orange");
}

void MainWindow::on_palebrown_clicked()
{
    folder->start("pkexec papirus-folders -C palebrown");
}

void MainWindow::on_paleorange_clicked()
{
    folder->start("pkexec papirus-folders -C paleorange");
}

void MainWindow::on_pink_clicked()
{
    folder->start("pkexec papirus-folders -C pink");
}

void MainWindow::on_red_clicked()
{
    folder->start("pkexec papirus-folders -C red");
}

void MainWindow::on_teal_clicked()
{
    folder->start("pkexec papirus-folders -C teal");
}

void MainWindow::on_violet_clicked()
{
    folder->start("pkexec papirus-folders -C violet");
}

void MainWindow::on_white_clicked()
{
    folder->start("pkexec papirus-folders -C white");
}

void MainWindow::on_yaru_clicked()
{
    folder->start("pkexec papirus-folders -C yaru");
}

void MainWindow::on_yellow_clicked()
{
    folder->start("pkexec papirus-folders -C yellow");
}

void MainWindow::on_revert_clicked()
{
     folder->start("pkexec papirus-folders -D");
}

void MainWindow::on_dark_clicked()
{
    folder->start("pkexec papirus-folders -t Papirus-Dark");
}

void MainWindow::on_light_clicked()
{
    folder->start("pkexec papirus-folders -t Papirus-Light");
}

void MainWindow::on_previewc_clicked()
{
    colors colors;
    colors.setModal(true);
    colors.exec();
}

void MainWindow::on_pushButton_2_clicked()
{
    help help;
    help.setModal(true);
    help.exec();
}

void MainWindow::on_exit_clicked()
{
    close();
}
//end

void MainWindow::on_extra_clicked()
{
    extra extra;
    extra.setModal(true);
    extra.exec();
}
