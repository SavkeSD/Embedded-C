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

    if (broj%2 == 0) {
        print("Broj je paran ");
    }
    else {
        print("Broj je neparan");
    }


    return 0;

}
