#include<stdio.h>
#include<string.h>

int main()
{
    int i;
    int inputSize = 30;
    char input[inputSize];
    scanf("%s",input);
    char * token = strtok(input, " ");
    while(token != NULL)
    {
        printf("%s\n", token);
        token = strtok(NULL, " ");
    }
}