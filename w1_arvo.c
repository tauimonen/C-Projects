#include <stdio.h>
#include <limits.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    int n, i, value;
    n = argc - 1;

    for (i = 1; i <= n; ++i) {
        value = atoi(argv[i]);
        printf("%d:", value);
        if (value >= SCHAR_MIN && value <= SCHAR_MAX) {
            printf(" signed char,");
        }
        if (value >= 0 && value <= UCHAR_MAX) {
            printf(" unsigned char,");
        }
        if (value >= SHRT_MIN && value <= SHRT_MAX) {
            printf(" short int,");
        }
        if (value >= 0 && value <= USHRT_MAX) {
            printf(" unsigned short int,");
        }
        if (value >= INT_MIN && value <= INT_MAX) {
            printf(" int");
        }
        printf("\n");
    }
    return 0; 
}