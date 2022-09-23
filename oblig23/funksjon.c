#include <stdio.h>

void konverterTilBinart(int num)
{
    int antallBits = 8; // Verdiområdet til tallene kan være fra og med 0 til og med 255, derfor trenger vi 8 bits.
    int index, i;
    int binareTall[antallBits]; // Her skal de binære verdiene legges inn.

    index = antallBits - 1; // Siden index er 0-based

    while (index >= 0)
    {
        binareTall[index] = num & 1; // SJEKKER OM LSB i num er 1(1 = 00000001)
        index--;                     // Reduserer index med 1
        num >>= 1;                   // bitskift mot høyre + tilordning
    }
    printf("Binær: ");
    for (i = 0; i < antallBits; i++) // Looper igjennom og printer ut de binære tallene, stopper når i er 1 mindre enn antallbits(kan også bruke <= index)
    {
        printf("%d", binareTall[i]);
    }
    printf("\n");
}