/********************************************************************************
** Form generated from reading UI file 'secdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SECDIALOG_H
#define UI_SECDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
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
    QPushButton *close;
    QPushButton *license;
    QPushButton *help;
    QLabel *label_2;
    QLabel *name;
    QPushButton *pushButton;
    QTextBrowser *textBrowser;
    QLabel *label_pic;
    QLabel *label;

    void setupUi(QDialog *secDialog)
    {
        if (secDialog->objectName().isEmpty())
            secDialog->setObjectName(QString::fromUtf8("secDialog"));
        secDialog->resize(512, 275);
        secDialog->setMinimumSize(QSize(512, 275));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/colors.png"), QSize(), QIcon::Normal, QIcon::Off);
        secDialog->setWindowIcon(icon);
        gridLayout = new QGridLayout(secDialog);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        close = new QPushButton(secDialog);
        close->setObjectName(QString::fromUtf8("close"));

        gridLayout->addWidget(close, 5, 2, 1, 1);

        license = new QPushButton(secDialog);
        license->setObjectName(QString::fromUtf8("license"));

        gridLayout->addWidget(license, 5, 0, 1, 1);

        help = new QPushButton(secDialog);
        help->setObjectName(QString::fromUtf8("help"));

        gridLayout->addWidget(help, 5, 3, 1, 1);

        label_2 = new QLabel(secDialog);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_2, 3, 1, 1, 2);

        name = new QLabel(secDialog);
        name->setObjectName(QString::fromUtf8("name"));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        name->setFont(font);
        name->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(name, 1, 1, 1, 2);

        pushButton = new QPushButton(secDialog);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        gridLayout->addWidget(pushButton, 5, 1, 1, 1);

        textBrowser = new QTextBrowser(secDialog);
        textBrowser->setObjectName(QString::fromUtf8("textBrowser"));

        gridLayout->addWidget(textBrowser, 4, 0, 1, 4);

        label_pic = new QLabel(secDialog);
        label_pic->setObjectName(QString::fromUtf8("label_pic"));
        label_pic->setPixmap(QPixmap(QString::fromUtf8(":/colors.png")));
        label_pic->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_pic, 0, 1, 1, 2);

        label = new QLabel(secDialog);
        label->setObjectName(QString::fromUtf8("label"));
        label->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label, 2, 1, 1, 2);

#if QT_CONFIG(shortcut)
        name->setBuddy(name);
#endif // QT_CONFIG(shortcut)

        retranslateUi(secDialog);

        QMetaObject::connectSlotsByName(secDialog);
    } // setupUi

    void retranslateUi(QDialog *secDialog)
    {
        secDialog->setWindowTitle(QCoreApplication::translate("secDialog", "About", nullptr));
        close->setText(QCoreApplication::translate("secDialog", "Close Window", nullptr));
        license->setText(QCoreApplication::translate("secDialog", "License", nullptr));
        help->setText(QCoreApplication::translate("secDialog", "Help", nullptr));
        label_2->setText(QCoreApplication::translate("secDialog", "Selenux Software", nullptr));
        name->setText(QCoreApplication::translate("secDialog", "papirus-folders-gui", nullptr));
        pushButton->setText(QCoreApplication::translate("secDialog", "Changelog", nullptr));
        textBrowser->setHtml(QCoreApplication::translate("secDialog", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Ubuntu'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Cantarell'; font-size:10pt;\">papirus-folders-gui is only a graphical interface for papirus-folders, therefore it is necessary that papirus-folders be installed on your computer, papirus-folders is not owned by Selenux Software</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'Cantarell'; font-size:10pt;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-inden"
                        "t:0; text-indent:0px;\"><span style=\" font-family:'Cantarell'; font-size:10pt;\">you can download papirus-folders with this link: </span><a href=\"you can install papirus-folders with this link\"><span style=\" font-family:'Cantarell'; font-size:10pt; text-decoration: underline; color:#0057ae;\">papirus-folders GitHub Page</span></a></p></body></html>", nullptr));
        label_pic->setText(QString());
        label->setText(QCoreApplication::translate("secDialog", "1.2", nullptr));
    } // retranslateUi

};

namespace Ui {
    class secDialog: public Ui_secDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SECDIALOG_H
