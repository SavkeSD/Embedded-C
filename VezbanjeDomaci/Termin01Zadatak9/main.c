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
    // za malo t, asci code je 116, dodamo 32, i trebalo bi da bude veliko T
    print("ASCII kod karaktera %c je %d\n", my_char, my_char);

    char my_char_big = my_char - 32;

    print("ASCII code za malo slovo %c je %d\n", my_char_big, my_char_big);

    return 0;


}
