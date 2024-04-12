/*
 * Project template used for the "Embedded Software Development" course.
 */


#include "helper_library/helper.h"


int main(void)
{
    helper_library_init();

    int mesec;
    print("Unesite mesec: ");
    scan("%d", &mesec);
    print("\n");

    if (mesec == 1) {
        print("Januar");
    }
    else if(mesec == 2){
        print("Februar");
    }
    else if(mesec == 3){
        print("Mart");
    }
    else if(mesec == 4){
        print("April");
    }
    else if(mesec == 5){
        print("Maj");
    }
    else if(mesec == 6){
        print("Jun");
    }
    else if(mesec == 7){
        print("Jul");
    }
    else if(mesec == 8){
        print("Avgust");
    }
    else if(mesec == 9){
        print("Septembar");
    }
    else if(mesec == 10){
        print("Oktobar");
    }
    else if(mesec == 11) {
        print("Novembar");
    }
    else if(mesec == 12) {
        print("Decembar");
    }
    else {
        print("Pograsan unos");
    }




    return 0;


}
