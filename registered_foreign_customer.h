#include "unregistered_foreign_customer.h"
#include "payment.h"

class registeredForeignCustomer : public unregisteredForeignCustomer{
    private:
        char customerName[30];
        char customerPassword[30];
    public:
        registeredForeignCustomer();
        registeredForeignCustomer( const char pcustomerName[], const char pcustomerPassword[]);
        void login();
        void addBookingHotel();
        void displayBookingHotel();       
        ~registeredForeignCustomer();
};
