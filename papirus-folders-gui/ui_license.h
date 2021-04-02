/********************************************************************************
** Form generated from reading UI file 'license.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LICENSE_H
#define UI_LICENSE_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextBrowser>

QT_BEGIN_NAMESPACE

class Ui_license
{
public:
    QGridLayout *gridLayout;
    QTextBrowser *textBrowser;
    QLabel *label;
    QPushButton *pushButton;

    void setupUi(QDialog *license)
    {
        if (license->objectName().isEmpty())
            license->setObjectName(QString::fromUtf8("license"));
        license->resize(640, 270);
        license->setMinimumSize(QSize(640, 270));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/colors.png"), QSize(), QIcon::Normal, QIcon::Off);
        license->setWindowIcon(icon);
        gridLayout = new QGridLayout(license);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        textBrowser = new QTextBrowser(license);
        textBrowser->setObjectName(QString::fromUtf8("textBrowser"));

        gridLayout->addWidget(textBrowser, 2, 0, 1, 1);

        label = new QLabel(license);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 1, 0, 1, 1);

        pushButton = new QPushButton(license);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        gridLayout->addWidget(pushButton, 3, 0, 1, 1);


        retranslateUi(license);

        QMetaObject::connectSlotsByName(license);
    } // setupUi

    void retranslateUi(QDialog *license)
    {
        license->setWindowTitle(QCoreApplication::translate("license", "License", nullptr));
        textBrowser->setHtml(QCoreApplication::translate("license", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Ubuntu'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Cantarell'; font-size:10pt;\">This program is free software; you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation; either version 2 of the License, or (at your option) any later version.</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'Cantarell'; font-size:10pt;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-l"
                        "eft:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Cantarell'; font-size:10pt;\">This program is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'Cantarell'; font-size:10pt;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Cantarell'; font-size:10pt;\">You should have received a copy of the GNU General Public License along with this program; if not, write to the Free Software Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301, USA.</span></p></body></html>", nullptr));
        label->setText(QCoreApplication::translate("license", " papirus-folders-gui license", nullptr));
        pushButton->setText(QCoreApplication::translate("license", "Close window", nullptr));
    } // retranslateUi

};

namespace Ui {
    class license: public Ui_license {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LICENSE_H
