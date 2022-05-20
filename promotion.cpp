#include "promotion.h"
#include <cstring>

promotion::promotion(){
    strcpy(promotionID,"");
    strcpy(promotionName,"");
}

promotion::promotion( const char ppromotionID[], const char ppromotionName[]){
    strcpy(promotionID,ppromotionID);
    strcpy(promotionName,ppromotionName);
}

void promotion::promotionDetails(){
}

promotion::~promotion(){
    //Destructor
}
