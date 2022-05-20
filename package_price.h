#include "payment.h"
#include "reservation.h"

class packagePrice : public payment {
    private:
        char packageType[20];
        char packageID[20];
        
    public:
        packagePrice();
        packagePrice( const char ppackageType[] , const char ppackageID[]);
        void displayPackagePriceDetails();
        ~packagePrice();
};
