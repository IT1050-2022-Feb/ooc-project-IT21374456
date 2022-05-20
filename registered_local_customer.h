#include "unregistered_local_customer.h"
#include "payment.h"

class registeredLocalCustomer : public unregisteredLocalCustomer{
    private:
        char customerName[30];
        char customerPassword[30];
    public:
        registeredLocalCustomer();
        registeredLocalCustomer( const char pcustomerName[], const char pcustomerPassword[]);
        void login();
        addProfile();        
        void modifyDetails();
        void logOut();        
        ~registeredLocalCustomer();
};
