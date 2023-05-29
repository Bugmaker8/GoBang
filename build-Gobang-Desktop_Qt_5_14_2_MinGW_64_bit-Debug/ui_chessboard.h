/********************************************************************************
** Form generated from reading UI file 'chessboard.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHESSBOARD_H
#define UI_CHESSBOARD_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ChessBoard
{
public:

    void setupUi(QWidget *ChessBoard)
    {
        if (ChessBoard->objectName().isEmpty())
            ChessBoard->setObjectName(QString::fromUtf8("ChessBoard"));
        ChessBoard->resize(430, 430);
        ChessBoard->setMinimumSize(QSize(430, 430));
        ChessBoard->setMaximumSize(QSize(430, 430));
        ChessBoard->setCursor(QCursor(Qt::CrossCursor));
        ChessBoard->setMouseTracking(true);

        retranslateUi(ChessBoard);

        QMetaObject::connectSlotsByName(ChessBoard);
    } // setupUi

    void retranslateUi(QWidget *ChessBoard)
    {
        ChessBoard->setWindowTitle(QCoreApplication::translate("ChessBoard", "Gobang", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ChessBoard: public Ui_ChessBoard {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHESSBOARD_H
