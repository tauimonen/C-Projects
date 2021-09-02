#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char *argv[])
{
    int i;
    int j;
    int n;
    double* values;
    int decimals = atoi(argv[1]);
    n = argc - 2;
    values = (malloc(sizeof(double) * n));

    for (i = 0; i < n; ++i)
    {
        values[i] = atof(argv[i+2]);
    }

    for (j = 0; j < n; ++j)
    {
        printf("sqrt(%0.*f) = %0.*f\n", decimals, values[j], decimals, sqrt(values[j]));
    }
  
    return 0;
}