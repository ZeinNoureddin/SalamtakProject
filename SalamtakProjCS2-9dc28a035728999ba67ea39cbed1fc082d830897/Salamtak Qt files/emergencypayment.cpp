#include "emergencypayment.h"
#include "ui_emergencypayment.h"

Account tmp4(920.5, 5000, 80);


emergencyPayment::emergencyPayment(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::emergencyPayment)
{
    ui->setupUi(this);

    ui->outstandingPayLabel->setText(QString::number(tmp4.getOutstandingPay()) + " LE");

    ui->BalanceLabel->hide();
    ui->balanceToDisplay->hide();

    ui->CVVlabel->hide();
    ui->CVVTxbx->hide();
    ui->CardNameLabel->hide();
    ui->CardNameTxbx->hide();
    ui->CardNumberLabel->hide();
    ui->CardNumberTxbx->hide();
    ui->ExpDateEdit->hide();
    ui->ExpiryDateLabel->hide();
    ui->cardNumberError->hide();
    ui->CVVError->hide();


    ui->CashPromptLabel->hide();
    ui->messageToUser->hide();
    ui->redeemPointsMessage->hide();
    ui->paymentSuccessfulLabel->hide();


    ui->PayButton->hide();

    ui->points->setText(QString::number(tmp4.getPoints()));

    if(tmp4.getPoints() > 0){
        ui->discountAmount->setText(QString::number(tmp4.getWalletBalance()));
        float discountedOP = tmp4.getOutstandingPay() - tmp4.getWalletBalance();
        if(discountedOP < 0)
            discountedOP = 0;
        ui->outstandingAfterDiscountAmount->setText(QString::number(discountedOP));
    }
    else{
        ui->WalletDiscountLabel->hide();
        ui->discountAmount->hide();
        ui->outstandingAfterDiscountLabel->hide();
        ui->outstandingAfterDiscountAmount->hide();
    }
}

emergencyPayment::~emergencyPayment()
{
    delete ui;
}

void emergencyPayment::on_redeemPointsButton_clicked()
{
    bool canBeRedeemed = tmp4.redeemPoints();
    if(canBeRedeemed == true){
        ui->redeemPointsMessage->setText("Wallet balance updated.");
        ui->discountAmount->setText(QString::number(tmp4.getWalletBalance()));
        float discountedOP = tmp4.getOutstandingPay() - tmp4.getWalletBalance();
        if(discountedOP < 0)
            discountedOP = 0;
        ui->outstandingAfterDiscountAmount->setText(QString::number(discountedOP));
        ui->balanceToDisplay->setText(QString::number(tmp4.getWalletBalance())+" LE");
        ui->messageToUser->hide();
        tmp4.setOutstandingPay(discountedOP);
    }
    else
        ui->redeemPointsMessage->setText("Not enough points to redeem.\n(Must have minimum of 1000)");
    ui->redeemPointsMessage->show();
    ui->points->setText(QString::number(tmp4.getPoints()));
}


