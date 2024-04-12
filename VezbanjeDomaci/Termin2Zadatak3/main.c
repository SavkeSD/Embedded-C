/*
 * Project template used for the "Embedded Software Development" course.
 */


#include "helper_library/helper.h"


int main(void)
{
    helper_library_init();

    int broj;
    print("Unesite jedan broj: ");
    scan("%d", &broj);

    print("Apsolutna vrednost broja %d je %d", broj, abs(broj));


    return 0;


}
