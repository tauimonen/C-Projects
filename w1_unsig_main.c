#include <stdio.h>
#include "w1_unsig.h"

int main() {
    unsigned char sade, askel;
    unsigned short s, a;
    unsigned int sa, as; 
    unsigned long sad;
    unsigned long ask;

    sade = 150;
    askel = 50;
    s = 45000;
    a = 15000;
    sa = 3300000000;
    as = 1100000000;
    sad = 9000000000000000000;
    ask = 3000000000000000000;

    ucharIntervalli(sade, askel);
    ushortIntervalli(s, a);
    uintIntervalli(sa, as);
    ulongIntervalli(sad, ask);

    sade = 40;
    askel = 75;
    s = 65535;
    a = 65535;
    sa = 400000;
    as = 750000;
    sad = 400000000;
    ask = 1500000000;

    ucharIntervalli(sade, askel);
    ushortIntervalli(s, a);
    uintIntervalli(sa, as);
    ulongIntervalli(sad, ask);

    return 0;
}