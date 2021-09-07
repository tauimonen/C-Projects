#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int i, j, x, k;
    int a, b, c, d;
    int leveys, max;

    a = atoi(argv[1]);
    b = atoi(argv[2]);
    c = atoi(argv[3]);
    d = atoi(argv[4]);

    /*Lasketaan sarakeleveys*/
    leveys = 2;
    max = b * d;
    while (max >= 10)
    {
        max = max / 10;
        leveys += 1;
    }

    for (k = 0; k < leveys; ++k)
    {
            printf(" ");
    }

    for (x = a; x <= b; ++x)
    {
        printf("%*d", leveys, x);
    }
    printf("\n");
    for  (i = c; i <= d; ++i)
    {
        printf("%*d", leveys, i);
        for (j = a; j <= b; ++j)
        {
            printf("%*d", leveys, i*j);
        }
        printf("\n");
    }

    return 0;
}