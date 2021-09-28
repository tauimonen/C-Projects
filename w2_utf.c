#include <stdio.h>

int main() {
    unsigned char x[3] = {195, 164, '\0'};
    printf("<html>mik%s</html>\n", x);
    return 0;
}