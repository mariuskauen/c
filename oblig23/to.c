#include <stdio.h>
#include "funksjon.c"

int main()
{
    printf("Skriv inn et heltall mellom 0 og 255: ");
    int tall;
    scanf("%d", &tall);
    konverterTilBinart(tall);
    return 0;
}