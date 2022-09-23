#include <stdio.h>

typedef struct {
    int lengde;
    int bredde;
} Rektangel;

int main()
{
    int Areal(Rektangel *r);
    void skriv_arealer(Rektangel rektangler[], int rader);

    int rader = 7,i,j;
    Rektangel rektangler[rader];

    for(i = 0;i<rader;i++)
    {   
        Rektangel rekt = { i+2,i+3 };
        rektangler[i] = rekt;
    }

    skriv_arealer(rektangler,rader);

    return 0;
}
int Areal(Rektangel *r)
{
    return r->bredde * r->lengde;
}
void skriv_arealer(Rektangel rektangler[], int rader)
{
    int i;
    for(i = 0;i<rader;i++)
    {
        printf("Rektangel %d:\n", i+1);
        printf("Bredde: %d Lengde: %d Areal:%d\n", rektangler[i].bredde, rektangler[i].lengde, Areal(&rektangler[i]));
        printf("\n");
    }
}
