class unregisteredLocalCustomer {
    private:
        char customerName[30];
        char customerCountry[10];
        int customerPhoneNum;
        char customerEmailAddress[20];
    public:
        unregisteredLocalCustomer();
        unregisteredLocalCustomer( const char pcustomerName[], const char customerCounty[], int pcustomerPhoneNum[], const char pcustomerEmailAddress[]);
        void registeredUser();
        void searchHotelNPlaces();        
        ~unregisteredLocalCustomer();
};
