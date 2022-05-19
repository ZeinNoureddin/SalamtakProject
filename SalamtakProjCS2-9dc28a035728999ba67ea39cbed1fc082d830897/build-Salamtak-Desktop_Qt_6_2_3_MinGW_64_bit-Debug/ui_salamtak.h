/********************************************************************************
** Form generated from reading UI file 'salamtak.ui'
**
** Created by: Qt User Interface Compiler version 6.2.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SALAMTAK_H
#define UI_SALAMTAK_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Salamtak
{
public:
    QWidget *centralwidget;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QLineEdit *PasswordTextbx;
    QLabel *ErrorPass;
    QLabel *PasswordLabel;
    QLabel *ErrorUser;
    QPushButton *LoginButton;
    QLabel *UserNameLabel;
    QLineEdit *UserNameTextbx;
    QHBoxLayout *horizontalLayout;
    QLabel *NoAccount;
    QPushButton *RegisterButton;
    QSpacerItem *horizontalSpacer;
    QSpacerItem *horizontalSpacer_2;
    QLabel *label;
    QPushButton *EmergencyButton;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Salamtak)
    {
        if (Salamtak->objectName().isEmpty())
            Salamtak->setObjectName(QString::fromUtf8("Salamtak"));
        Salamtak->resize(800, 600);
        centralwidget = new QWidget(Salamtak);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        gridLayoutWidget = new QWidget(centralwidget);
        gridLayoutWidget->setObjectName(QString::fromUtf8("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(220, 210, 336, 144));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        PasswordTextbx = new QLineEdit(gridLayoutWidget);
        PasswordTextbx->setObjectName(QString::fromUtf8("PasswordTextbx"));

        gridLayout->addWidget(PasswordTextbx, 1, 1, 1, 1);

        ErrorPass = new QLabel(gridLayoutWidget);
        ErrorPass->setObjectName(QString::fromUtf8("ErrorPass"));

        gridLayout->addWidget(ErrorPass, 1, 2, 1, 1);

        PasswordLabel = new QLabel(gridLayoutWidget);
        PasswordLabel->setObjectName(QString::fromUtf8("PasswordLabel"));

        gridLayout->addWidget(PasswordLabel, 1, 0, 1, 1);

        ErrorUser = new QLabel(gridLayoutWidget);
        ErrorUser->setObjectName(QString::fromUtf8("ErrorUser"));

        gridLayout->addWidget(ErrorUser, 0, 2, 1, 1);

        LoginButton = new QPushButton(gridLayoutWidget);
        LoginButton->setObjectName(QString::fromUtf8("LoginButton"));
        LoginButton->setCursor(QCursor(Qt::PointingHandCursor));

        gridLayout->addWidget(LoginButton, 3, 1, 1, 1);

        UserNameLabel = new QLabel(gridLayoutWidget);
        UserNameLabel->setObjectName(QString::fromUtf8("UserNameLabel"));

        gridLayout->addWidget(UserNameLabel, 0, 0, 1, 1);

        UserNameTextbx = new QLineEdit(gridLayoutWidget);
        UserNameTextbx->setObjectName(QString::fromUtf8("UserNameTextbx"));

        gridLayout->addWidget(UserNameTextbx, 0, 1, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        NoAccount = new QLabel(gridLayoutWidget);
        NoAccount->setObjectName(QString::fromUtf8("NoAccount"));

        horizontalLayout->addWidget(NoAccount);

        RegisterButton = new QPushButton(gridLayoutWidget);
        RegisterButton->setObjectName(QString::fromUtf8("RegisterButton"));
        QFont font;
        font.setBold(true);
        RegisterButton->setFont(font);
        RegisterButton->setCursor(QCursor(Qt::PointingHandCursor));
        RegisterButton->setFlat(true);

        horizontalLayout->addWidget(RegisterButton);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        gridLayout->addLayout(horizontalLayout, 5, 0, 1, 2);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 3, 0, 1, 1);

        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(220, 170, 61, 31));
        QFont font1;
        font1.setPointSize(14);
        font1.setBold(true);
        label->setFont(font1);
        EmergencyButton = new QPushButton(centralwidget);
        EmergencyButton->setObjectName(QString::fromUtf8("EmergencyButton"));
        EmergencyButton->setGeometry(QRect(310, 360, 135, 24));
        QFont font2;
        font2.setPointSize(8);
        font2.setBold(true);
        EmergencyButton->setFont(font2);
        EmergencyButton->setCursor(QCursor(Qt::PointingHandCursor));
        Salamtak->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Salamtak);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 25));
        Salamtak->setMenuBar(menubar);
        statusbar = new QStatusBar(Salamtak);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        Salamtak->setStatusBar(statusbar);

        retranslateUi(Salamtak);

        QMetaObject::connectSlotsByName(Salamtak);
    } // setupUi

    void retranslateUi(QMainWindow *Salamtak)
    {
        Salamtak->setWindowTitle(QCoreApplication::translate("Salamtak", "Salamtak", nullptr));
        PasswordTextbx->setText(QString());
        ErrorPass->setText(QCoreApplication::translate("Salamtak", "Error Pass", nullptr));
        PasswordLabel->setText(QCoreApplication::translate("Salamtak", "Password", nullptr));
        ErrorUser->setText(QCoreApplication::translate("Salamtak", "Error User", nullptr));
        LoginButton->setText(QCoreApplication::translate("Salamtak", "Login", nullptr));
        UserNameLabel->setText(QCoreApplication::translate("Salamtak", "User name", nullptr));
        UserNameTextbx->setText(QString());
        NoAccount->setText(QCoreApplication::translate("Salamtak", "Dont have an account?", nullptr));
        RegisterButton->setText(QCoreApplication::translate("Salamtak", "Register", nullptr));
        label->setText(QCoreApplication::translate("Salamtak", "Login", nullptr));
        EmergencyButton->setText(QCoreApplication::translate("Salamtak", "RESERVE EMERGENCY", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Salamtak: public Ui_Salamtak {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SALAMTAK_H
