/********************************************************************************
** Form generated from reading UI file 'menu.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MENU_H
#define UI_MENU_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Menu
{
public:
    QWidget *centralwidget;
    QPushButton *close_btn;
    QPushButton *min_btn;
    QLabel *label;
    QLabel *label_2;
    QPushButton *AiGame_btn;
    QPushButton *LocalGame_btn;
    QPushButton *NetGame_btn;

    void setupUi(QMainWindow *Menu)
    {
        if (Menu->objectName().isEmpty())
            Menu->setObjectName(QString::fromUtf8("Menu"));
        Menu->resize(419, 630);
        Menu->setMinimumSize(QSize(419, 630));
        Menu->setMaximumSize(QSize(419, 630));
        centralwidget = new QWidget(Menu);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        close_btn = new QPushButton(centralwidget);
        close_btn->setObjectName(QString::fromUtf8("close_btn"));
        close_btn->setGeometry(QRect(390, 0, 31, 31));
        close_btn->setStyleSheet(QString::fromUtf8("border-image:url(:/img/close.png)"));
        min_btn = new QPushButton(centralwidget);
        min_btn->setObjectName(QString::fromUtf8("min_btn"));
        min_btn->setGeometry(QRect(365, 0, 25, 31));
        min_btn->setStyleSheet(QString::fromUtf8("border-image:url(:/img/min.png)"));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(0, 0, 419, 630));
        label->setStyleSheet(QString::fromUtf8("border-image:url(:/img/cover.png)"));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(20, 60, 391, 71));
        label_2->setStyleSheet(QString::fromUtf8("border-image:url(:/img/name.png)"));
        AiGame_btn = new QPushButton(centralwidget);
        AiGame_btn->setObjectName(QString::fromUtf8("AiGame_btn"));
        AiGame_btn->setGeometry(QRect(120, 240, 181, 61));
        QFont font;
        font.setFamily(QString::fromUtf8("\347\255\211\347\272\277"));
        font.setPointSize(12);
        AiGame_btn->setFont(font);
        AiGame_btn->setStyleSheet(QString::fromUtf8("border-image:url(:/img/aigame.png)"));
        LocalGame_btn = new QPushButton(centralwidget);
        LocalGame_btn->setObjectName(QString::fromUtf8("LocalGame_btn"));
        LocalGame_btn->setGeometry(QRect(120, 320, 181, 61));
        LocalGame_btn->setFont(font);
        LocalGame_btn->setStyleSheet(QString::fromUtf8("border-image:url(:/img/localgame.png)"));
        NetGame_btn = new QPushButton(centralwidget);
        NetGame_btn->setObjectName(QString::fromUtf8("NetGame_btn"));
        NetGame_btn->setGeometry(QRect(120, 400, 181, 61));
        NetGame_btn->setFont(font);
        NetGame_btn->setStyleSheet(QString::fromUtf8("border-image:url(:/img/netgame.png)"));
        Menu->setCentralWidget(centralwidget);
        label->raise();
        min_btn->raise();
        close_btn->raise();
        label_2->raise();
        AiGame_btn->raise();
        LocalGame_btn->raise();
        NetGame_btn->raise();

        retranslateUi(Menu);
        QObject::connect(close_btn, SIGNAL(released()), Menu, SLOT(close()));
        QObject::connect(min_btn, SIGNAL(released()), Menu, SLOT(showMinimized()));

        QMetaObject::connectSlotsByName(Menu);
    } // setupUi

    void retranslateUi(QMainWindow *Menu)
    {
        Menu->setWindowTitle(QCoreApplication::translate("Menu", "Gobang", nullptr));
        close_btn->setText(QString());
        min_btn->setText(QString());
        label->setText(QString());
        label_2->setText(QString());
        AiGame_btn->setText(QString());
        LocalGame_btn->setText(QString());
        NetGame_btn->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Menu: public Ui_Menu {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MENU_H
