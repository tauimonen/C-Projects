#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main(int argc, char *argv[])
{
    double small;
    double large;
    int count;
    int max_count;
    int index;
    bool is_first;
    int n;
    int i, j;
    double* most_usual_values;
    is_first = true;
    n = argc - 1;
    most_usual_values = malloc(sizeof(double) * n);
    count = 0;
    max_count = 0;
    index = 0;


    for (i = 1; i <= n; ++i)
    {
        if (is_first == true)
        {
            small = atof(argv[i]);
            large = atof(argv[i]);
            is_first = false;
        }

        if (atof(argv[i]) < small)
        {
            small = atof(argv[i]);
        }

        if (atof(argv[i]) > large)
        {
            large = atof(argv[i]);
        }

        for (j = i; j <= n; ++j)
        {
            if (atof(argv[i]) == atof(argv[j]))
            {
                count += 1;
            }
        }

        if (count == max_count)
        {
            most_usual_values[index] = atof(argv[i]);
            index += 1;
        }

        if (count > max_count)
        {
            max_count = count;
            most_usual_values = malloc(sizeof(double) * n);
            index = 0;
            most_usual_values[index] = atof(argv[i]);
            index += 1;
        }
        count = 0;
    }
    printf("Pienin: %f\n", small);
    printf("Suurin: %f\n", large);
    if (max_count > 1)
    {
        printf("Useimmiten esiintyneet (%d kertaa):", max_count);
        for (i = 0; i <= index - 1; ++i)
        {
            printf(" %f", most_usual_values[i]);
        }
        printf("\n");
    }
    
}