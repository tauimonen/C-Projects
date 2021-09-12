#include "geometria.h"
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    double radius, tilavuus, piiri, ala;
    radius = atof(argv[1]);

    ala = ympyranAla(radius);
    tilavuus = pallonTilavuus(radius);
    piiri = 2.0 * PII * radius;

    printf("Piin arvo: %.19Lf\n", PII);
    printf("Säteen %f omaavan ympyrän ala ja pallon tilavuus: %f ja %f\n", radius, tilavuus);
    printf("Säteen %f omaavan ympyrän piiri on %f\n", radius, piiri);

    return 0;
}