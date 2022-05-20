#include "registered_local_customer.h"

class promotion{
    private:
        char promotionID[20];
        char promotionName[30];
    public:
        promotion();
        promotion( const char ppromotionID[20], const char ppromotionName[30]);      
        void promotionDetails();
        ~promotion();
};
