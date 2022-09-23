#include <stdio.h>
#include <string.h>

int main()
{
    char *txt = NULL;
    char splittegn[] = " ";
    size_t len = 0;
    int i;
    char *ord;
    char ordTabell[4][10];

    printf("Skriv inn fire ord separert av mellomrom: ");
    getline(&txt, &len, stdin);

    ord = strtok(txt, splittegn);

    for (i = 0; i < 4; i++)
    {
        strcpy(ordTabell[i], ord);
        ord = strtok(NULL, splittegn);
    }
    for(i = 0;i<4;i++)
    {
        printf("%s\n", ordTabell[i]);
    }
    return 0;
}