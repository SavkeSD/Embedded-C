/*
 * Project template used for the "Embedded Software Development" course.
 */


#include "helper_library/helper.h"


int main(void)
{
    helper_library_init();

    int mesec;
    print("Unesite mesec: ");
    scan("%d", &mesec);

    if (1<= mesec && 7>= mesec) {
        switch (mesec) {
            case 2:
                print("Mesec je februar i moze imati 28 ili 29 dana \n");
                break;
            default :
                if (mesec%2 == 0) {
                    print("Mesec ima 30 dana!!! \n");
                }
                else {
                    print("Mesec ima 31 dan!!! \n");
                }
        }
    }
    else if(8<= mesec && 12>= mesec) {
        switch (mesec) {
            default:
                if (mesec%2 == 0) {
                    print("Mesec ima 31 dana!!! \n");
                }
                else {
                    print("Mesec ima 30 dan!!! \n");
                }

        }
    }
    else {
        print("Uneli ste pogresan mesec!!! \n");
    }




    return 0;


}
