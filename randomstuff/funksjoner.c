#include <stdio.h>

int main()
{
    int tallEn;
    int tallTo;
    int addisjon(int a, int b);
    printf("Vennligst skriv inn ett tall:");
    scanf("%d", &tallEn);
    printf("Vennligst skriv inn ett tall til:");
    scanf("%d", &tallTo);

    int tallTre = addisjon(tallEn, tallTo);

    printf("%d\n", tallTre);

    return 0;
}

int addisjon(int a, int b)
{
    return (a + b);
}