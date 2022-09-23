#include <stdio.h>

struct operasjon
{
    char operator;
    int operand1;
    int operand2;
};

int main()
{
    void funksjonSomTarInnEnStruct(struct operasjon minstruct);
    struct operasjon minstruct = {};

    printf("Skriv inn tall 1: ");
    scanf("%d", &minstruct.operand1);
    printf("\n");

    printf("Skriv inn operator: ");
    scanf("%s", &minstruct.operator);
    printf("\n");

    printf("Skriv inn tall 2: ");
    scanf("%d", &minstruct.operand2);
    printf("\n");

    funksjonSomTarInnEnStruct(minstruct);
    return 0;
}

void funksjonSomTarInnEnStruct(struct operasjon minstruct)
{
    int desimal;
    int heltall;
    switch (minstruct.operator)
    {
    case '+':
        printf("%d %c %d = %d\n", minstruct.operand1, minstruct.operator, minstruct.operand2, (minstruct.operand1 + minstruct.operand2));
        break;
    case '-':
        printf("%d %c %d = %d\n", minstruct.operand1, minstruct.operator, minstruct.operand2, (minstruct.operand1 - minstruct.operand2));
        break;
    case '*':
        printf("%d %c %d = %d\n", minstruct.operand1, minstruct.operator, minstruct.operand2, (minstruct.operand1 * minstruct.operand2));
        break;
    case '/':
        heltall = (float)minstruct.operand1 / (float)minstruct.operand2;
        desimal = minstruct.operand1 % minstruct.operand2;
        printf("%d %c %d = %d %d/%d\n", minstruct.operand1, minstruct.operator, minstruct.operand2, heltall, desimal, minstruct.operand2);
        break;
    default:
        printf("%c er ikke en støttet operator, kun + - * / kan brukes som operatorer!\n", minstruct.operator);
    }
}