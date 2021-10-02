#include <stdio.h>
#include <stdlib.h>
#include "w2_arv.h"

void vaihda(int *a, int *b) {
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

void jarjesta(int *a, int *b, int *c) {
    int temp, av, bv, cv, tempv;
    av = *a;
    bv = *b;
    cv = *c;

    if (cv < bv) {
        temp = *c;
        *c = *b;
        *b = temp;
        tempv = cv;
        cv = bv;
        bv = tempv;
    }
    if (bv < av) {
        temp = *b;
        *b = *a;
        *a = temp;
        tempv = bv;
        bv = av;
        av = tempv;
    }
    if (cv < bv) {
        temp = *c;
        *c = *b;
        *b = temp;
        tempv = cv;
        cv = bv;
        bv = tempv;
    }
}

int main(int argc, char *argv[])
{
  int x = atoi(argv[1]);
  int y = atoi(argv[2]);
  int z = atoi(argv[3]);
  printf("%d %d %d\n", x, y, z);
  vaihda(&x, &y);
  printf("%d %d %d\n", x, y, z);
  jarjesta(&x, &y, &z);
  printf("%d %d %d\n", x, y, z);
  return 0;
}