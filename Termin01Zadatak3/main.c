/*
 * Project template used for the "Embedded Software Development" course.
 */


#include "helper_library/helper.h"


int main(void)
{
    helper_library_init();
    char x;
    print("Ovo je promenljiva %d",x);
    x = 2;
    print("Ovo je promenljiva %d",x);

    return 0;
}
