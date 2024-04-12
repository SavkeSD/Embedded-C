/*
 * Project template used for the "Embedded Software Development" course.
 */


#include "helper_library/helper.h"


int main(void)
{
    helper_library_init();

    int broj1,broj2,broj3;
    print("Unesite broj1: ");
    scan("%d", &broj1);
    print("\n");
    print("Unesite broj2: ");
    scan("%d", &broj2);
    print("\n");
    print("Unesite broj3: ");
    scan("%d", &broj3);
    print("\n");

    (broj1 > broj2 && broj2 > broj3) ? print("%d\n%d\n%d\n",broj1,broj2,broj3) : print("");
    (broj1 > broj2 && broj2 < broj3) ? ((broj1 > broj3) ? print("%d\n%d\n%d\n",broj1,broj3,broj2) : print("%d\n%d\n%d\n",broj3,broj1,broj2)) : print("");
    (broj2 > broj1 && broj1 > broj3) ? print("%d\n%d\n%d\n",broj2,broj1,broj3) : print("");
    (broj2 > broj1 && broj1 < broj3) ? ((broj2 > broj3) ? print("%d\n%d\n%d\n",broj2,broj3,broj1) : print("%d\n%d\n%d\n",broj3,broj2,broj1)) : print("");


    return 0;


}
