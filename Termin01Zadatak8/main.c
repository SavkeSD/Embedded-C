/*
 * Project template used for the "Embedded Software Development" course.
 */


#include "helper_library/helper.h"


int main(void)
{
    helper_library_init();

    char my_char;

    print("Unesite karakter: ");
    scan("%c", &my_char);

    // Obratite paznju da jednu istu kombinaciju nula i jedinica
    // u promenljivoj mozemo da interpretiramo na razlicite nacine
    // u ovom konkretnom primeru, kao decimalnu vrednost i kao karakter.
    print("ASCII kod karaktera %c je %d\n", my_char, my_char);

    return 0;


}
