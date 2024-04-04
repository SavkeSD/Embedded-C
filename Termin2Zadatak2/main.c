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

    (18 <= godine) ? print("Mozete da glasate") : ((0 < godine) ? print("Maloletni ste "):print("Pogresan unos"));

    return 0;


}
