#include <stdio.h>
#include <math.h>

int x = 100;
// double y = sqrt(x); Error: global variable should init. with const 

void do_something(void) {
    static int x = 0;
    int y = 0;
    x += 1;
    y += 1;
    printf("%d ja %d\n", x, y);
}

int main(int argc, char *argv[]) {
    int i = 0;
    for (i = 0; i < x; ++i) {
        do_something();
    }
    return 0;
}