void emergencyPayment::on_PayButton_clicked()
{
    tmp4.setLastPaidAmount(tmp4.getOutstandingPay());
    QString comboText = ui->paymentMethodCombo->currentText();
    if(comboText == "E-Wallet"){
        bool IsSuccessful = tmp4.choosePayment("E-Wallet", tmp4.getOutstandingPay());
        if(IsSuccessful){
            tmp4.setOutstandingPay(0);
            ui->balanceToDisplay->setText(QString::number(tmp4.getWalletBalance()));
            ui->outstandingPayLabel->setText(QString::number(tmp4.getOutstandingPay()) + " LE");

            ui->WalletDiscountLabel->hide();
            ui->discountAmount->hide();
            ui->outstandingAfterDiscountLabel->hide();
            ui->outstandingAfterDiscountAmount->hide();
            ui->paymentSuccessfulLabel->show();
//            invoice* r = new invoice();
//            r->setWindowIcon(QIcon("../Resources/SalLogo.png"));
//            r->show();
        }
        else{
            ui->messageToUser->setText("Your wallet balance is less than the outstanding pay.\nPlease select another payment method. You will be\ngiven the option of getting your current wallet\nbalance (if there is) discounted.");
            ui->messageToUser->show();
        }
    }
    else if (comboText == "Insurance"){
        // Ahmed this is the case for paying by insurance
        // the dr said that we only check if this customer is insured or not, which is something he decides when he registers (ig we can let him edit that in the account maybe)
            tmp4.setOutstandingPay(0);
            ui->outstandingPayLabel->setText(QString::number(tmp4.getOutstandingPay()) + " LE");


            ui->WalletDiscountLabel->hide();
            ui->discountAmount->hide();
            ui->outstandingAfterDiscountLabel->hide();
            ui->outstandingAfterDiscountAmount->hide();
        }
    else{
        if(ui->CardNumberTxbx->text().size() != 16){
            ui->cardNumberError->setText("Card no.\nshould be\n16 digits.");
            ui->cardNumberError->show();
        }
        else if (ui->CVVTxbx->text().size() != 3){
            ui->cardNumberError->hide();
            ui->CVVError->setText("CVV should\nbe 3 digits.");
            ui->CVVError->show();
        }
        else{
            bool IsSuccessful3 = tmp4.choosePayment("Credit", tmp4.getOutstandingPay());
            if(IsSuccessful3){
                tmp4.setOutstandingPay(0);
                ui->outstandingPayLabel->setText(QString::number(tmp4.getOutstandingPay()) + " LE");

                ui->WalletDiscountLabel->hide();
                ui->discountAmount->hide();
                ui->outstandingAfterDiscountLabel->hide();
                ui->outstandingAfterDiscountAmount->hide();
                ui->paymentSuccessfulLabel->show();
            }
        }

    }
}


void emergencyPayment::on_paymentMethodCombo_activated(int index)
{
    if(index == 0){
        ui->CVVlabel->hide();
        ui->CVVTxbx->hide();
        ui->CardNameLabel->hide();
        ui->CardNameTxbx->hide();
        ui->CardNumberLabel->hide();
        ui->CardNumberTxbx->hide();
        ui->ExpDateEdit->hide();
        ui->ExpiryDateLabel->hide();
        ui->CashPromptLabel->hide();

        ui->messageToUser->hide();
        ui->paymentSuccessfulLabel->hide();

        ui->BalanceLabel->show();
        ui->balanceToDisplay->setText(QString::number(tmp4.getWalletBalance())+" LE");
        ui->balanceToDisplay->show();
        ui->PayButton->show();

    }
    else if(index == 1){
        ui->CVVlabel->hide();
        ui->CVVTxbx->hide();
        ui->CardNameLabel->hide();
        ui->CardNameTxbx->hide();
        ui->CardNumberLabel->hide();
        ui->CardNumberTxbx->hide();
        ui->ExpDateEdit->hide();
        ui->ExpiryDateLabel->hide();
        ui->BalanceLabel->hide();
        ui->balanceToDisplay->hide();

        ui->messageToUser->hide();
        ui->paymentSuccessfulLabel->hide();

        ui->PayButton->show();

    }
    else if(index == 2){
        ui->CVVlabel->hide();
        ui->CVVTxbx->hide();
        ui->CardNameLabel->hide();
        ui->CardNameTxbx->hide();
        ui->CardNumberLabel->hide();
        ui->CardNumberTxbx->hide();
        ui->ExpDateEdit->hide();
        ui->ExpiryDateLabel->hide();
        ui->BalanceLabel->hide();
        ui->balanceToDisplay->hide();
        ui->PayButton->hide();

        ui->messageToUser->hide();
        ui->paymentSuccessfulLabel->hide();

        ui->CashPromptLabel->setText("Please pay at the nearest reception.");
        ui->CashPromptLabel->show();

    }
    else{
        ui->BalanceLabel->hide();
        ui->balanceToDisplay->hide();
        ui->CashPromptLabel->hide();

        ui->CVVlabel->show();
        ui->CVVTxbx->show();
        ui->CardNameLabel->show();
        ui->CardNameTxbx->show();
        ui->CardNumberLabel->show();
        ui->CardNumberTxbx->show();
        ui->ExpDateEdit->show();
        ui->ExpiryDateLabel->show();
        ui->PayButton->show();

        ui->messageToUser->hide();
        ui->paymentSuccessfulLabel->hide();
    }
}

