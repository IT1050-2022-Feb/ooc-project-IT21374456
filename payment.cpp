#include "payment.h"
#include "reservation.h"

payment::payment(){
    receiptNumber = 0;
    totalAmount = 0;
}

payment::payment( int preceiptNumber , double ptotalAmount ){
    receiptNumber = preceiptNumber;
    totalAmount = ptotalAmount;
}

void payment::checkPayment(){
}

void payment::confirmPayment(){
}

payment::displayPaymentDetails(){
    return 0;
}
