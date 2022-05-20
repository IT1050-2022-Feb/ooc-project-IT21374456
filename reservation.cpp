#include "location.h"
#include "reservation.h"
#include "package_price.h"

reservation::reservation(){
    reservationNumber = 0;
    reservationCount = 0;
}

reservation::calculateTotal(){
    return packagePrice * reservationCount;
}

reservation::reservation(int preservationNumber, int preservationCount){
    reservationNumber = preservationNumber;
    reservationCount = preservationCount;
}

void reservation::displayReservation(){
}


reservation::~reservation(){
    //Destructor
}
