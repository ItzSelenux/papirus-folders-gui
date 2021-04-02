/********************************************************************************
** Form generated from reading UI file 'papirus.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PAPIRUS_H
#define UI_PAPIRUS_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_papirus
{
public:
    QVBoxLayout *verticalLayout;
    QTextBrowser *textBrowser;
    QPushButton *pushButton;

    void setupUi(QDialog *papirus)
    {
        if (papirus->objectName().isEmpty())
            papirus->setObjectName(QString::fromUtf8("papirus"));
        papirus->resize(550, 490);
        papirus->setMinimumSize(QSize(550, 490));
        papirus->setBaseSize(QSize(550, 440));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/colors.png"), QSize(), QIcon::Normal, QIcon::Off);
        papirus->setWindowIcon(icon);
        verticalLayout = new QVBoxLayout(papirus);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        textBrowser = new QTextBrowser(papirus);
        textBrowser->setObjectName(QString::fromUtf8("textBrowser"));

        verticalLayout->addWidget(textBrowser);

        pushButton = new QPushButton(papirus);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        verticalLayout->addWidget(pushButton);


        retranslateUi(papirus);

        QMetaObject::connectSlotsByName(papirus);
    } // setupUi

    void retranslateUi(QDialog *papirus)
    {
        papirus->setWindowTitle(QCoreApplication::translate("papirus", "How to install papirus-folders", nullptr));
        textBrowser->setHtml(QCoreApplication::translate("papirus", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Ubuntu'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:16pt;\">How to install \342\200\234papirus-folders\342\200\235</span></p>\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:14pt;\">Universal Method</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:12pt;\">Install</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin"
                        "-right:0px; -qt-block-indent:0; text-indent:0px;\">   <span style=\" font-size:10pt; font-weight:600; font-style:italic;\">wget -qO- https://git.io/papirus-folders-install | sh</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:12pt;\">Uninstall</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">   <span style=\" font-size:10pt; font-weight:600; font-style:italic;\">wget -qO- https://git.io/papirus-folders-install | env uninstall=true sh</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p>\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:14pt;\">Ubuntu and derivates</span></p>\n"
"<p st"
                        "yle=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:14pt;\">execute the next commands</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">   <span style=\" font-size:10pt; font-weight:600; font-style:italic;\">sudo add-apt-repository ppa:papirus/papirus</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:10pt; font-weight:600; font-style:italic;\">   sudo apt-get update</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:10pt; font-weight:600; font-style:italic;\">   sudo apt-get install papirus-folders</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt"
                        "-block-indent:0; text-indent:0px;\"><br /></p>\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:14pt;\">Arch and derivates</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:12pt;\">first install an AUR helper (paru,yay,pamac,etc)</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:12pt;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:12pt;\">then run the next command (may vary depending on the AUR helper)</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">   <span style=\" f"
                        "ont-size:10pt; font-weight:600; font-style:italic;\">paru -S papirus-folders-git</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:10pt; font-weight:600; font-style:italic;\">   yay -S papirus-folders-git</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:10pt; font-weight:600; font-style:italic;\">   pamac install papirus-folders-git</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:10pt; font-weight:600; font-style:italic;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">for more information visit the <a href=\"https://github.com/PapirusDevelopmentTeam/papirus-folders\"><span style=\" te"
                        "xt-decoration: underline; color:#0000ff;\">papirus-folders GitHub</span></a></p></body></html>", nullptr));
        pushButton->setText(QCoreApplication::translate("papirus", "Close Window", nullptr));
    } // retranslateUi

};

namespace Ui {
    class papirus: public Ui_papirus {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PAPIRUS_H
