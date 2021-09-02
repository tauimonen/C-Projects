#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

int main(int argc, char *argv[])
{
    int n;
    int size_b;
    int size;
    int aa = atoi(argv[1]);
    int bb = atoi(argv[2]);
    bool flag;
    bool first;
    int i;
    int j;
    int k;
    int* values;
    n = argc - 4;
    values = malloc(sizeof(int) * n);
    first = true;

    for (k = 0; k <= n; ++k)
    {
        values[k] = atoi(argv[k+3]);
    }

    size = n;

    for (i = aa; i <= bb; ++i)
    {
        flag = true;
        while (flag == true)
        {
            for (j = 0; j <= size; ++j)
            {
                if (values[j] == 1 || values[j] == 0)
                {
                    return 0;
                }
                if (i % values[j] == 0)
                {
                    flag = false;
                }
                else
                {
                    if (j == size && flag == true)
                    {
                        if (first == true)
                        {
                          printf("%d", i);
                          first = false;
                        }
                        else
                        {
                          printf(" %d", i);
                        }
                        flag = false;
                    }
                }  
            } 
        }    
    }
    printf("\n");

    return 0;
}