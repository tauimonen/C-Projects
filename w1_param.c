/*
Program prints the comment line parameters as 
a table with indexes.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void repeat(int c, int times) {
    int i;
    for (i = 0; i < times; ++i) {
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
    char *strings[500];
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
    printf("\n");

    for (i = 0; i < n; ++i) {
        printf("%c %*d | %-*s %c\n", 35, paramWidth, i+1, maxLen, strings[i], 35);
        if (i < n - 1) {
            repeat(35, 1);
            repeat(45, paramWidth + 2);
            repeat(43, 1);
            repeat(45, maxLen + 2);
            repeat(35, 1);
            printf("\n");
        }
    } 
    repeat(35, totalWidth);
    printf("\n");

    return 0;
}