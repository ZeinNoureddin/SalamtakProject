/********************************************************************************
** Form generated from reading UI file 'emergency.ui'
**
** Created by: Qt User Interface Compiler version 6.2.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EMERGENCY_H
#define UI_EMERGENCY_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Emergency
{
public:
    QWidget *centralwidget;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QLabel *label;
    QLabel *label_4;
    QSpacerItem *horizontalSpacer;
    QSpacerItem *horizontalSpacer_2;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_5;
    QLabel *label_6;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Emergency)
    {
        if (Emergency->objectName().isEmpty())
            Emergency->setObjectName(QString::fromUtf8("Emergency"));
        Emergency->resize(721, 395);
        centralwidget = new QWidget(Emergency);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        gridLayoutWidget = new QWidget(centralwidget);
        gridLayoutWidget->setObjectName(QString::fromUtf8("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(90, 40, 551, 251));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(gridLayoutWidget);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font;
        font.setPointSize(28);
        font.setBold(true);
        label->setFont(font);
        label->setStyleSheet(QString::fromUtf8("QLineEdit {color: yellow }"));

        gridLayout->addWidget(label, 1, 1, 1, 1);

        label_4 = new QLabel(gridLayoutWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout->addWidget(label_4, 4, 1, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 1, 0, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 1, 2, 1, 1);

        label_2 = new QLabel(gridLayoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 2, 0, 1, 1);

        label_3 = new QLabel(gridLayoutWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 3, 0, 1, 1);

        label_5 = new QLabel(gridLayoutWidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout->addWidget(label_5, 2, 1, 1, 1);

        label_6 = new QLabel(gridLayoutWidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        gridLayout->addWidget(label_6, 3, 1, 1, 1);

        Emergency->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Emergency);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 721, 25));
        Emergency->setMenuBar(menubar);
        statusbar = new QStatusBar(Emergency);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        Emergency->setStatusBar(statusbar);

        retranslateUi(Emergency);

        QMetaObject::connectSlotsByName(Emergency);
    } // setupUi

    void retranslateUi(QMainWindow *Emergency)
    {
        Emergency->setWindowTitle(QCoreApplication::translate("Emergency", "MainWindow", nullptr));
        label->setText(QCoreApplication::translate("Emergency", "Ticket", nullptr));
        label_4->setText(QString());
        label_2->setText(QCoreApplication::translate("Emergency", "Ticket no:", nullptr));
        label_3->setText(QCoreApplication::translate("Emergency", "Date of issue:", nullptr));
        label_5->setText(QCoreApplication::translate("Emergency", "TextLabel", nullptr));
        label_6->setText(QCoreApplication::translate("Emergency", "TextLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Emergency: public Ui_Emergency {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EMERGENCY_H
