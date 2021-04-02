/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QLocale>
#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QPushButton *black;
    QPushButton *blue;
    QPushButton *bluegrey;
    QPushButton *breeze;
    QPushButton *brown;
    QPushButton *cyan;
    QPushButton *deeporange;
    QPushButton *green;
    QPushButton *grey;
    QPushButton *indigo;
    QPushButton *revert;
    QPushButton *magenta;
    QPushButton *nordic;
    QPushButton *orange;
    QPushButton *palebrown;
    QPushButton *paleorange;
    QPushButton *pink;
    QPushButton *red;
    QPushButton *teal;
    QPushButton *violet;
    QPushButton *white;
    QPushButton *yaru;
    QPushButton *yellow;
    QPushButton *exit;
    QPushButton *pushButton_2;
    QPushButton *pushButton;
    QPushButton *previewc;
    QPushButton *extra;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(391, 392);
        MainWindow->setMinimumSize(QSize(360, 300));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/colors.png"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindow->setWindowIcon(icon);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        black = new QPushButton(centralwidget);
        black->setObjectName(QString::fromUtf8("black"));

        gridLayout->addWidget(black, 0, 0, 1, 1);

        blue = new QPushButton(centralwidget);
        blue->setObjectName(QString::fromUtf8("blue"));

        gridLayout->addWidget(blue, 0, 1, 1, 1);

        bluegrey = new QPushButton(centralwidget);
        bluegrey->setObjectName(QString::fromUtf8("bluegrey"));

        gridLayout->addWidget(bluegrey, 1, 0, 1, 1);

        breeze = new QPushButton(centralwidget);
        breeze->setObjectName(QString::fromUtf8("breeze"));

        gridLayout->addWidget(breeze, 1, 1, 1, 1);

        brown = new QPushButton(centralwidget);
        brown->setObjectName(QString::fromUtf8("brown"));

        gridLayout->addWidget(brown, 2, 0, 1, 1);

        cyan = new QPushButton(centralwidget);
        cyan->setObjectName(QString::fromUtf8("cyan"));

        gridLayout->addWidget(cyan, 2, 1, 1, 1);

        deeporange = new QPushButton(centralwidget);
        deeporange->setObjectName(QString::fromUtf8("deeporange"));

        gridLayout->addWidget(deeporange, 3, 0, 1, 1);

        green = new QPushButton(centralwidget);
        green->setObjectName(QString::fromUtf8("green"));

        gridLayout->addWidget(green, 3, 1, 1, 1);

        grey = new QPushButton(centralwidget);
        grey->setObjectName(QString::fromUtf8("grey"));
        grey->setLocale(QLocale(QLocale::Spanish, QLocale::Mexico));

        gridLayout->addWidget(grey, 4, 0, 1, 1);

        indigo = new QPushButton(centralwidget);
        indigo->setObjectName(QString::fromUtf8("indigo"));

        gridLayout->addWidget(indigo, 4, 1, 1, 1);

        revert = new QPushButton(centralwidget);
        revert->setObjectName(QString::fromUtf8("revert"));

        gridLayout->addWidget(revert, 4, 2, 1, 2);

        magenta = new QPushButton(centralwidget);
        magenta->setObjectName(QString::fromUtf8("magenta"));

        gridLayout->addWidget(magenta, 5, 0, 1, 1);

        nordic = new QPushButton(centralwidget);
        nordic->setObjectName(QString::fromUtf8("nordic"));

        gridLayout->addWidget(nordic, 5, 1, 1, 1);

        orange = new QPushButton(centralwidget);
        orange->setObjectName(QString::fromUtf8("orange"));

        gridLayout->addWidget(orange, 6, 0, 1, 1);

        palebrown = new QPushButton(centralwidget);
        palebrown->setObjectName(QString::fromUtf8("palebrown"));

        gridLayout->addWidget(palebrown, 6, 1, 1, 1);

        paleorange = new QPushButton(centralwidget);
        paleorange->setObjectName(QString::fromUtf8("paleorange"));

        gridLayout->addWidget(paleorange, 7, 0, 1, 1);

        pink = new QPushButton(centralwidget);
        pink->setObjectName(QString::fromUtf8("pink"));

        gridLayout->addWidget(pink, 7, 1, 1, 1);

        red = new QPushButton(centralwidget);
        red->setObjectName(QString::fromUtf8("red"));

        gridLayout->addWidget(red, 8, 0, 1, 1);

        teal = new QPushButton(centralwidget);
        teal->setObjectName(QString::fromUtf8("teal"));

        gridLayout->addWidget(teal, 8, 1, 1, 1);

        violet = new QPushButton(centralwidget);
        violet->setObjectName(QString::fromUtf8("violet"));

        gridLayout->addWidget(violet, 9, 0, 1, 1);

        white = new QPushButton(centralwidget);
        white->setObjectName(QString::fromUtf8("white"));

        gridLayout->addWidget(white, 9, 1, 1, 1);

        yaru = new QPushButton(centralwidget);
        yaru->setObjectName(QString::fromUtf8("yaru"));

        gridLayout->addWidget(yaru, 10, 0, 1, 1);

        yellow = new QPushButton(centralwidget);
        yellow->setObjectName(QString::fromUtf8("yellow"));

        gridLayout->addWidget(yellow, 10, 1, 1, 1);

        exit = new QPushButton(centralwidget);
        exit->setObjectName(QString::fromUtf8("exit"));

        gridLayout->addWidget(exit, 5, 2, 1, 2);

        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));

        gridLayout->addWidget(pushButton_2, 0, 2, 1, 2);

        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        gridLayout->addWidget(pushButton, 1, 2, 1, 2);

        previewc = new QPushButton(centralwidget);
        previewc->setObjectName(QString::fromUtf8("previewc"));

        gridLayout->addWidget(previewc, 2, 2, 1, 2);

        extra = new QPushButton(centralwidget);
        extra->setObjectName(QString::fromUtf8("extra"));

        gridLayout->addWidget(extra, 3, 2, 1, 2);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 391, 23));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "Change the papirus folder color", nullptr));
        black->setText(QCoreApplication::translate("MainWindow", "Black", nullptr));
        blue->setText(QCoreApplication::translate("MainWindow", "Blue", nullptr));
        bluegrey->setText(QCoreApplication::translate("MainWindow", "Blue Grey", nullptr));
        breeze->setText(QCoreApplication::translate("MainWindow", "Breeze", nullptr));
        brown->setText(QCoreApplication::translate("MainWindow", "Brown", nullptr));
        cyan->setText(QCoreApplication::translate("MainWindow", "Cyan", nullptr));
        deeporange->setText(QCoreApplication::translate("MainWindow", "Deep Orange", nullptr));
        green->setText(QCoreApplication::translate("MainWindow", "Green", nullptr));
        grey->setText(QCoreApplication::translate("MainWindow", "Grey", nullptr));
        indigo->setText(QCoreApplication::translate("MainWindow", "Indigo", nullptr));
        revert->setText(QCoreApplication::translate("MainWindow", "Revert to default", nullptr));
        magenta->setText(QCoreApplication::translate("MainWindow", "Magenta", nullptr));
        nordic->setText(QCoreApplication::translate("MainWindow", "Nordic", nullptr));
        orange->setText(QCoreApplication::translate("MainWindow", "Orange", nullptr));
        palebrown->setText(QCoreApplication::translate("MainWindow", "Pale brown", nullptr));
        paleorange->setText(QCoreApplication::translate("MainWindow", "Pale orange", nullptr));
        pink->setText(QCoreApplication::translate("MainWindow", "Pink", nullptr));
        red->setText(QCoreApplication::translate("MainWindow", "Red", nullptr));
        teal->setText(QCoreApplication::translate("MainWindow", "Teal", nullptr));
        violet->setText(QCoreApplication::translate("MainWindow", "Violet", nullptr));
        white->setText(QCoreApplication::translate("MainWindow", "White", nullptr));
        yaru->setText(QCoreApplication::translate("MainWindow", "Yaru", nullptr));
        yellow->setText(QCoreApplication::translate("MainWindow", "Yellow", nullptr));
        exit->setText(QCoreApplication::translate("MainWindow", "Exit", nullptr));
        pushButton_2->setText(QCoreApplication::translate("MainWindow", "Help", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "About", nullptr));
        previewc->setText(QCoreApplication::translate("MainWindow", "Colors preview", nullptr));
        extra->setText(QCoreApplication::translate("MainWindow", "Extra", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
