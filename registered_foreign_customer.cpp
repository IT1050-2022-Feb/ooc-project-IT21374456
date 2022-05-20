#include "registered_foreign_customer.h"
#include <cstring>

registered_foreign_customer::registeredForeignCustomer(){
    strcpy(customerName,"");
    strcpy(customerPassword,"");
}

registered_foreign_customer::registeredForeignCustomer(const char pcustomerName[], const char pcustomerPassword[]){
    strcpy(customerName,pcustomerName);
    strcpy(customerPassword,pcustomerPassword);
}

void registered_foreign_customer::login(){
}

void registered_foreign_customer::addBookingHotel(){
}

void registered_foreign_customer::displayBookingHotel(){
}

registered_foreign_customer::~registeredForeignCustomer(){
    //Destructor
}
