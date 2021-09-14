#include <stdio.h>
#include <limits.h>
#include <stdlib.h>
#include "w1_unsig.h"

void ucharIntervalli(unsigned char sade, unsigned char askel) {
    unsigned char i;
    printf("unsigned char:");
    for (i = -(sade); i < -(1); i += askel) {
        printf(" %u", i);
    }
    for (i = 0; i <= sade; i += askel) {
        printf(" %u", i);
    }
    printf("\n");
}