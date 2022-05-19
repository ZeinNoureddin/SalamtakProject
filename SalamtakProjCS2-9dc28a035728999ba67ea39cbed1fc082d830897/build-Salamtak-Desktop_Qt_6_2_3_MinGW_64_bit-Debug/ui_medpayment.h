/********************************************************************************
** Form generated from reading UI file 'medpayment.ui'
**
** Created by: Qt User Interface Compiler version 6.2.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MEDPAYMENT_H
#define UI_MEDPAYMENT_H

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

class Ui_MedPayment
{
public:
    QWidget *centralwidget;
    QComboBox *comboBox;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label;
    QPushButton *pushButton;
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
    QLabel *BalanceLabel;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QLabel *Detail1Label;
    QLabel *label_7;
    QPushButton *PayButton;
    QLabel *label_13;
    QWidget *widget;
    QGridLayout *gridLayout_3;
    QGridLayout *gridLayout;
    QLabel *label_3;
    QPushButton *pushButton_5;
    QSpacerItem *horizontalSpacer;
    QLabel *label_2;
    QPushButton *pushButton_4;
    QLabel *CashPromptLabel;
    QLabel *label_4;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MedPayment)
    {
        if (MedPayment->objectName().isEmpty())
            MedPayment->setObjectName(QString::fromUtf8("MedPayment"));
        MedPayment->resize(826, 610);
        centralwidget = new QWidget(MedPayment);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        comboBox = new QComboBox(centralwidget);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        comboBox->setGeometry(QRect(664, 170, 91, 24));
        label_5 = new QLabel(centralwidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(510, 170, 161, 20));
        label_6 = new QLabel(centralwidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(30, 420, 201, 20));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(510, 450, 221, 16));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(580, 80, 111, 25));
        gridLayoutWidget = new QWidget(centralwidget);
        gridLayoutWidget->setObjectName(QString::fromUtf8("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(510, 270, 203, 136));
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

        BalanceLabel = new QLabel(centralwidget);
        BalanceLabel->setObjectName(QString::fromUtf8("BalanceLabel"));
        BalanceLabel->setGeometry(QRect(510, 210, 71, 16));
        scrollArea = new QScrollArea(centralwidget);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setGeometry(QRect(30, 260, 211, 85));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 209, 83));
        Detail1Label = new QLabel(scrollAreaWidgetContents);
        Detail1Label->setObjectName(QString::fromUtf8("Detail1Label"));
        Detail1Label->setGeometry(QRect(0, 0, 201, 81));
        scrollArea->setWidget(scrollAreaWidgetContents);
        label_7 = new QLabel(centralwidget);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(30, 140, 261, 20));
        PayButton = new QPushButton(centralwidget);
        PayButton->setObjectName(QString::fromUtf8("PayButton"));
        PayButton->setGeometry(QRect(630, 420, 80, 25));
        label_13 = new QLabel(centralwidget);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setGeometry(QRect(520, 80, 71, 16));
        widget = new QWidget(centralwidget);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(0, 10, 822, 44));
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

        CashPromptLabel = new QLabel(centralwidget);
        CashPromptLabel->setObjectName(QString::fromUtf8("CashPromptLabel"));
        CashPromptLabel->setGeometry(QRect(510, 240, 191, 20));
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(140, 100, 161, 20));
        MedPayment->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MedPayment);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 826, 25));
        MedPayment->setMenuBar(menubar);
        statusbar = new QStatusBar(MedPayment);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MedPayment->setStatusBar(statusbar);

        retranslateUi(MedPayment);

        pushButton_5->setDefault(false);
        pushButton_4->setDefault(false);


        QMetaObject::connectSlotsByName(MedPayment);
    } // setupUi

    void retranslateUi(QMainWindow *MedPayment)
    {
        MedPayment->setWindowTitle(QCoreApplication::translate("MedPayment", "MainWindow", nullptr));
        comboBox->setItemText(0, QCoreApplication::translate("MedPayment", "E-Wallet", nullptr));
        comboBox->setItemText(1, QCoreApplication::translate("MedPayment", "Insurance", nullptr));
        comboBox->setItemText(2, QCoreApplication::translate("MedPayment", "Cash", nullptr));
        comboBox->setItemText(3, QCoreApplication::translate("MedPayment", "Credit", nullptr));

        label_5->setText(QCoreApplication::translate("MedPayment", "Payment method", nullptr));
        label_6->setText(QCoreApplication::translate("MedPayment", "Outstanding pay: ", nullptr));
        label->setText(QCoreApplication::translate("MedPayment", "PLease get insurance approval", nullptr));
        pushButton->setText(QCoreApplication::translate("MedPayment", "Redeem points", nullptr));
        CardNumberLabel->setText(QCoreApplication::translate("MedPayment", "Card number", nullptr));
        CardNameLabel->setText(QCoreApplication::translate("MedPayment", "Card name:", nullptr));
        ExpiryDateLabel->setText(QCoreApplication::translate("MedPayment", "Expiry date", nullptr));
        CVVlabel->setText(QCoreApplication::translate("MedPayment", "CVV", nullptr));
        BalanceLabel->setText(QCoreApplication::translate("MedPayment", "Balance", nullptr));
        Detail1Label->setText(QCoreApplication::translate("MedPayment", "detail1", nullptr));
        label_7->setText(QCoreApplication::translate("MedPayment", "Type of Payment: Medicine", nullptr));
        PayButton->setText(QCoreApplication::translate("MedPayment", "Pay", nullptr));
        label_13->setText(QCoreApplication::translate("MedPayment", "points:", nullptr));
        label_3->setText(QCoreApplication::translate("MedPayment", "Last name", nullptr));
        pushButton_5->setText(QCoreApplication::translate("MedPayment", "Log out", nullptr));
        label_2->setText(QCoreApplication::translate("MedPayment", "First name", nullptr));
        pushButton_4->setText(QCoreApplication::translate("MedPayment", "My Account", nullptr));
        CashPromptLabel->setText(QCoreApplication::translate("MedPayment", "Please pay at the reception", nullptr));
        label_4->setText(QCoreApplication::translate("MedPayment", "Payment", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MedPayment: public Ui_MedPayment {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MEDPAYMENT_H
