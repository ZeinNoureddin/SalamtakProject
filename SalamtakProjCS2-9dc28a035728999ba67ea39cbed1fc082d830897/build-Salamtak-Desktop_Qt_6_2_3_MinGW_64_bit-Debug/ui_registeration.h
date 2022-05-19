/********************************************************************************
** Form generated from reading UI file 'registeration.ui'
**
** Created by: Qt User Interface Compiler version 6.2.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REGISTERATION_H
#define UI_REGISTERATION_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCalendarWidget>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Registeration
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QLabel *StreetNameLabel;
    QLabel *label_5;
    QLineEdit *lineEdit_10;
    QLabel *label_11;
    QLabel *label_13;
    QLineEdit *lineEdit_2;
    QLabel *label_2;
    QLineEdit *lineEdit_7;
    QLineEdit *lineEdit_8;
    QLabel *label_7;
    QLabel *label_9;
    QLabel *label_3;
    QLineEdit *lineEdit_5;
    QLabel *label_4;
    QLabel *label_8;
    QCalendarWidget *calendarWidget;
    QLabel *label_12;
    QLineEdit *lineEdit_6;
    QLineEdit *lineEdit_4;
    QLineEdit *lineEdit_3;
    QLineEdit *lineEdit_9;
    QLabel *label_6;
    QLineEdit *lineEdit;
    QLabel *label_20;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *label_14;
    QLabel *label_16;
    QLabel *label_18;
    QLabel *label_15;
    QWidget *verticalLayoutWidget_2;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_17;
    QLabel *label_25;
    QLabel *label_26;
    QLabel *label_27;
    QLabel *label_24;
    QLabel *label_23;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Registeration)
    {
        if (Registeration->objectName().isEmpty())
            Registeration->setObjectName(QString::fromUtf8("Registeration"));
        Registeration->resize(1176, 657);
        centralwidget = new QWidget(Registeration);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(210, 10, 49, 16));
        gridLayoutWidget = new QWidget(centralwidget);
        gridLayoutWidget->setObjectName(QString::fromUtf8("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(210, 40, 471, 547));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        StreetNameLabel = new QLabel(gridLayoutWidget);
        StreetNameLabel->setObjectName(QString::fromUtf8("StreetNameLabel"));

        gridLayout->addWidget(StreetNameLabel, 7, 1, 1, 1);

        label_5 = new QLabel(gridLayoutWidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout->addWidget(label_5, 3, 0, 1, 1);

        lineEdit_10 = new QLineEdit(gridLayoutWidget);
        lineEdit_10->setObjectName(QString::fromUtf8("lineEdit_10"));

        gridLayout->addWidget(lineEdit_10, 5, 2, 1, 1);

        label_11 = new QLabel(gridLayoutWidget);
        label_11->setObjectName(QString::fromUtf8("label_11"));

        gridLayout->addWidget(label_11, 8, 1, 1, 1);

        label_13 = new QLabel(gridLayoutWidget);
        label_13->setObjectName(QString::fromUtf8("label_13"));

        gridLayout->addWidget(label_13, 10, 1, 1, 1);

        lineEdit_2 = new QLineEdit(gridLayoutWidget);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));

        gridLayout->addWidget(lineEdit_2, 1, 1, 1, 2);

        label_2 = new QLabel(gridLayoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 0, 0, 1, 1);

        lineEdit_7 = new QLineEdit(gridLayoutWidget);
        lineEdit_7->setObjectName(QString::fromUtf8("lineEdit_7"));

        gridLayout->addWidget(lineEdit_7, 8, 2, 1, 1);

        lineEdit_8 = new QLineEdit(gridLayoutWidget);
        lineEdit_8->setObjectName(QString::fromUtf8("lineEdit_8"));

        gridLayout->addWidget(lineEdit_8, 7, 2, 1, 1);

        label_7 = new QLabel(gridLayoutWidget);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        gridLayout->addWidget(label_7, 5, 0, 1, 1);

        label_9 = new QLabel(gridLayoutWidget);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        gridLayout->addWidget(label_9, 6, 1, 1, 1);

        label_3 = new QLabel(gridLayoutWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 1, 0, 1, 1);

        lineEdit_5 = new QLineEdit(gridLayoutWidget);
        lineEdit_5->setObjectName(QString::fromUtf8("lineEdit_5"));

        gridLayout->addWidget(lineEdit_5, 10, 2, 1, 1);

        label_4 = new QLabel(gridLayoutWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout->addWidget(label_4, 2, 0, 1, 1);

        label_8 = new QLabel(gridLayoutWidget);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        gridLayout->addWidget(label_8, 5, 1, 1, 1);

        calendarWidget = new QCalendarWidget(gridLayoutWidget);
        calendarWidget->setObjectName(QString::fromUtf8("calendarWidget"));

        gridLayout->addWidget(calendarWidget, 4, 1, 1, 2);

        label_12 = new QLabel(gridLayoutWidget);
        label_12->setObjectName(QString::fromUtf8("label_12"));

        gridLayout->addWidget(label_12, 9, 1, 1, 1);

        lineEdit_6 = new QLineEdit(gridLayoutWidget);
        lineEdit_6->setObjectName(QString::fromUtf8("lineEdit_6"));

        gridLayout->addWidget(lineEdit_6, 9, 2, 1, 1);

        lineEdit_4 = new QLineEdit(gridLayoutWidget);
        lineEdit_4->setObjectName(QString::fromUtf8("lineEdit_4"));

        gridLayout->addWidget(lineEdit_4, 3, 1, 1, 2);

        lineEdit_3 = new QLineEdit(gridLayoutWidget);
        lineEdit_3->setObjectName(QString::fromUtf8("lineEdit_3"));

        gridLayout->addWidget(lineEdit_3, 2, 1, 1, 2);

        lineEdit_9 = new QLineEdit(gridLayoutWidget);
        lineEdit_9->setObjectName(QString::fromUtf8("lineEdit_9"));

        gridLayout->addWidget(lineEdit_9, 6, 2, 1, 1);

        label_6 = new QLabel(gridLayoutWidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        gridLayout->addWidget(label_6, 4, 0, 1, 1);

        lineEdit = new QLineEdit(gridLayoutWidget);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));

        gridLayout->addWidget(lineEdit, 0, 1, 1, 2);

        label_20 = new QLabel(centralwidget);
        label_20->setObjectName(QString::fromUtf8("label_20"));
        label_20->setGeometry(QRect(640, 250, 61, 16));
        verticalLayoutWidget = new QWidget(centralwidget);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(640, 40, 160, 121));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label_14 = new QLabel(verticalLayoutWidget);
        label_14->setObjectName(QString::fromUtf8("label_14"));

        verticalLayout->addWidget(label_14);

        label_16 = new QLabel(verticalLayoutWidget);
        label_16->setObjectName(QString::fromUtf8("label_16"));

        verticalLayout->addWidget(label_16);

        label_18 = new QLabel(verticalLayoutWidget);
        label_18->setObjectName(QString::fromUtf8("label_18"));

        verticalLayout->addWidget(label_18);

        label_15 = new QLabel(verticalLayoutWidget);
        label_15->setObjectName(QString::fromUtf8("label_15"));

        verticalLayout->addWidget(label_15);

        verticalLayoutWidget_2 = new QWidget(centralwidget);
        verticalLayoutWidget_2->setObjectName(QString::fromUtf8("verticalLayoutWidget_2"));
        verticalLayoutWidget_2->setGeometry(QRect(640, 350, 160, 181));
        verticalLayout_2 = new QVBoxLayout(verticalLayoutWidget_2);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_17 = new QLabel(verticalLayoutWidget_2);
        label_17->setObjectName(QString::fromUtf8("label_17"));

        verticalLayout_2->addWidget(label_17);

        label_25 = new QLabel(verticalLayoutWidget_2);
        label_25->setObjectName(QString::fromUtf8("label_25"));

        verticalLayout_2->addWidget(label_25);

        label_26 = new QLabel(verticalLayoutWidget_2);
        label_26->setObjectName(QString::fromUtf8("label_26"));

        verticalLayout_2->addWidget(label_26);

        label_27 = new QLabel(verticalLayoutWidget_2);
        label_27->setObjectName(QString::fromUtf8("label_27"));

        verticalLayout_2->addWidget(label_27);

        label_24 = new QLabel(verticalLayoutWidget_2);
        label_24->setObjectName(QString::fromUtf8("label_24"));

        verticalLayout_2->addWidget(label_24);

        label_23 = new QLabel(verticalLayoutWidget_2);
        label_23->setObjectName(QString::fromUtf8("label_23"));

        verticalLayout_2->addWidget(label_23);

        Registeration->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Registeration);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1176, 25));
        Registeration->setMenuBar(menubar);
        statusbar = new QStatusBar(Registeration);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        Registeration->setStatusBar(statusbar);

        retranslateUi(Registeration);

        QMetaObject::connectSlotsByName(Registeration);
    } // setupUi

    void retranslateUi(QMainWindow *Registeration)
    {
        Registeration->setWindowTitle(QCoreApplication::translate("Registeration", "MainWindow", nullptr));
        label->setText(QCoreApplication::translate("Registeration", "Register", nullptr));
        StreetNameLabel->setText(QCoreApplication::translate("Registeration", "Street Name", nullptr));
        label_5->setText(QCoreApplication::translate("Registeration", "Confirm Password", nullptr));
        label_11->setText(QCoreApplication::translate("Registeration", "Building number", nullptr));
        label_13->setText(QCoreApplication::translate("Registeration", "Appartment number", nullptr));
        label_2->setText(QCoreApplication::translate("Registeration", "User Name", nullptr));
        label_7->setText(QCoreApplication::translate("Registeration", "Address:", nullptr));
        label_9->setText(QCoreApplication::translate("Registeration", "Area", nullptr));
        label_3->setText(QCoreApplication::translate("Registeration", "E-mail", nullptr));
        label_4->setText(QCoreApplication::translate("Registeration", "Password", nullptr));
        label_8->setText(QCoreApplication::translate("Registeration", "City ", nullptr));
        label_12->setText(QCoreApplication::translate("Registeration", "Floor number", nullptr));
        label_6->setText(QCoreApplication::translate("Registeration", "Date of Birth", nullptr));
        label_20->setText(QCoreApplication::translate("Registeration", "Error Cal", nullptr));
        label_14->setText(QCoreApplication::translate("Registeration", "Error User", nullptr));
        label_16->setText(QCoreApplication::translate("Registeration", "Error email", nullptr));
        label_18->setText(QCoreApplication::translate("Registeration", "Error pass", nullptr));
        label_15->setText(QCoreApplication::translate("Registeration", "Error pass", nullptr));
        label_17->setText(QCoreApplication::translate("Registeration", "Error City", nullptr));
        label_25->setText(QCoreApplication::translate("Registeration", "Error Area", nullptr));
        label_26->setText(QCoreApplication::translate("Registeration", "Error name", nullptr));
        label_27->setText(QCoreApplication::translate("Registeration", "Error building", nullptr));
        label_24->setText(QCoreApplication::translate("Registeration", "Error number", nullptr));
        label_23->setText(QCoreApplication::translate("Registeration", "Error number", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Registeration: public Ui_Registeration {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REGISTERATION_H
