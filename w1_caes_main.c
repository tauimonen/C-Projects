#include "w1_caes.h"
#include <stdio.h>

int main() {
    char mj[50] = "OHJELMOINNIN TEKNIIKKA";
    char aakkosto[30] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    char korvaavat[30] = "OIUGENYMSWXVALPKHBQCZDFJRT";

    printf("%s\n", aakkosto);
    printf("%s\n", korvaavat);
    printf("%s\n", mj);

    caesarKoodaa(mj, aakkosto, korvaavat);
    printf("%s\n", mj);
    caesarKoodaa(mj, korvaavat, aakkosto);
    printf("%s\n", mj);
}