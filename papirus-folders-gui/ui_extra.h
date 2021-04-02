/********************************************************************************
** Form generated from reading UI file 'extra.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EXTRA_H
#define UI_EXTRA_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_extra
{
public:
    QVBoxLayout *verticalLayout;
    QPushButton *papirus;
    QPushButton *colors;
    QPushButton *polkit;
    QPushButton *close;

    void setupUi(QDialog *extra)
    {
        if (extra->objectName().isEmpty())
            extra->setObjectName(QString::fromUtf8("extra"));
        extra->resize(400, 300);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/colors.png"), QSize(), QIcon::Normal, QIcon::Off);
        extra->setWindowIcon(icon);
        verticalLayout = new QVBoxLayout(extra);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        papirus = new QPushButton(extra);
        papirus->setObjectName(QString::fromUtf8("papirus"));

        verticalLayout->addWidget(papirus);

        colors = new QPushButton(extra);
        colors->setObjectName(QString::fromUtf8("colors"));

        verticalLayout->addWidget(colors);

        polkit = new QPushButton(extra);
        polkit->setObjectName(QString::fromUtf8("polkit"));

        verticalLayout->addWidget(polkit);

        close = new QPushButton(extra);
        close->setObjectName(QString::fromUtf8("close"));

        verticalLayout->addWidget(close);


        retranslateUi(extra);

        QMetaObject::connectSlotsByName(extra);
    } // setupUi

    void retranslateUi(QDialog *extra)
    {
        extra->setWindowTitle(QCoreApplication::translate("extra", "Extra", nullptr));
        papirus->setText(QCoreApplication::translate("extra", "How to install \"papirus-folders\"", nullptr));
        colors->setText(QCoreApplication::translate("extra", "Colors Preview", nullptr));
        polkit->setText(QCoreApplication::translate("extra", "How to start the 'Polkit daemon\"", nullptr));
        close->setText(QCoreApplication::translate("extra", "Close Window", nullptr));
    } // retranslateUi

};

namespace Ui {
    class extra: public Ui_extra {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EXTRA_H
