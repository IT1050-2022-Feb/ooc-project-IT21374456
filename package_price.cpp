#include "package_price.h"
#include "reservation.h"
#include <cstring>

package_price::packgePrice(){
    strcpy(packageType,"");
    strcpy(packageID,"");

}

package_price::packagePrice(const char ppackageType[] , const char ppackageID[]){
    strcpy(packageType,ppackageType);
    strcpy(packageID,ppackageID);
}

void package_price::displayPackagePriceDetails(){  
}

package_price::~packagePrice(){
    //Destructor
}
