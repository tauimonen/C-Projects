#include "geometria.h"
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    int n, i;
    double radius, tilavuus, piiri, ala;
    n = argc - 1;

    printf("Piin arvo: %.19Lf\n", PII);
    for (i = 1; i <= n; ++i) {
        radius = atof(argv[i]);
        ala = ympyranAla(radius);
        tilavuus = pallonTilavuus(radius);
        piiri = 2.0 * PII * radius;
        printf("Säteen %f omaavan ympyrän ala ja pallon tilavuus: %.10f ja %.10f\n", radius, ala, tilavuus);
        printf("Säteen %f omaavan ympyrän piiri on %.10f\n", radius, piiri);
    }
 
    return 0;
}