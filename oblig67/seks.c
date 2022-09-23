#include <stdio.h>

typedef struct {
    int lengde;
    int bredde;
} Rektangel;

int main()
{
    int Areal(Rektangel *r);

    int rader = 3,i,j;
    Rektangel rektangler[rader];

    for(i = 0;i<rader;i++)
    {   
        Rektangel rekt = { i+2,i+3 };
        rektangler[i] = rekt;
    }
    for(i = 0;i<rader;i++)
    {
        printf("Rektangel %d:\n", i+1);
        printf("Bredde: %d Lengde: %d Areal:%d\n", rektangler[i].bredde, rektangler[i].lengde, Areal(&rektangler[i]));
        printf("\n");
    }
    return 0;
}
int Areal(Rektangel *r)
{
    return r->bredde * r->lengde;
}