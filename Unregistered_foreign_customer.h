class unregisteredForeignCustomer {
    private:
        char customerName[30];
        char customerCountry[10];
        char customerEmailAddress[20];
        int customerPhoneNum;
    public:
        unregisteredForeignCustomer();
        unregisteredForeignCustomer( const char pcustomerName[], const char pcustomerCounty[], int pcustomerPhoneNum[], const char pcustomerEmailAddress[]);
        void registeredUser();
        void searchHotelNPlaces();        
        ~unregisteredForeignCustomer();
};
