#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char *argv[]) {
    /* 
    Function to calculate the quadratic equation from 
    the values given as commandline parameters.
    */
    double a, b, c;
    double inside_sqrt;
    double result_unique;
    double result1, result2;

    a = atof(argv[1]);
    b = atof(argv[2]);
    c = atof(argv[3]);

    inside_sqrt = pow(b, 2) - 4 * a * c;

    if (inside_sqrt < 0) {
        printf("Ei ratkaisua\n");
    }

    if (inside_sqrt == 0) {
        result_unique = -(b) / (2 * a);
        printf("%0.3f\n", result_unique);
    }

    if (inside_sqrt > 0) {
        result1 = (-(b) + sqrt(inside_sqrt)) / (2 * a);
        result2 = (-(b) - sqrt(inside_sqrt)) / (2 * a);
        printf("%0.3f %0.3f\n", result2, result1);
    }

    return 0;
}