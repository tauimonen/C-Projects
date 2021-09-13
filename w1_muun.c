#include <stdio.h>
#include "muunto.h"
#include <string.h>

void muunna(char mj[]) {
    int n, i;
    char word[20];
    n = strlen(mj);

    for (i = 0; i <= n; ++i) {
        if (mj[i] >= 'A' && mj[i] <= 'Z') {
            mj[i] = mj[i] + 32;
        } else if (mj[i] >= 'a' && mj[i] <= 'z') {
            mj[i] = mj[i] - 32;
        }
    }

    strcpy(word, mj);
    for (i = 0; i <= n; ++i) {
        mj[i] = word[n-i-1];
    }
}

