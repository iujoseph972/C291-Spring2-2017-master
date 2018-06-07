#include <stdio.h>


int main(){

struct customer {
    char lastName[ 15 ];
    char firstName[ 15 ];
    unsigned int customerNumber;
    struct {
        char phoneNumber[ 11 ];
        char address[ 50 ];
        char city[ 15 ];
        char state[ 3 ];
        char zipCode[ 6 ];
    } personal;
}
    customerRecord, *customerPtr;
    customerPtr = &customerRecord;
    
    /* A */ customerRecord.lastName;
    /* B */ customerPtr->lastName;
    /* C */ customerRecord.firstName;
    /* D */ customerPtr->firstName;
    /* E */ customerRecord.customerNumber;
    /* F */ customerPtr->customerNumber;
    /* G */ customerRecord.personal.phoneNumber;
    /* H */ customerPtr->personal.phoneNumber;
    /* I */ customerRecord.personal.address;
    /* J */ customerPtr->personal.address;
    /* K */ customerRecord.personal.city;
    /* L */ customerPtr->personal.city;
    /* M */ customerRecord.personal.state;
    /* N */ customerPtr->personal.state;
    /* O */ customerRecord.personal.zipCode;
    /* P */ customerPtr->personal.zipCode;
    

    return 0;
};


