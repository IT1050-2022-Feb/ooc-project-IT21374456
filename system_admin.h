#include "location.h"

class systemAdmin {
    private:
        char systemAdminID[10];
        char systemAdminName[30];
        char systemAdminPassword[20];
    public:
        unregisteredForeignCustomer();
        unregisteredForeignCustomer( const char psystemAdminID[], const char psystemAdminName[], const char psystemAdminPassword[]);
        void registeredUser();
        void searchHotelNPlaces();        
        ~unregisteredForeignCustomer();
};
