#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "w1_ana.h"
#include <stdbool.h>

int anagrammeja(char mj1[], char mj2[]) {
    /* 
    The function tests whether the words are anagrams. Returns 
    the number 0 if they are not and the number 1 if they are.
    */

    int i, j, k;
    int len;
    int countIn1, countIn2;

    if (strlen(mj1) != strlen(mj2)) {
        return 0;
    }
     
    len = strlen(mj1);

    for (i = 0; i < len; ++i) {
        countIn1 = 0;
        countIn2 = 0;

        /* Counting how many same characters in mj2 */
        for (j = 0; j < len; ++j) {
            if (mj1[i] == mj2[j]) {
                countIn2++;
            }
        }

        /* Counting how many same characters in mj1 */
        for (k = 0; k < len; ++k) {
            if (mj1[i] == mj1[k]) {
                countIn1++;
            }
        }
        
        /* Comparing the results */
        if (countIn1 != countIn2) {
            return 0;
        }
    }

    return 1;
}