/*
 * Project template used for the "Embedded Software Development" course.
 */


#include "helper_library/helper.h"


int main(void)
{
    helper_library_init();

    char karakter;
    print("Unesite neki karakter: ");
    scan("%c", &karakter);

    print("Karakter je : %d \n", karakter);  // sa %d dobijamo ASCII
    print("Karakter je : %c \n", karakter);  // sa %c dobijamo vrednost koju smo uneli na terminalu

    if ((97<= karakter && 122>=karakter) || (65<= karakter && 90>=karakter)) {
        if((65 == karakter || 69 == karakter || 73 == karakter  || 79 == karakter || 85 == karakter) ||
           (65+32 == karakter || 69+32 == karakter || 73+32 == karakter  || 79+32 == karakter || 85+32 == karakter)) {
                print("Uneti karakter je samoglasnik \n");
        }
        else {
                print("Uneti karakter je suglasnik \n");
        }

    }

    else {
        print("Greska, uneti karakter nije slovo \n");
    }


    return 0;


}
