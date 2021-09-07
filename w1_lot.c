#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int voittorivi[7];
    int lottorivi[7];
    int oikein[7];
    int oikein_laskuri;
    int i;
    int j;
    int k;
    int l;
    int n;

    n = 7;
    oikein_laskuri = 0;

    for (i = 1; i <= n; ++i)
    {
        voittorivi[i-1] = atoi(argv[i]);
    }

    for (j = 8; j <= 14; ++j)
    {
        lottorivi[j-8] = atoi(argv[j]);
    }

    for (k = 0; k <= 6; ++k)
    {
        for (l = 0; l <= 6; ++l)
        {
            if (lottorivi[k] == voittorivi[l])
            {
                oikein[oikein_laskuri] = voittorivi[l];
                oikein_laskuri += 1;
            }
        }
    }

    printf("Voittorivi:");
    for (i = 0; i <= 6; ++i)
    {
        printf(" %i", voittorivi[i]);
    }
    printf("\n");

    printf("Lottotrivi:");
    for (i = 0; i <= 6; ++i)
    {
        printf(" %i", lottorivi[i]);
    }
    printf("\n");

    if (oikein_laskuri == 0)
    {
        printf("Ei yhtään oikein!\n");
        return 0;
    }

    printf("%i oikein:", oikein_laskuri);
    for (i = 0; i < oikein_laskuri; ++i)
    {
        printf(" %i", oikein[i]);
    }
    printf("\n");

    return 0;
}