/*
 * Project template used for the "Embedded Software Development" course.
 */


#include "helper_library/helper.h"


int main(void)
{
    helper_library_init();

    unsigned int prviBroj, drugiBroj, pomocnaVarijabla;

    print("Unesite prvi broj: ");
    scan("%d",&prviBroj);

    print("\n Unesite drugi broj: ");
    scan("%d", &drugiBroj);

    print("\n Prvi broj je: %d, drugi broj je: %d", prviBroj, drugiBroj);

    pomocnaVarijabla = prviBroj;
    prviBroj = drugiBroj;
    drugiBroj = pomocnaVarijabla;

    print("\n Prvi broj je: %d, drugi broj je: %d", prviBroj, drugiBroj);



    return 0;


}
