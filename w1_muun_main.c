#include <stdio.h>
#include "muunto.h"
#include <string.h>

int main(int argc, char *argv[]) {
    char word[20];
    int n, i;
    n = argc -1;

    for (i = 1; i <= n; ++i) {
        strcpy(word, argv[i]);
        muunna(word);
        printf("%d: %s --> %s\n", i, argv[i], word);
    }

    return 0;
}