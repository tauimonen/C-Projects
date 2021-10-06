/*
Program to demonstrate C pointers.
*/

#include <stdio.h>

int main() {
    int a;
    int *p;
    a = 10;
    // p = &a; // &a = address of a

    printf("%d\n", a);
    *p = 12; // dereferencing
    printf("a = %d\n", a);

    printf("%d\n", p);
    printf("%d\n", *p); // *p = value at address pointed by b
    printf("%d\n", &a);
}