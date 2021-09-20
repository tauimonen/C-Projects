#include <stdio.h>
#include <limits.h>
#include <stdlib.h>
#include "w1_unsig.h"

void ucharIntervalli(unsigned char sade, unsigned char askel) {
    unsigned char i;
    unsigned int x;
    int counter;
    counter = 0;
    x = UCHAR_MAX - sade + 1 + i * askel;

    printf("unsigned char:");
    for (i = x; i <= UCHAR_MAX; i += askel) {
        if (counter <= 2) {
            printf(" %u", i);
            counter++;
        } else {
            break;
        }
    }
    for (i = 0; i <= sade; i += askel) {
        printf(" %u", i);
    }
    printf("\n");
}


void ushortIntervalli(unsigned short sade, unsigned short askel) {
    unsigned short i;
    unsigned short x;
    int counter;
    counter = 0;
    x = USHRT_MAX - sade + 1;

    printf("unsigned short:");
    for (i = x; i <= USHRT_MAX; i += askel) {
        if (counter <= 2) {
            printf(" %u", i);
            counter++;
        } else {
            break;
        }
    }

    counter = 0;
    for (i = 0; i <= USHRT_MAX; i += askel) {
        if (counter <= 3) {
            printf(" %u", i);
            counter++;
        } else {
            break;
        }
    }
    printf("\n");
}


void uintIntervalli(unsigned int sade, unsigned int askel) {
    unsigned int i;
    unsigned int x;
    int counter;
    counter = 0;
    x = UINT_MAX - sade + 1;

    printf("unsigned int:");
    for (i = x; i <= UINT_MAX; i += askel) {
        if (counter <= 2) {
            printf(" %u", i);
            counter++;
        } else {
            break;
        }
    }

    counter = 0;
    for (i = 0; i <= UINT_MAX; i += askel) {
        if (counter <= 3) {
            printf(" %u", i);
            counter++;
        } else {
            break;
        }
    }
    printf("\n");
}


void ulongIntervalli(unsigned long sade, unsigned long askel) {
    unsigned long i;
    unsigned long x;
    int counter;
    counter = 0;
    x = ULONG_MAX - sade + 1;

    printf("unsigned long:");
    for (i = x; i <= ULONG_MAX; i += askel) {
        if (counter <= 2) {
            printf(" %lu", i);
            counter++;
        } else {
            break;
        }
    }

    counter = 0;
    for (i = 0; i <= ULONG_MAX; i += askel) {
        if (counter <= 3) {
            printf(" %lu", i);
            counter++;
        } else {
            break;
        }
    }
    printf("\n");
}
