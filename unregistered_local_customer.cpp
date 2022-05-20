#include "unregistered_local_customer.h"
#include "registered_local_customer.h"

#include <cstring>

class unregisteredLocalCustomer::unregisteredLocalCustomer(){
    strcpy(customerName,"");
    strcpy(customerCountry,"");
    strcpy(customerEmailAddress,"");
    customerPhoneNum = 0;
}

unregisteredLocalCustomer::unregisteredLocalCustomer(const char pcustomerName[], const char customerCounty[], int pcustomerPhoneNum[], const char pcustomerEmailAddress[]){
    strcpy(customerName, pcustomerName);
    strcpy(customerCountry, pcustomerCountry);
    strcpy(customerEmailAddress, pcustomerEmailAddress);
    customerPhoneNum = pcustomerPhoneNum;
}

void unregisteredLocalCustomer::registeredUser(){
}

void unregisteredLocalCustomer::searchHotelNPlaces(){
}

unregisteredLocalCustomer::~unregisteredLocalCustomer(){
    //Destructor
}
