#include <stdio.h>
#include <limits.h>
#include <stdlib.h>


void nousevaJono(int i)
{
  unsigned int u = 0;
  for(u = 0; u <= i; ++u)
  { /* Tavoite olisi tulostaa luvut 0, 1, ..., i. */
    printf(" %u", u);
  }
​}

void laskevaJono(int i)
{
  unsigned int u = 0;
  for(u = i; u >= 0; --u)
  { /* Tavoite olisi tulostaa luvut i, i-1, ..., 0. */
    printf(" %u", u);
  }
​}

int main() {
    nousevaJono(50);
    
}