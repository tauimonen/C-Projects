/* 
All functions print the following four pieces of information for the value obtained 
as a parameter on the screen:
Value x.
Bitmap of x.
The number of 0-bits contained in the bit representation of x.
The number of 1-bits contained in the bit representation of x.

Note that the long int type is 64-bit in ANSI C. Otherwise, change the type (long long).
*/

#include <stdio.h>
#include <stdlib.h>
#include "bitit.h"


void scharBitit(signed char x) {
    int i, k, ones, zeros, bits;
    ones = 0;
    zeros = 0;
    bits = 8;

    printf("%d\n", x);
    for (i = bits - 1; i >= 0; i--) {
        k = x >> i;
        if (k & 1) {
            printf("1");
            ones++;
        }
        else {
            printf("0");
            zeros++;
        }
    }
    printf("\n%d\n%d\n", zeros, ones);
}

void shortBitit(short int x) {
    int i, k, ones, zeros, bits;
    ones = 0;
    zeros = 0;
    bits = 16;

    printf("%d\n", x);
    for (i = bits - 1; i >= 0; i--) {
        k = x >> i;
        if (k & 1) {
            printf("1");
            ones++;
        }
        else {
            printf("0");
            zeros++;
        }
    }
    printf("\n%d\n%d\n", zeros, ones);
}

void intBitit(int x) {
    int i, k, ones, zeros, bits;
    ones = 0;
    zeros = 0;
    bits = 32;

    printf("%d\n", x);
    for (i = bits - 1; i >= 0; i--) {
        k = x >> i;
        if (k & 1) {
            printf("1");
            ones++;
        }
        else {
            printf("0");
            zeros++;
        }
    }
    printf("\n%d\n%d\n", zeros, ones);
}

void longBitit(long int x) {
    int i, k, ones, zeros, bits;
    ones = 0;
    zeros = 0;
    bits = 64;

    printf("%ld\n", x);
    for (i = bits - 1; i >= 0; i--) {
        k = x >> i;
        if (k & 1) {
            printf("1");
            ones++;
        }
        else {
            printf("0");
            zeros++;
        }
    }
    printf("\n%d\n%d\n", zeros, ones);
}