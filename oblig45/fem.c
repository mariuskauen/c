#include <stdio.h>

enum operator {
    pluss = '+', minus = '-', gange = '*', dele = '/'
};

struct operasjon {
  enum operator op;
  int  operand1;
  int  operand2;
};

int main()
{
   
    void funksjonSomTarInnEnStruct(struct operasjon minstruct);
    struct operasjon minstruct;


    char opChar;
    printf("Skriv inn tall 1: ");
    scanf("%d", &minstruct.operand1);
    printf("\n");

    printf("Skriv inn operator: ");
    scanf("%s", &opChar);
    printf("\n");

    printf("Skriv inn tall 2: ");
    scanf("%d", &minstruct.operand2);
    printf("\n");

    minstruct.op = opChar;
    
    funksjonSomTarInnEnStruct(minstruct);

    return 0;
}

void funksjonSomTarInnEnStruct(struct operasjon minstruct)
{
    int desimal;
    int heltall;

    switch(minstruct.op)
    {
        case pluss:
            printf("%d %c %d = %d\n", minstruct.operand1, minstruct.op,minstruct.operand2, (minstruct.operand1 + minstruct.operand2));
            break;
        case minus:
            printf("%d %c %d = %d\n", minstruct.operand1, minstruct.op,minstruct.operand2, (minstruct.operand1 - minstruct.operand2));
            break;
        case gange:
            printf("%d %c %d = %d\n", minstruct.operand1, minstruct.op,minstruct.operand2, (minstruct.operand1 * minstruct.operand2));
            break;
        case dele:
            heltall = (float)minstruct.operand1 / (float)minstruct.operand2; 
            desimal = minstruct.operand1 % minstruct.operand2;
            printf("%d %c %d = %d %d/%d\n", minstruct.operand1, minstruct.op,minstruct.operand2, heltall, desimal, minstruct.operand2);
            break;
        default:
            printf("Kun + - * / kan brukes som operatorer!\n");
    }
}