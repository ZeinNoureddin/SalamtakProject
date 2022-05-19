/********************************************************************************
** Form generated from reading UI file 'homepage.ui'
**
** Created by: Qt User Interface Compiler version 6.2.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HOMEPAGE_H
#define UI_HOMEPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Homepage
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout_4;
    QSpacerItem *horizontalSpacer_4;
    QSpacerItem *horizontalSpacer_5;
    QSpacerItem *verticalSpacer_7;
    QSpacerItem *verticalSpacer_5;
    QWidget *widget;
    QGridLayout *gridLayout_3;
    QGridLayout *gridLayout;
    QLabel *label_3;
    QSpacerItem *horizontalSpacer;
    QLabel *label_2;
    QPushButton *pushButton_5;
    QPushButton *pushButton_4;
    QLabel *label;
    QSpacerItem *verticalSpacer_3;
    QGridLayout *gridLayout_5;
    QPushButton *LabButton;
    QPushButton *pushButton_6;
    QPushButton *ReserveRoomButton;
    QPushButton *pushButton_2;
    QLabel *label_4;
    QSpacerItem *horizontalSpacer_6;
    QSpacerItem *verticalSpacer_6;
    QSpacerItem *verticalSpacer_4;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer_7;
    QPushButton *pushButton_7;
    QPushButton *PayforAssignedMedButton;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Homepage)
    {
        if (Homepage->objectName().isEmpty())
            Homepage->setObjectName(QString::fromUtf8("Homepage"));
        Homepage->resize(844, 498);
        Homepage->setCursor(QCursor(Qt::ArrowCursor));
        Homepage->setIconSize(QSize(48, 48));
        centralwidget = new QWidget(Homepage);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        gridLayout_4 = new QGridLayout(centralwidget);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_4->addItem(horizontalSpacer_4, 9, 2, 1, 1);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_4->addItem(horizontalSpacer_5, 9, 3, 1, 1);

        verticalSpacer_7 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_4->addItem(verticalSpacer_7, 8, 6, 1, 1);

        verticalSpacer_5 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_4->addItem(verticalSpacer_5, 6, 6, 1, 1);

        widget = new QWidget(centralwidget);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setStyleSheet(QString::fromUtf8("QWidget {background-color:rgb(66, 57, 57); color:rgb(255, 255, 255);\n"
"}\n"
""));
        gridLayout_3 = new QGridLayout(widget);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label_3 = new QLabel(widget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        QFont font;
        font.setBold(true);
        label_3->setFont(font);

        gridLayout->addWidget(label_3, 0, 1, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 0, 3, 1, 1);

        label_2 = new QLabel(widget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setFont(font);

        gridLayout->addWidget(label_2, 0, 0, 1, 1);

        pushButton_5 = new QPushButton(widget);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));
        pushButton_5->setFont(font);
        pushButton_5->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_5->setStyleSheet(QString::fromUtf8("QPushButton {color: white; border-radius: 6px;min-width: 80px;}"));
        pushButton_5->setFlat(true);

        gridLayout->addWidget(pushButton_5, 0, 5, 1, 1);

        pushButton_4 = new QPushButton(widget);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setFont(font);
        pushButton_4->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_4->setStyleSheet(QString::fromUtf8("QPushButton {color: white; border-radius: 6px;min-width: 80px;}"));
        pushButton_4->setFlat(true);

        gridLayout->addWidget(pushButton_4, 0, 4, 1, 1);

        label = new QLabel(widget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setFont(font);

        gridLayout->addWidget(label, 0, 2, 1, 1);


        gridLayout_3->addLayout(gridLayout, 0, 0, 1, 1);


        gridLayout_4->addWidget(widget, 0, 0, 1, 7);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_4->addItem(verticalSpacer_3, 9, 1, 1, 1);

        gridLayout_5 = new QGridLayout();
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        LabButton = new QPushButton(centralwidget);
        LabButton->setObjectName(QString::fromUtf8("LabButton"));
        LabButton->setCursor(QCursor(Qt::PointingHandCursor));
        LabButton->setFlat(false);

        gridLayout_5->addWidget(LabButton, 2, 0, 1, 1);

        pushButton_6 = new QPushButton(centralwidget);
        pushButton_6->setObjectName(QString::fromUtf8("pushButton_6"));
        pushButton_6->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_6->setFlat(false);

        gridLayout_5->addWidget(pushButton_6, 3, 0, 1, 1);

        ReserveRoomButton = new QPushButton(centralwidget);
        ReserveRoomButton->setObjectName(QString::fromUtf8("ReserveRoomButton"));
        ReserveRoomButton->setCursor(QCursor(Qt::PointingHandCursor));
        ReserveRoomButton->setFlat(false);

        gridLayout_5->addWidget(ReserveRoomButton, 0, 0, 1, 1);

        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_2->setFlat(false);

        gridLayout_5->addWidget(pushButton_2, 1, 0, 1, 1);


        gridLayout_4->addLayout(gridLayout_5, 3, 1, 1, 2);

        label_4 = new QLabel(centralwidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        QFont font1;
        font1.setPointSize(14);
        font1.setBold(true);
        label_4->setFont(font1);

        gridLayout_4->addWidget(label_4, 2, 1, 1, 2);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_4->addItem(horizontalSpacer_6, 9, 4, 1, 1);

        verticalSpacer_6 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_4->addItem(verticalSpacer_6, 7, 6, 1, 1);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_4->addItem(verticalSpacer_4, 5, 6, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_4->addItem(verticalSpacer, 1, 1, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_7);

        pushButton_7 = new QPushButton(centralwidget);
        pushButton_7->setObjectName(QString::fromUtf8("pushButton_7"));
        pushButton_7->setFont(font);
        pushButton_7->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_7->setFlat(true);

        horizontalLayout->addWidget(pushButton_7);


        gridLayout_4->addLayout(horizontalLayout, 9, 6, 1, 1);

        PayforAssignedMedButton = new QPushButton(centralwidget);
        PayforAssignedMedButton->setObjectName(QString::fromUtf8("PayforAssignedMedButton"));

        gridLayout_4->addWidget(PayforAssignedMedButton, 6, 1, 1, 2);

        Homepage->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Homepage);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 844, 25));
        Homepage->setMenuBar(menubar);
        statusbar = new QStatusBar(Homepage);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        Homepage->setStatusBar(statusbar);

        retranslateUi(Homepage);

        pushButton_5->setDefault(false);
        pushButton_4->setDefault(false);


        QMetaObject::connectSlotsByName(Homepage);
    } // setupUi

    void retranslateUi(QMainWindow *Homepage)
    {
        Homepage->setWindowTitle(QCoreApplication::translate("Homepage", "MainWindow", nullptr));
        label_3->setText(QCoreApplication::translate("Homepage", "Last name", nullptr));
        label_2->setText(QCoreApplication::translate("Homepage", "First name", nullptr));
        pushButton_5->setText(QCoreApplication::translate("Homepage", "Log out", nullptr));
        pushButton_4->setText(QCoreApplication::translate("Homepage", "My Account", nullptr));
        label->setText(QCoreApplication::translate("Homepage", "Balance: ", nullptr));
        LabButton->setText(QCoreApplication::translate("Homepage", "Reserve Lab", nullptr));
        pushButton_6->setText(QCoreApplication::translate("Homepage", "View reservations", nullptr));
        ReserveRoomButton->setText(QCoreApplication::translate("Homepage", "Reserve room", nullptr));
        pushButton_2->setText(QCoreApplication::translate("Homepage", "Reserve clinic appointment", nullptr));
        label_4->setText(QCoreApplication::translate("Homepage", "Reservations", nullptr));
        pushButton_7->setText(QCoreApplication::translate("Homepage", "Contact us", nullptr));
        PayforAssignedMedButton->setText(QCoreApplication::translate("Homepage", "Pay for assigned Medicine", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Homepage: public Ui_Homepage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HOMEPAGE_H
