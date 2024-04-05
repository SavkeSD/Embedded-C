/*
 * Project template used for the "Embedded Software Development" course.
 */


#include "helper_library/helper.h"


int main(void)
{
    helper_library_init();

    int broj1,broj2;
    print("Unesite prvi broj: ");
    scan("%d", &broj1);
    print("Unesite drugi broj: ");
    scan("%d", &broj2);

    int zbir, mnozenje, deljenje, oduzimanje;

    zbir = broj1 + broj2;
        print("Zbir je : %d \n", zbir);
    mnozenje = broj1 * broj2;
        print("Mnozenje je : %d\n", mnozenje);
    oduzimanje = broj1 - broj2;
        print("Oduzimanje je : %d\n", oduzimanje);

    if (0 == broj2) {
        print("Nemoguce je deljenje sa nulom, greska!!!\n");
    }
    else {
        deljenje = broj1 / broj2;
        print("Deljenje je %d\n", deljenje);
    }




    return 0;


}
