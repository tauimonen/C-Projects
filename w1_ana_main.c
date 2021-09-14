#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "w1_ana.h"

int main(int argc, char *argv[]) {
    int anagrams;
    anagrams = anagrammeja(argv[1], argv[2]);
    printf("%i", anagrams);

    return 0;
}