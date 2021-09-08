#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>


int uniq(double arr[], int n)
    {
        bool first;
        int i;
        int j;
        int count;
        first = true;

        for(i = 0; i < n; i++)
        {
            count = 0;
            for(j = 0; j < n; j++)
            {
                if (i != j)
                {
		            if(arr[i] == arr[j])
                    {
                        count++;
                    }
                }
            }
            if(count == 0)
            {
                if (first == true)
                {
                    printf("Ainutlaatuiset:");
                    first = false;
                }
                printf(" %f", arr[i]);
            }
        }
        if (first == false)
        {
            printf("\n");
        }
        return 0;
    }

int main(int argc, char *argv[])
{
    double small;
    double large;
    int count;
    int max_count;
    int index, u_index;
    bool is_first;
    int n;
    int i, j;
    double* most_usual_values;
    double* unique; 
    is_first = true;
    n = argc - 1;
    most_usual_values = malloc(sizeof(double) * n);
    unique = malloc(sizeof(double) * n);
    count = 0;
    max_count = 0;
    index = 0;
    u_index = 0;

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

        for (j = i + 1; j <= n; ++j)
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

    for (u_index = 0; u_index < n; ++u_index)
    {
        unique[u_index] = atof(argv[u_index + 1]);
    }

    uniq(unique, n);
  
    if (max_count > 0)
    {
        printf("Useimmiten esiintyneet (%d kertaa):", max_count + 1);
        for (i = 0; i <= index - 1; ++i)
        {
            printf(" %f", most_usual_values[i]);
        }
        printf("\n");
    }
    return 0;
}