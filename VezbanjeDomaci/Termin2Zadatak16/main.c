/*
 * Project template used for the "Embedded Software Development" course.
 */


#include "helper_library/helper.h"


int main(void)
{
    helper_library_init();

    int brPoena;
    print("Unesite broj poena: ");
    scan("%d", &brPoena);

    if (0>brPoena || 100<brPoena) {
        print("Greska prilikom unosa, br bodova mora biti izmedju 0 i 100 \n");
    }
    else if(0<brPoena && 54>=brPoena){
        print("Nista polozili, imate ispod 54 poena \n");
    }
    else if(55<brPoena && 64>=brPoena) {
        print("Polozili ste sa ocenom 6 \n");
    }
    else if(65<brPoena && 74>=brPoena) {
            print("Polozili ste sa ocenom 7 \n");
    }
    else if(75<brPoena && 74>=brPoena) {
            print("Polozili ste sa ocenom 8 \n");
    }
    else if(85<brPoena && 94>=brPoena) {
            print("Polozili ste sa ocenom 9 \n");
    }
    else if(95<brPoena && 100>=brPoena) {
            print("Polozili ste sa ocenom 10 \n");
    }
    else {

    }


    return 0;


}
