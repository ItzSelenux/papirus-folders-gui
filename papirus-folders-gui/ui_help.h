/********************************************************************************
** Form generated from reading UI file 'help.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HELP_H
#define UI_HELP_H

#include <QtCore/QLocale>
#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextBrowser>

QT_BEGIN_NAMESPACE

class Ui_help
{
public:
    QGridLayout *gridLayout;
    QLabel *label;
    QPushButton *pushButton;
    QTextBrowser *textBrowser;

    void setupUi(QDialog *help)
    {
        if (help->objectName().isEmpty())
            help->setObjectName(QString::fromUtf8("help"));
        help->resize(699, 432);
        help->setMinimumSize(QSize(699, 432));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/colors.png"), QSize(), QIcon::Normal, QIcon::Off);
        help->setWindowIcon(icon);
        gridLayout = new QGridLayout(help);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label = new QLabel(help);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 1, 0, 1, 1);

        pushButton = new QPushButton(help);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setLocale(QLocale(QLocale::English, QLocale::UnitedStates));

        gridLayout->addWidget(pushButton, 3, 0, 1, 1);

        textBrowser = new QTextBrowser(help);
        textBrowser->setObjectName(QString::fromUtf8("textBrowser"));
        textBrowser->setEnabled(true);
        textBrowser->setInputMethodHints(Qt::ImhNoTextHandles);

        gridLayout->addWidget(textBrowser, 2, 0, 1, 1);


        retranslateUi(help);

        QMetaObject::connectSlotsByName(help);
    } // setupUi

    void retranslateUi(QDialog *help)
    {
        help->setWindowTitle(QCoreApplication::translate("help", "Help", nullptr));
        label->setText(QCoreApplication::translate("help", "Help", nullptr));
        pushButton->setText(QCoreApplication::translate("help", "Close Help", nullptr));
        textBrowser->setHtml(QCoreApplication::translate("help", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Ubuntu'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Cantarell';\">*</span><span style=\" font-family:'Cantarell'; font-weight:600; font-style:italic;\">papirus-folders-gui </span><span style=\" font-family:'Cantarell';\">requires</span><span style=\" font-family:'Cantarell'; font-weight:600; font-style:italic;\"> papirus-folders</span><span style=\" font-family:'Cantarell';\"> to work, so if the program does not apply the color change, check that you have </span><span style=\" font-family:'Cantarell'; font-weight:600; font-style:italic;\">papirus-folders</span><span style=\" font-family:"
                        "'Cantarell';\"> installed</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'Cantarell';\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Cantarell';\">*You can install </span><span style=\" font-family:'Cantarell'; font-weight:600;\">papirus-folders</span><span style=\" font-family:'Cantarell';\"> following the &quot;How to install papirus-folders&quot; (Extra section) instructions, or from the  </span><a href=\"https://github.com/PapirusDevelopmentTeam/papirus-folders\"><span style=\" font-family:'Cantarell'; text-decoration: underline; color:#0057ae;\">papirus-folders GitHub Page</span></a></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'Cantarell';\"><br /><"
                        "/p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Cantarell';\">*It is recommended that when making the color change you restart your file explorer (it is recommended to kill the process with the task manager) to see the changes</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'Cantarell';\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">*If the color do not change please try to start the Polkit daemon with the &quot;How to start the &quot;Polkit Daemon&quot;&quot;(Extra Section) instructions</p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-botto"
                        "m:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Cantarell';\">*To see a preview of the colors of the folders open the section </span><span style=\" font-family:'Cantarell'; font-style:italic;\">&quot;Colors preview</span><span style=\" font-family:'Cantarell';\">&quot;</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'Cantarell';\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Cantarell';\">*To restore the color to the default of papirus press the button &quot;</span><span style=\" font-family:'Cantarell'; font-style:italic;\">Revert to default</span><span style=\" font-family:'Cantarell';\">&quot;</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0"
                        "px; -qt-block-indent:0; text-indent:0px; font-family:'Cantarell';\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Cantarell';\">*For more information about the program and its license see the section &quot;A</span><span style=\" font-family:'Cantarell'; font-style:italic;\">bout</span><span style=\" font-family:'Cantarell';\">&quot;</span></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class help: public Ui_help {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HELP_H
