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

    (broj > 0) ? print("%d", broj) : print("%d", abs(broj));


    return 0;


}
