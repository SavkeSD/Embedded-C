/*
 * Project template used for the "Embedded Software Development" course.
 */


#include "helper_library/helper.h"


int main(void)
{
    helper_library_init();
    char len_char, len_unsigned_char, len_short_int, len_unsigned_short, len_int, len_unsigned_int, len_long, len_unsigned_long;
    len_char = sizeof(char);
    len_unsigned_char = sizeof(unsigned char);
    len_short_int = sizeof(short int);
    len_unsigned_short = sizeof(unsigned short);
    len_int = sizeof(int);
    len_unsigned_int = sizeof(unsigned int);
    len_long = sizeof(long);
    len_unsigned_long = sizeof(unsigned long);

    print("Velicina chara je u bajtovima: %d \n", len_char);
    print("Velicina unsigned char je u bajtovima: %d \n", len_unsigned_char);
    print("Velicina short intr je u bajtovima: %d \n", len_short_int);
    print("Velicina unsigned short je u bajtovima: %d \n", len_unsigned_short);
    print("Velicina inta je u bajtovima: %d \n", len_int);
    print("Velicina unsigned int je u bajtovima: %d \n", len_unsigned_int);
    print("Velicina long je u bajtovima: %d \n", len_long);
    print("Velicina unsigned je u bajtovima: %d \n", len_unsigned_long);

}
