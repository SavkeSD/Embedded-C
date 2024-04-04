/*
 * Project template used for the "Embedded Software Development" course.
 */


#include "helper_library/helper.h"


int main(void)
{
    helper_library_init();

    int godine;
    print("Unesite koliko imate godina: ");
    scan("%d", &godine);
    print("\n");

    if(0>=godine) {
        print("Pogresan unos!! \n");
    }
    else if(18>godine) {
        print("Imate manje od 18 godina \n");
    }
    else if(18<=godine) {
        print("Mozete da glasate, punoletni ste!!! \n");
    }
    else {

    }



    return 0;


}
