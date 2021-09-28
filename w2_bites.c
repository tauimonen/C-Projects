#include "w2_bites.h"
#include <stdio.h>
#include <stdlib.h>


void kaannaScharBitit(signed char *x) {
    int i, k, j, bits;
    int b[10];
    
    bits = 8;
    j = 0;

    for (i = bits - 1; i >= 0; i--) {
        k = *x >> i;
        if (k & 1) {
            printf("1");
            b[j] = 1;
        }
        else {
            printf("0");
            b[j] = 0;
        }
        j++;
    }
    printf("\n");

    for (i = bits - 1; i >= 0; --i) {
        printf("%d", b[i]);
    }
    printf("\n");
}



void kaannaShortBitit(short *x) {
     int i, k, j, bits;
    int b[20];
    
    bits = 16;
    j = 0;

    for (i = bits - 1; i >= 0; i--) {
        k = *x >> i;
        if (k & 1) {
            printf("1");
            b[j] = 1;
        }
        else {
            printf("0");
            b[j] = 0;
        }
        j++;
    }
    printf("\n");

    for (i = bits - 1; i >= 0; --i) {
        printf("%d", b[i]);
    }
    printf("\n");
}

void kaannaIntBitit(int *x) {
     int i, k, j, bits;
    int b[40];
    
    bits = 32;
    j = 0;

    for (i = bits - 1; i >= 0; i--) {
        k = *x >> i;
        if (k & 1) {
            printf("1");
            b[j] = 1;
        }
        else {
            printf("0");
            b[j] = 0;
        }
        j++;
    }
    printf("\n");

    for (i = bits - 1; i >= 0; --i) {
        printf("%d", b[i]);
    }
    printf("\n");
}

void kaannaLongBitit(long *x) {
    int i, k, j, bits;
    int b[70];
    
    bits = 64;
    j = 0;

    for (i = bits - 1; i >= 0; i--) {
        k = *x >> i;
        if (k & 1) {
            printf("1");
            b[j] = 1;
        }
        else {
            printf("0");
            b[j] = 0;
        }
        j++;
    }
    printf("\n");

    for (i = bits - 1; i >= 0; --i) {
        printf("%d", b[i]);
    }
    printf("\n");
} 

int main() {
    long int lx = 2015;    // Kukin testi käyttää eri arvoa LUKU.
    signed char cx = 2015;
    short sx = 2015;
    int ix = 2015;

    kaannaScharBitit(&cx);
    kaannaShortBitit(&sx);
    kaannaIntBitit(&ix);
    kaannaLongBitit(&lx);
}