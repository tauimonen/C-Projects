/*
Program to demonstrate C pointer arithmetic.
*/
#include <stdio.h>

int main() {
    int a = 10;
    int *p;
    p = &a;
    // Pointer arithmetic
    printf("Address p is %d\n", p);
    // Size of a integer is 4 bytes, so the address increments 4
    printf("Size of integer is %d bytes\n", sizeof(int));
    printf("Address p + 1 is %d\n", p+1);
    printf("Address p + 2 is %d\n", p+2); // + 8 bytes
    printf("Address p + 1 is %d\n", *(p+1));
}
