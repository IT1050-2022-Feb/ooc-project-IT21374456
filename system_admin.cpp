#include "system_admin.h"
#include <strcpy.h>

systemAdmin::unregisteredForeignCustomer(){
    strcpy(systemAdminID,"")
    strcpy(systemAdminName,"")
    strcpy(systemAdminPassword,"")
}

systemAdmin::unregisteredForeignCustomer(){
    strcpy(systemAdminID,psystemAdminID)
    strcpy(systemAdminName,psystemAdminName)
    strcpy(systemAdminPassword,psystemAdminPassword)
}

void systemAdmin::registeredUser(){
}

void systemAdmin::searchHotelNPlaces(){
}

systemAdmin::~unregisteredForeignCustomer(){
    //Destructor
}
