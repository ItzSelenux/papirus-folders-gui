#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QProcess>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_black_clicked();

    void on_pushButton_clicked();

    void on_blue_clicked();

    void on_bluegrey_clicked();

    void on_breeze_clicked();

    void on_brown_clicked();

    void on_cyan_clicked();

    void on_deeporange_clicked();

    void on_green_clicked();

    void on_grey_clicked();

    void on_indigo_clicked();

    void on_magenta_clicked();

    void on_nordic_clicked();

    void on_orange_clicked();

    void on_palebrown_clicked();

    void on_paleorange_clicked();

    void on_pink_clicked();

    void on_red_clicked();

    void on_teal_clicked();

    void on_violet_clicked();

    void on_white_clicked();

    void on_yaru_clicked();

    void on_yellow_clicked();

    void on_revert_clicked();

    void on_dark_clicked();

    void on_light_clicked();

    void on_previewc_clicked();

    void on_pushButton_2_clicked();

    void on_exit_clicked();

    void on_extra_clicked();

private:
    Ui::MainWindow *ui;
    QProcess *folder;
};
#endif // MAINWINDOW_H
