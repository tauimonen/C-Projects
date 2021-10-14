#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "w2_muun.h"

void muunnaTaulu(unsigned int koko, double *taulu, double (*muunnos)(double)) {
    int i;

    for (i = 0; i < koko; ++i) {
        taulu[i] = muunnos(taulu[i]);
    }
}
