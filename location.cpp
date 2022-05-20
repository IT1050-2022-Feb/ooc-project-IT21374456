#include "location.h"
#include <cstring>

location::countryName(){
    strcpy(countryName, "");
}

location::countryName(const char pcountryName[]){
    strcpy(countryName, pcountryName);
}

void location::displayCountry(){  
}

location::~countryName(){
    //Destructor
}
