/*
 * Project template used for the "Embedded Software Development" course.
 */


#include "helper_library/helper.h"


int main(void)
{
    helper_library_init();

    int x;

    print("Uneti jedan int: ");
    scan("%d",&x);
    print("\n");

    print("%d \n", x);

    unsigned char z = x;

    print("Posle konverzije u unsigned char %d", z);

}
