#include "registered_local_customer.h"
#include "registered_foreign_customer.h"

class payment{
    private:
        int receiptNumber;
        double totalAmount;

    public:
        payment();
        payment( int receiptNumber , double totalAmount );
        void checkPayment();
        void confirmPayment();
        displayPaymentDetails();
        ~payment();
};
