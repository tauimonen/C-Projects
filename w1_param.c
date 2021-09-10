#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void repeat(int c, int times) {
    int i;
    for (i = 0; i <= times; ++i) {
        printf("%c", c);
    }
}

int main(int argc, char *argv[]) {
    int n;
    int i;
    int maxLen;
    int paramCount;
    int paramWidth;
    int totalWidth;
    char *strings[30];
    n = argc - 1;
    maxLen = 0;
    paramWidth = 1;
    paramCount = argc;

    for (i = 1; i <= n; ++i) {
        strings[i - 1] = argv[i];
        if (strlen(argv[i]) > maxLen) {
            maxLen = strlen(argv[i]);
        }
    }
    while (paramCount >= 10) {
        paramCount = paramCount / 10;
        paramWidth++;
    }

    totalWidth = 7 + paramWidth + maxLen; 
    repeat(35, totalWidth);
}