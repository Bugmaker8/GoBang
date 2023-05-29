/********************************************************************************
** Form generated from reading UI file 'gamecontrol.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GAMECONTROL_H
#define UI_GAMECONTROL_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include <chessboard.h>

QT_BEGIN_NAMESPACE

class Ui_GameControl
{
public:
    ChessBoard *chessboard;
    QWidget *widget_5;
    QWidget *widget_3;
    QVBoxLayout *verticalLayout;
    QLabel *label_2;
    QLabel *label;
    QLCDNumber *Black_timer;
    QWidget *widget_4;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_3;
    QLabel *label_4;
    QLCDNumber *White_timer;
    QPushButton *Return_btn;
    QPushButton *Undo_btn;
    QPushButton *min_btn;

    void setupUi(QWidget *GameControl)
    {
        if (GameControl->objectName().isEmpty())
            GameControl->setObjectName(QString::fromUtf8("GameControl"));
        GameControl->resize(630, 430);
        GameControl->setMinimumSize(QSize(630, 430));
        GameControl->setMaximumSize(QSize(630, 430));
        chessboard = new ChessBoard(GameControl);
        chessboard->setObjectName(QString::fromUtf8("chessboard"));
        chessboard->setGeometry(QRect(0, 0, 430, 430));
        widget_5 = new QWidget(GameControl);
        widget_5->setObjectName(QString::fromUtf8("widget_5"));
        widget_5->setGeometry(QRect(430, 0, 201, 431));
        QPalette palette;
        QBrush brush(QColor(255, 255, 255, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Base, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush);
        QBrush brush1(QColor(177, 114, 60, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        widget_5->setPalette(palette);
        widget_3 = new QWidget(widget_5);
        widget_3->setObjectName(QString::fromUtf8("widget_3"));
        widget_3->setGeometry(QRect(30, 50, 141, 151));
        verticalLayout = new QVBoxLayout(widget_3);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label_2 = new QLabel(widget_3);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setPixmap(QPixmap(QString::fromUtf8(":/img/black.png")));
        label_2->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label_2);

        label = new QLabel(widget_3);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font.setPointSize(18);
        label->setFont(font);
        label->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label);

        Black_timer = new QLCDNumber(widget_3);
        Black_timer->setObjectName(QString::fromUtf8("Black_timer"));
        Black_timer->setDigitCount(5);
        Black_timer->setSegmentStyle(QLCDNumber::Flat);

        verticalLayout->addWidget(Black_timer);

        widget_4 = new QWidget(widget_5);
        widget_4->setObjectName(QString::fromUtf8("widget_4"));
        widget_4->setGeometry(QRect(30, 210, 141, 151));
        verticalLayout_2 = new QVBoxLayout(widget_4);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        label_3 = new QLabel(widget_4);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setPixmap(QPixmap(QString::fromUtf8(":/img/white.png")));
        label_3->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(label_3);

        label_4 = new QLabel(widget_4);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setFont(font);
        label_4->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(label_4);

        White_timer = new QLCDNumber(widget_4);
        White_timer->setObjectName(QString::fromUtf8("White_timer"));
        White_timer->setDigitCount(5);
        White_timer->setSegmentStyle(QLCDNumber::Flat);

        verticalLayout_2->addWidget(White_timer);

        Return_btn = new QPushButton(widget_5);
        Return_btn->setObjectName(QString::fromUtf8("Return_btn"));
        Return_btn->setGeometry(QRect(170, 0, 31, 31));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Adobe Devanagari"));
        font1.setPointSize(10);
        Return_btn->setFont(font1);
        Return_btn->setStyleSheet(QString::fromUtf8("border-image:url(:/img/close.png)"));
        Undo_btn = new QPushButton(widget_5);
        Undo_btn->setObjectName(QString::fromUtf8("Undo_btn"));
        Undo_btn->setGeometry(QRect(60, 370, 81, 41));
        Undo_btn->setFont(font1);
        Undo_btn->setStyleSheet(QString::fromUtf8("border-image:url(:/img/undo.png)"));
        min_btn = new QPushButton(widget_5);
        min_btn->setObjectName(QString::fromUtf8("min_btn"));
        min_btn->setGeometry(QRect(150, 0, 21, 31));
        min_btn->setStyleSheet(QString::fromUtf8("border-image:url(:/img/min.png)"));

        retranslateUi(GameControl);
        QObject::connect(min_btn, SIGNAL(clicked()), GameControl, SLOT(showMinimized()));

        QMetaObject::connectSlotsByName(GameControl);
    } // setupUi

    void retranslateUi(QWidget *GameControl)
    {
        GameControl->setWindowTitle(QCoreApplication::translate("GameControl", "Gobang: \346\234\254\345\234\260\345\257\271\346\210\230", nullptr));
        label_2->setText(QString());
        label->setText(QCoreApplication::translate("GameControl", "\345\200\222\350\256\241\346\227\266", nullptr));
        label_3->setText(QString());
        label_4->setText(QCoreApplication::translate("GameControl", "\345\200\222\350\256\241\346\227\266", nullptr));
        Return_btn->setText(QString());
        Undo_btn->setText(QString());
        min_btn->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class GameControl: public Ui_GameControl {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GAMECONTROL_H
