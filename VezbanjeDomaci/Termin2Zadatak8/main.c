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

    // if else
    if ( broj>0 && broj%3==0 && !(broj%5==0) ) {
        print("Uneti broj zadovoljava uslov");
    }
    else {
        print("Uneti broj ne zadovoljava uslov");
    }

    // ternarni operator
    (broj>0 && broj%3==0 && !(broj%5==0)) ? print("Uneti broj zadovoljava uslov") : print("Uneti broj ne zadovoljava uslov");


    return 0;


}
