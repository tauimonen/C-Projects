#include "geometria.h"
#include <stdio.h>
#include <math.h>

long double PII = 3.142857;

double ympyranAla(double sade){
    return PII * pow(sade, 2);
}

double pallonTilavuus(double sade) {
    return (4.0 * (PII * pow(sade, 3))) / 3.0;
}