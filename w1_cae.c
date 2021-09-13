#include "caesar.h"
#include <stdio.h>
#include <string.h>

void caesarKoodaa(char mj[], char aakkosto[], char korvaavat[]) {
    int n, i, j;
    int n_aak;
    char word[50];
    n = strlen(mj);
    n_aak = strlen(aakkosto);
    strcpy(word, mj);

    for (i = 0; i <= n; ++i) {
        for (j = 0; j <= n_aak; ++j) {
            if (aakkosto[j] == mj[i]) {
                word[i] = korvaavat[j];
            }
            if (mj[i] == ' ') {
                word[i] = ' ';
            }
        }
    }
    strcpy(mj, word);
}