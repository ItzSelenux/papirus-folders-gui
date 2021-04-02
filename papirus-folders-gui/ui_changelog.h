/********************************************************************************
** Form generated from reading UI file 'changelog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHANGELOG_H
#define UI_CHANGELOG_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_changelog
{
public:
    QGridLayout *gridLayout;
    QLabel *label;
    QTextBrowser *textBrowser;
    QPushButton *help;
    QPushButton *license;
    QPushButton *close;

    void setupUi(QWidget *changelog)
    {
        if (changelog->objectName().isEmpty())
            changelog->setObjectName(QString::fromUtf8("changelog"));
        changelog->resize(360, 260);
        changelog->setMinimumSize(QSize(360, 260));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/colors.png"), QSize(), QIcon::Normal, QIcon::Off);
        changelog->setWindowIcon(icon);
        gridLayout = new QGridLayout(changelog);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label = new QLabel(changelog);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 0, 1, 1, 1);

        textBrowser = new QTextBrowser(changelog);
        textBrowser->setObjectName(QString::fromUtf8("textBrowser"));

        gridLayout->addWidget(textBrowser, 1, 0, 1, 3);

        help = new QPushButton(changelog);
        help->setObjectName(QString::fromUtf8("help"));

        gridLayout->addWidget(help, 2, 0, 1, 1);

        license = new QPushButton(changelog);
        license->setObjectName(QString::fromUtf8("license"));

        gridLayout->addWidget(license, 2, 2, 1, 1);

        close = new QPushButton(changelog);
        close->setObjectName(QString::fromUtf8("close"));

        gridLayout->addWidget(close, 2, 1, 1, 1);


        retranslateUi(changelog);

        QMetaObject::connectSlotsByName(changelog);
    } // setupUi

    void retranslateUi(QWidget *changelog)
    {
        changelog->setWindowTitle(QCoreApplication::translate("changelog", "Changelog", nullptr));
        label->setText(QCoreApplication::translate("changelog", "Changelog", nullptr));
        textBrowser->setHtml(QCoreApplication::translate("changelog", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Ubuntu'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Cantarell';\">22/11/2020 - 1.0.  Release.</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Cantarell';\">08/01/2021 - 1.1.  &quot;zensu&quot; command was changed to the &quot;pkexec&quot; command for a better functionality.</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Cantarell';\">02/04/2021 - 1.2. Bug cor"
                        "rection and &quot;Extra&quot; section was added.</span></p></body></html>", nullptr));
        help->setText(QCoreApplication::translate("changelog", "Help", nullptr));
        license->setText(QCoreApplication::translate("changelog", "License", nullptr));
        close->setText(QCoreApplication::translate("changelog", "Close window", nullptr));
    } // retranslateUi

};

namespace Ui {
    class changelog: public Ui_changelog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHANGELOG_H
