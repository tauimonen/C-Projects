#include <stdio.h>
#include <stdlib.h>
#include "w2_bit.h"



void scharBitit(signed char x) {
    int i, k;

    printf("%d\n", x);

    for (i = 7; i >= 0; i--) {
        k = x >> i;
        if (k & 1)
            printf("1");
        else
            printf("0");
    }

    printf("\n");
}


int main() {
    signed char x;
    x = 2015;
    scharBitit(x);

    return 0;
}