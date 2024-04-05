/*
 * Project template used for the "Embedded Software Development" course.
 */


#include "helper_library/helper.h"


int main(void)
{
    helper_library_init();

    int godina;
    print("Unesite godinu: ");
    scan("%d", &godina);

    if ((godina%4 == 0) && (godina%100 != 0 && godina%400 == 0)) {
        print("Godina je prestupna!!! \n");
    }
    else {
        print("Godina nije prestupna");
    }


    return 0;


}
