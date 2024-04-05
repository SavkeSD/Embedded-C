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

    if (97<= karakter && 122>=karakter) {
        print("Uneti karakter je malo slovo \n");
    }
    else if (65<= karakter && 90>=karakter) {
        print("Uneti karakter je veliko slovo \n");
    }
    else if (48<=karakter && 57>=karakter) {
        print("Uneti karakter je broj od 0-9");
    }
    else if ((32<=karakter && 47>=karakter) || (58<=karakter && 63>=karakter) ||
             (92<=karakter && 96>=karakter) || (123<=karakter && 126>=karakter)) {
                    print("Uneti karakter je specijalni karakter");
                }
    else {

    }


    return 0;


}
