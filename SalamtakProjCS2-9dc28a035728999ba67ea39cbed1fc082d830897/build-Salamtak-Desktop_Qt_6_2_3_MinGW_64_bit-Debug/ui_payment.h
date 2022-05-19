/********************************************************************************
** Form generated from reading UI file 'payment.ui'
**
** Created by: Qt User Interface Compiler version 6.2.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PAYMENT_H
#define UI_PAYMENT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Payment
{
public:
    QWidget *centralwidget;
    QWidget *widget;
    QGridLayout *gridLayout_3;
    QGridLayout *gridLayout;
    QLabel *label_3;
    QPushButton *pushButton_5;
    QSpacerItem *horizontalSpacer;
    QLabel *label_2;
    QPushButton *pushButton_4;
    QLabel *label_4;
    QLabel *label_5;
    QComboBox *comboBox;
    QLabel *BalanceLabel;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *details3;
    QLabel *label_11;
    QLabel *label_12;
    QLabel *label_13;
    QPushButton *pushButton;
    QPushButton *PayButton;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout_2;
    QLabel *CardNumberLabel;
    QLineEdit *CVVTxbx;
    QLabel *CardNameLabel;
    QLineEdit *CardNumberTxbx;
    QLineEdit *CardNameTxbx;
    QLabel *ExpiryDateLabel;
    QLabel *CVVlabel;
    QDateEdit *ExpDateEdit;
    QLabel *CashPromptLabel;
    QLabel *label;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QLabel *label_9;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Payment)
    {
        if (Payment->objectName().isEmpty())
            Payment->setObjectName(QString::fromUtf8("Payment"));
        Payment->resize(820, 600);
        centralwidget = new QWidget(Payment);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        widget = new QWidget(centralwidget);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(0, 0, 822, 44));
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

        pushButton_5 = new QPushButton(widget);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));
        pushButton_5->setFont(font);
        pushButton_5->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_5->setStyleSheet(QString::fromUtf8("QPushButton {color: white; border-radius: 6px;min-width: 80px;}"));
        pushButton_5->setFlat(true);

        gridLayout->addWidget(pushButton_5, 0, 4, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 0, 2, 1, 1);

        label_2 = new QLabel(widget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setFont(font);

        gridLayout->addWidget(label_2, 0, 0, 1, 1);

        pushButton_4 = new QPushButton(widget);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setFont(font);
        pushButton_4->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_4->setStyleSheet(QString::fromUtf8("QPushButton {color: white; border-radius: 6px;min-width: 80px;}"));
        pushButton_4->setFlat(true);

        gridLayout->addWidget(pushButton_4, 0, 3, 1, 1);


        gridLayout_3->addLayout(gridLayout, 0, 0, 1, 1);

        label_4 = new QLabel(centralwidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(140, 90, 161, 20));
        label_5 = new QLabel(centralwidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(510, 160, 161, 20));
        comboBox = new QComboBox(centralwidget);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        comboBox->setGeometry(QRect(664, 160, 91, 24));
        BalanceLabel = new QLabel(centralwidget);
        BalanceLabel->setObjectName(QString::fromUtf8("BalanceLabel"));
        BalanceLabel->setGeometry(QRect(510, 200, 71, 16));
        label_6 = new QLabel(centralwidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(30, 410, 201, 20));
        label_7 = new QLabel(centralwidget);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(30, 130, 261, 20));
        details3 = new QLabel(centralwidget);
        details3->setObjectName(QString::fromUtf8("details3"));
        details3->setGeometry(QRect(30, 160, 241, 20));
        label_11 = new QLabel(centralwidget);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setGeometry(QRect(30, 190, 241, 20));
        label_12 = new QLabel(centralwidget);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setGeometry(QRect(30, 220, 241, 20));
        label_13 = new QLabel(centralwidget);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setGeometry(QRect(520, 70, 71, 16));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(580, 70, 111, 25));
        PayButton = new QPushButton(centralwidget);
        PayButton->setObjectName(QString::fromUtf8("PayButton"));
        PayButton->setGeometry(QRect(630, 410, 80, 25));
        gridLayoutWidget = new QWidget(centralwidget);
        gridLayoutWidget->setObjectName(QString::fromUtf8("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(510, 260, 203, 136));
        gridLayout_2 = new QGridLayout(gridLayoutWidget);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        CardNumberLabel = new QLabel(gridLayoutWidget);
        CardNumberLabel->setObjectName(QString::fromUtf8("CardNumberLabel"));

        gridLayout_2->addWidget(CardNumberLabel, 1, 0, 1, 1);

        CVVTxbx = new QLineEdit(gridLayoutWidget);
        CVVTxbx->setObjectName(QString::fromUtf8("CVVTxbx"));

        gridLayout_2->addWidget(CVVTxbx, 2, 1, 1, 1);

        CardNameLabel = new QLabel(gridLayoutWidget);
        CardNameLabel->setObjectName(QString::fromUtf8("CardNameLabel"));

        gridLayout_2->addWidget(CardNameLabel, 0, 0, 1, 1);

        CardNumberTxbx = new QLineEdit(gridLayoutWidget);
        CardNumberTxbx->setObjectName(QString::fromUtf8("CardNumberTxbx"));

        gridLayout_2->addWidget(CardNumberTxbx, 1, 1, 1, 1);

        CardNameTxbx = new QLineEdit(gridLayoutWidget);
        CardNameTxbx->setObjectName(QString::fromUtf8("CardNameTxbx"));

        gridLayout_2->addWidget(CardNameTxbx, 0, 1, 1, 1);

        ExpiryDateLabel = new QLabel(gridLayoutWidget);
        ExpiryDateLabel->setObjectName(QString::fromUtf8("ExpiryDateLabel"));

        gridLayout_2->addWidget(ExpiryDateLabel, 3, 0, 1, 1);

        CVVlabel = new QLabel(gridLayoutWidget);
        CVVlabel->setObjectName(QString::fromUtf8("CVVlabel"));

        gridLayout_2->addWidget(CVVlabel, 2, 0, 1, 1);

        ExpDateEdit = new QDateEdit(gridLayoutWidget);
        ExpDateEdit->setObjectName(QString::fromUtf8("ExpDateEdit"));

        gridLayout_2->addWidget(ExpDateEdit, 3, 1, 1, 1);

        CashPromptLabel = new QLabel(centralwidget);
        CashPromptLabel->setObjectName(QString::fromUtf8("CashPromptLabel"));
        CashPromptLabel->setGeometry(QRect(510, 230, 191, 20));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(510, 440, 221, 16));
        scrollArea = new QScrollArea(centralwidget);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setGeometry(QRect(30, 250, 211, 85));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 209, 83));
        label_9 = new QLabel(scrollAreaWidgetContents);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(0, 0, 201, 81));
        scrollArea->setWidget(scrollAreaWidgetContents);
        Payment->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Payment);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 820, 25));
        Payment->setMenuBar(menubar);
        statusbar = new QStatusBar(Payment);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        Payment->setStatusBar(statusbar);

        retranslateUi(Payment);

        pushButton_5->setDefault(false);
        pushButton_4->setDefault(false);


        QMetaObject::connectSlotsByName(Payment);
    } // setupUi

    void retranslateUi(QMainWindow *Payment)
    {
        Payment->setWindowTitle(QCoreApplication::translate("Payment", "MainWindow", nullptr));
        label_3->setText(QCoreApplication::translate("Payment", "Last name", nullptr));
        pushButton_5->setText(QCoreApplication::translate("Payment", "Log out", nullptr));
        label_2->setText(QCoreApplication::translate("Payment", "First name", nullptr));
        pushButton_4->setText(QCoreApplication::translate("Payment", "My Account", nullptr));
        label_4->setText(QCoreApplication::translate("Payment", "Payment", nullptr));
        label_5->setText(QCoreApplication::translate("Payment", "Payment method", nullptr));
        comboBox->setItemText(0, QCoreApplication::translate("Payment", "E-Wallet", nullptr));
        comboBox->setItemText(1, QCoreApplication::translate("Payment", "Insurance", nullptr));
        comboBox->setItemText(2, QCoreApplication::translate("Payment", "Cash", nullptr));
        comboBox->setItemText(3, QCoreApplication::translate("Payment", "Credit", nullptr));

        BalanceLabel->setText(QCoreApplication::translate("Payment", "Balance", nullptr));
        label_6->setText(QCoreApplication::translate("Payment", "Outstanding pay: ", nullptr));
        label_7->setText(QCoreApplication::translate("Payment", "Type of Payment: Medicine", nullptr));
        details3->setText(QCoreApplication::translate("Payment", "details3", nullptr));
        label_11->setText(QCoreApplication::translate("Payment", "details4", nullptr));
        label_12->setText(QCoreApplication::translate("Payment", "details5", nullptr));
        label_13->setText(QCoreApplication::translate("Payment", "points:", nullptr));
        pushButton->setText(QCoreApplication::translate("Payment", "Redeem points", nullptr));
        PayButton->setText(QCoreApplication::translate("Payment", "Pay", nullptr));
        CardNumberLabel->setText(QCoreApplication::translate("Payment", "Card number", nullptr));
        CardNameLabel->setText(QCoreApplication::translate("Payment", "Card name:", nullptr));
        ExpiryDateLabel->setText(QCoreApplication::translate("Payment", "Expiry date", nullptr));
        CVVlabel->setText(QCoreApplication::translate("Payment", "CVV", nullptr));
        CashPromptLabel->setText(QCoreApplication::translate("Payment", "Please pay at the reception", nullptr));
        label->setText(QCoreApplication::translate("Payment", "PLease get insurance approval", nullptr));
        label_9->setText(QCoreApplication::translate("Payment", "detail1", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Payment: public Ui_Payment {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PAYMENT_H
