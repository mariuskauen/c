#include <stdio.h>
#include "funksjon.c"

int main()
{
    int antallTall = 2; // Hvor mange tall som skal konverteres.
    int tall;
    for (int i = 0; i < antallTall; i++)
    {
        printf("Skriv inn et heltall mellom 0 og 255: ");
        scanf("%d", &tall);
        konverterTilBinart(tall);
    }
    return 0;
}