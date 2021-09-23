#include "w2_bites.h"
#include <stdio.h>
#include <stdlib.h>

void kaannaScharBitit(signed char *x) {
    int i, k, j, bits;
    int b[10];
    bits = 8;
    j = 0;
    printf("%d\n", *x);
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
    short sx = lx;
    int ix = lx;

    kaannaScharBitit(&cx);
}

/* void kaannaShortBitit(short *x) {

}

void kaannaIntBitit(int *x) {

}

void kaannaLongBitit(long *x) {

} */