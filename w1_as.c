#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[])
{
    int aa = atoi(argv[1]);
    int bb = atoi(argv[2]);

    int i; 
    
    {
      for (i=aa; i <= bb; ++i)
      {
        printf("%d: %c\n", i, i);
      }
    }
           
    
    return 0;
}