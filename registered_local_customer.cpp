#include "registered_local_customer.h"
#include <cstring>

registered_local_customer::registeredLocalCustomer(){
    strcpy(customerName,"");
    strcpy(customerPassword,"");
}

registered_local_customer::registeredLocalCustomer(const char pcustomerName[], const char pcustomerPassword[]){
    strcpy(customerName,pcustomerName);
    strcpy(customerPassword,pcustomerPassword);
}

void registered_local_customer::login(){
}

registered_local_customer::addProfile(){
    return 0;
}

void registered_local_customer::modifyDetails(){
}

void registered_local_customer::logOut(){
}

registered_local_customer::~registeredLocalCustomer(){
    //Destructor
}
