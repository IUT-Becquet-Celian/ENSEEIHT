#include <stdio.h>
#include <stdlib.h>

int main()
{
    int tab [5],i=0;
    for(i=0;i<5;i++)
    {
        tab[i]=0;
        printf("la valeur de la %d case est : %d, son adresse est : %d\n",i, tab[i], & tab[i]);
    }
    return 0;
}
