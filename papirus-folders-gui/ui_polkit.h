/********************************************************************************
** Form generated from reading UI file 'polkit.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_POLKIT_H
#define UI_POLKIT_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_polkit
{
public:
    QVBoxLayout *verticalLayout;
    QTextBrowser *textBrowser;
    QPushButton *close;

    void setupUi(QDialog *polkit)
    {
        if (polkit->objectName().isEmpty())
            polkit->setObjectName(QString::fromUtf8("polkit"));
        polkit->resize(450, 232);
        polkit->setMinimumSize(QSize(450, 232));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/colors.png"), QSize(), QIcon::Normal, QIcon::Off);
        polkit->setWindowIcon(icon);
        verticalLayout = new QVBoxLayout(polkit);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        textBrowser = new QTextBrowser(polkit);
        textBrowser->setObjectName(QString::fromUtf8("textBrowser"));

        verticalLayout->addWidget(textBrowser);

        close = new QPushButton(polkit);
        close->setObjectName(QString::fromUtf8("close"));

        verticalLayout->addWidget(close);


        retranslateUi(polkit);

        QMetaObject::connectSlotsByName(polkit);
    } // setupUi

    void retranslateUi(QDialog *polkit)
    {
        polkit->setWindowTitle(QCoreApplication::translate("polkit", "How to start the \"Polkit daemon\"", nullptr));
        textBrowser->setHtml(QCoreApplication::translate("polkit", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Ubuntu'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:16pt;\">How to start the &quot;Polkit daemon&quot;</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:14pt;\">open a terminal and run</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-i"
                        "ndent:0px;\"><span style=\" font-weight:600; font-style:italic;\">/usr/lib/polkit-gnome/polkit-gnome-authentication-agent-1</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-weight:600; font-style:italic;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:14pt;\">or search the file on your File Manager</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p></body></html>", nullptr));
        close->setText(QCoreApplication::translate("polkit", "Close Window", nullptr));
    } // retranslateUi

};

namespace Ui {
    class polkit: public Ui_polkit {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_POLKIT_H
