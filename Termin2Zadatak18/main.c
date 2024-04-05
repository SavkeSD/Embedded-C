/*
 * Project template used for the "Embedded Software Development" course.
 */


#include "helper_library/helper.h"


int main(void)
{
    helper_library_init();

    int potrosnja;
    int suma = 0;
    print("Unesite potrosnju: ");
    scan("%d", &potrosnja);
    print("\n");

    if (potrosnja < 0) {
        print("Greska prilikom unosa, potrosnje ne moze bili manja od 0");
    }
    else {
        if (potrosnja <= 10) {
            suma += potrosnja*200;
        }
        else if (potrosnja > 10 && potrosnja <= 20 ) {
            suma += 200*10 + 400*abs(potrosnja-10);
        }
        else if (potrosnja > 21 && potrosnja <= 40 ) {
            suma += 200*10 + 400*10 + 1000*abs(potrosnja-20);
        }
        else {
            suma += 200*10 + 400*10 + 1000*20 + 2000*abs(potrosnja-40);
        }

    }

    print("Ukupan dug za struju je:  %d", suma);


    return 0;


}
