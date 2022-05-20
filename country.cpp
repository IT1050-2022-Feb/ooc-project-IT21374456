#include "country.h"
#include "location.h"
#include <cstring>

country::countryName(){
    strcpy(countryName, "");
}

country::countryName (const char pcountryName[]){
    strcpy(countryName, pcountryName);
}

void country::displayCountry{
}

country::~countryName(){
    //Destructor
}
