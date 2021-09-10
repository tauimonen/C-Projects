#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>


int main(int argc, char *argv[]) {
    int n, i, j;
    int flag;
    int len;
    char *strings[30];
    n = argc - 1;

    for (i = 1; i <= n; ++i) {
        strings[i - 1] = argv[i];
    }

    for (i = 0; i < n; ++i) {
        flag = 0;
        len = strlen(strings[i]);
        for (j = 0; j < len; ++j) {
            if ((tolower(strings[i][j]) != tolower(strings[i][(len-1)-j])) && flag == 0) {
                printf("\"%s\": ei ole palindromi\n", strings[i]);
                flag = 1;
            }
        }
        if (flag == 0){
            printf("\"%s\": on palindromi\n", strings[i]);
        }
    }
    return 0;
}