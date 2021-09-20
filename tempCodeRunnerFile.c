#include <stdio.h>
#include <math.h>
#include <string.h>
#include <bool.h>

int main(int argc, char *argv[]) {
    int len;
    int i;
    int sum;
    bool isFirst;
    isFirst = true;
    sum = 0;
    len = strlen(argv[1]) - 1;

    for (i = len; i >= 0; --i) {
        if (argv[i] == 1) {
            if (isFirst) {
                sum += -(pow(2, i));
                isFirst = false;
            } else {
                sum += -pow(2, i);
            }
        }
    }

    printf("%d", sum);
}
