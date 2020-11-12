/********************************************************************************
** Form generated from reading UI file 'secdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SECDIALOG_H
#define UI_SECDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextBrowser>

QT_BEGIN_NAMESPACE

class Ui_secDialog
{
public:
    QGridLayout *gridLayout;
    QLabel *label;
    QPushButton *license;
    QLabel *label_pic;
    QLabel *name;
    QTextBrowser *textBrowser;
    QPushButton *help;
    QPushButton *pushButton;

    void setupUi(QDialog *secDialog)
    {
        if (secDialog->objectName().isEmpty())
            secDialog->setObjectName(QString::fromUtf8("secDialog"));
        secDialog->resize(398, 275);
        secDialog->setMinimumSize(QSize(64, 64));
        gridLayout = new QGridLayout(secDialog);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label = new QLabel(secDialog);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 2, 2, 1, 1);

        license = new QPushButton(secDialog);
        license->setObjectName(QString::fromUtf8("license"));

        gridLayout->addWidget(license, 4, 0, 1, 2);

        label_pic = new QLabel(secDialog);
        label_pic->setObjectName(QString::fromUtf8("label_pic"));
        label_pic->setPixmap(QPixmap(QString::fromUtf8("../folder-green.png")));

        gridLayout->addWidget(label_pic, 0, 2, 1, 1);

        name = new QLabel(secDialog);
        name->setObjectName(QString::fromUtf8("name"));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        name->setFont(font);

        gridLayout->addWidget(name, 1, 2, 1, 1);

        textBrowser = new QTextBrowser(secDialog);
        textBrowser->setObjectName(QString::fromUtf8("textBrowser"));

        gridLayout->addWidget(textBrowser, 3, 0, 1, 5);

        help = new QPushButton(secDialog);
        help->setObjectName(QString::fromUtf8("help"));

        gridLayout->addWidget(help, 4, 3, 1, 2);

        pushButton = new QPushButton(secDialog);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        gridLayout->addWidget(pushButton, 4, 2, 1, 1);

#if QT_CONFIG(shortcut)
        name->setBuddy(name);
#endif // QT_CONFIG(shortcut)

        retranslateUi(secDialog);

        QMetaObject::connectSlotsByName(secDialog);
    } // setupUi

    void retranslateUi(QDialog *secDialog)
    {
        secDialog->setWindowTitle(QCoreApplication::translate("secDialog", "About", nullptr));
        label->setText(QCoreApplication::translate("secDialog", "1.0", nullptr));
        license->setText(QCoreApplication::translate("secDialog", "License", nullptr));
        label_pic->setText(QString());
        name->setText(QCoreApplication::translate("secDialog", "papirus-folders-gui", nullptr));
        textBrowser->setHtml(QCoreApplication::translate("secDialog", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Cantarell'; font-size:10pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">papirus-folders-gui is only a graphical interface for papirus-folders, therefore it is necessary that papirus-folders be installed on your computer, papirus-folders is not owned by Selenux Software</p></body></html>", nullptr));
        help->setText(QCoreApplication::translate("secDialog", "help", nullptr));
        pushButton->setText(QCoreApplication::translate("secDialog", "Close window", nullptr));
    } // retranslateUi

};

namespace Ui {
    class secDialog: public Ui_secDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SECDIALOG_H
