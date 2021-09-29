#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "kuu.h"

KK_PAIVAT[2][KK_LKM] = {{31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31},{31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}};
*KK_NIMET[KK_LKM] = {"tammikuu", "helmikuu", "maaliskuu", "huhtikuu", "toukokuu", "kesäkuu", "heinäkuu", "elokuu", "syyskuu", "lokakuu", "marraskuu", "joulukuu"};



int karkausvuosi(int vuosiluku) {
    if (vuosiluku == 0)
        return 0;
    if (vuosiluku % 400 == 0) 
        return 1; 
    if (vuosiluku % 4 == 0 && vuosiluku % 100 != 0)
        return 1;
    return 0;
}

char kkPituus(const char *kkNimi, int vuosiluku) {
    int kv, len, i;
    char kk[20];
    i = 0;

    strcpy(kk, kkNimi);
    len = strlen(kk);
    kv = karkausvuosi(vuosiluku);

    if (vuosiluku <= 0)
        return -1;

    for(i = 0; i <= strlen(kk); ++i){
      if(kk[i] >= 65 && kk[i] <= 90)
         kk[i] = kk[i] + 32;
    }

    for (i = 0; i < KK_LKM - 1; ++i) {
		if (!strcmp(kk, KK_NIMET[i])) {
			break;
		}
	}

    if (strlen(KK_NIMET[i]) != len) {
        return -1;
    }
    
    return KK_PAIVAT[kv][i];
    
}

int main() {
    printf("Helmikuu 2016: %d päivää\n", kkPituus("Helmikuu", 0));
    printf("Helmikuu 2100: %d päivää\n", kkPituus("helmikuu", 2100));
    printf("Helmi kuu 2100: %d päivää\n", kkPituus("helmi kuu", 2100));
    return 0;
}