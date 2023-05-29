/********************************************************************************
** Form generated from reading UI file 'netgame.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NETGAME_H
#define UI_NETGAME_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>
#include <netboard.h>

QT_BEGIN_NAMESPACE

class Ui_NetGame
{
public:
    NetBoard *netboard;
    QPushButton *closeBtn;
    QPushButton *minBtn;
    QTextEdit *msgRecord;
    QLabel *label_2;
    QWidget *widget;
    QLabel *label;
    QLabel *white_label;
    QLabel *black_label;
    QLabel *label_3;
    QLabel *connections;
    QLineEdit *EnterLineEdit;
    QPushButton *sendBtn;
    QWidget *widget_2;
    QPushButton *undoBtn;
    QPushButton *surrenderBtn;
    QPushButton *tieBtn;

    void setupUi(QWidget *NetGame)
    {
        if (NetGame->objectName().isEmpty())
            NetGame->setObjectName(QString::fromUtf8("NetGame"));
        NetGame->resize(640, 430);
        NetGame->setMinimumSize(QSize(630, 430));
        NetGame->setMaximumSize(QSize(640, 430));
        netboard = new NetBoard(NetGame);
        netboard->setObjectName(QString::fromUtf8("netboard"));
        netboard->setGeometry(QRect(0, 0, 430, 430));
        netboard->setMaximumSize(QSize(430, 430));
        closeBtn = new QPushButton(NetGame);
        closeBtn->setObjectName(QString::fromUtf8("closeBtn"));
        closeBtn->setGeometry(QRect(600, 0, 31, 31));
        closeBtn->setStyleSheet(QString::fromUtf8("border-image:url(:/img/close.png)"));
        minBtn = new QPushButton(NetGame);
        minBtn->setObjectName(QString::fromUtf8("minBtn"));
        minBtn->setGeometry(QRect(570, 0, 21, 31));
        minBtn->setStyleSheet(QString::fromUtf8("border-image:url(:/img/min.png)"));
        msgRecord = new QTextEdit(NetGame);
        msgRecord->setObjectName(QString::fromUtf8("msgRecord"));
        msgRecord->setGeometry(QRect(450, 130, 171, 211));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\256\213\344\275\223"));
        font.setPointSize(9);
        msgRecord->setFont(font);
        msgRecord->setReadOnly(true);
        label_2 = new QLabel(NetGame);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(450, 105, 61, 21));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font1.setPointSize(12);
        label_2->setFont(font1);
        label_2->setAlignment(Qt::AlignCenter);
        widget = new QWidget(NetGame);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(460, 30, 161, 71));
        label = new QLabel(widget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(-10, 10, 131, 31));
        QFont font2;
        font2.setFamily(QString::fromUtf8("\347\255\211\347\272\277"));
        font2.setPointSize(16);
        label->setFont(font2);
        label->setAlignment(Qt::AlignCenter);
        white_label = new QLabel(widget);
        white_label->setObjectName(QString::fromUtf8("white_label"));
        white_label->setGeometry(QRect(110, 10, 31, 31));
        white_label->setStyleSheet(QString::fromUtf8("border-image:url(:/img/white.png)"));
        black_label = new QLabel(widget);
        black_label->setObjectName(QString::fromUtf8("black_label"));
        black_label->setGeometry(QRect(110, 10, 31, 31));
        black_label->setStyleSheet(QString::fromUtf8("border-image:url(:/img/black.png)"));
        label_3 = new QLabel(widget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(12, 45, 81, 16));
        connections = new QLabel(widget);
        connections->setObjectName(QString::fromUtf8("connections"));
        connections->setGeometry(QRect(96, 45, 16, 16));
        EnterLineEdit = new QLineEdit(NetGame);
        EnterLineEdit->setObjectName(QString::fromUtf8("EnterLineEdit"));
        EnterLineEdit->setGeometry(QRect(450, 340, 141, 20));
        QFont font3;
        font3.setFamily(QString::fromUtf8("\345\256\213\344\275\223"));
        EnterLineEdit->setFont(font3);
        sendBtn = new QPushButton(NetGame);
        sendBtn->setObjectName(QString::fromUtf8("sendBtn"));
        sendBtn->setGeometry(QRect(589, 339, 33, 22));
        widget_2 = new QWidget(NetGame);
        widget_2->setObjectName(QString::fromUtf8("widget_2"));
        widget_2->setGeometry(QRect(450, 380, 171, 31));
        undoBtn = new QPushButton(widget_2);
        undoBtn->setObjectName(QString::fromUtf8("undoBtn"));
        undoBtn->setGeometry(QRect(0, 0, 51, 31));
        undoBtn->setStyleSheet(QString::fromUtf8("border-image:url(:/img/undo.png)"));
        surrenderBtn = new QPushButton(widget_2);
        surrenderBtn->setObjectName(QString::fromUtf8("surrenderBtn"));
        surrenderBtn->setGeometry(QRect(60, 0, 51, 31));
        surrenderBtn->setStyleSheet(QString::fromUtf8("border-image: url(:/img/surrender.png);"));
        tieBtn = new QPushButton(widget_2);
        tieBtn->setObjectName(QString::fromUtf8("tieBtn"));
        tieBtn->setGeometry(QRect(120, 0, 51, 31));
        tieBtn->setStyleSheet(QString::fromUtf8("border-image: url(:/img/tie.png);"));

        retranslateUi(NetGame);
        QObject::connect(minBtn, SIGNAL(clicked()), NetGame, SLOT(showMinimized()));
        QObject::connect(EnterLineEdit, SIGNAL(returnPressed()), sendBtn, SLOT(click()));

        QMetaObject::connectSlotsByName(NetGame);
    } // setupUi

    void retranslateUi(QWidget *NetGame)
    {
        NetGame->setWindowTitle(QCoreApplication::translate("NetGame", "Gobang: \350\201\224\346\234\272\345\257\271\346\210\230", nullptr));
        closeBtn->setText(QString());
        minBtn->setText(QString());
        label_2->setText(QCoreApplication::translate("NetGame", "\346\266\210\346\201\257\346\241\206", nullptr));
        label->setText(QCoreApplication::translate("NetGame", "\346\202\250\347\232\204\346\243\213\345\255\220:", nullptr));
        white_label->setText(QString());
        black_label->setText(QString());
        label_3->setText(QCoreApplication::translate("NetGame", "\345\275\223\345\211\215\350\277\236\346\216\245\344\272\272\346\225\260\357\274\232", nullptr));
        connections->setText(QCoreApplication::translate("NetGame", "0", nullptr));
        EnterLineEdit->setInputMask(QString());
        EnterLineEdit->setText(QString());
        EnterLineEdit->setPlaceholderText(QCoreApplication::translate("NetGame", "Enter", nullptr));
        sendBtn->setText(QCoreApplication::translate("NetGame", "\345\217\221\351\200\201", nullptr));
        undoBtn->setText(QString());
        surrenderBtn->setText(QString());
        tieBtn->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class NetGame: public Ui_NetGame {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NETGAME_H
