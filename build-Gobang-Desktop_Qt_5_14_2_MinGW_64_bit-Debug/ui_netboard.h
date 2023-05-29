/********************************************************************************
** Form generated from reading UI file 'netboard.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NETBOARD_H
#define UI_NETBOARD_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_NetBoard
{
public:

    void setupUi(QWidget *NetBoard)
    {
        if (NetBoard->objectName().isEmpty())
            NetBoard->setObjectName(QString::fromUtf8("NetBoard"));
        NetBoard->resize(430, 430);
        NetBoard->setMinimumSize(QSize(430, 430));
        NetBoard->setMaximumSize(QSize(430, 430));
        NetBoard->setCursor(QCursor(Qt::CrossCursor));
        NetBoard->setMouseTracking(true);

        retranslateUi(NetBoard);

        QMetaObject::connectSlotsByName(NetBoard);
    } // setupUi

    void retranslateUi(QWidget *NetBoard)
    {
        NetBoard->setWindowTitle(QCoreApplication::translate("NetBoard", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class NetBoard: public Ui_NetBoard {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NETBOARD_H
