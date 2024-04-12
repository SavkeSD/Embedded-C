/*
 * Project template used for the "Embedded Software Development" course.
 */


#include "helper_library/helper.h"


int main(void)
{
    helper_library_init();

    int ugao1,ugao2,ugao3;
    print("Unesite prvi ugao: ");
    scan("%d", &ugao1);
    print("Unesite drugi ugao: ");
    scan("%d", &ugao2);
    print("Unesite treci ugao: ");
    scan("%d", &ugao3);

    if ( ugao1 >=180 || ugao2 >=180 || ugao3 >=180) {
        print("Greska prilikom unosa ugla, ne moze biti veci od 180");
    }
    else if ((ugao1+ugao2+ugao3) == 180) {
        print("Moguce je konstruisati trougao za ova 3 ugla");
    }
    else {
        print("Nije moguce konstruisati trougao");
    }

    return 0;


}
