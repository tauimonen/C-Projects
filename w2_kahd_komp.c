#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    int sum, i, n, index;
    char sign;
    sign = argv[1][0];
    sum = 0;
    n = strlen(argv[1]) - 1;

    for (i = 0; i <= n; ++i) {
        index = n - i;
        if (argv[1][i] == '1') {
            if (sign == '1' && i == 0) {
                sum += -(pow(2, index));
            } else {
                sum += pow(2, index);
            }
        } 
    }
    printf("%d\n", sum);
    
    return sum;
}






