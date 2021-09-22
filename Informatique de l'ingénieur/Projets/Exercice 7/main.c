#include <stdio.h>
#include <stdlib.h>

int main()
{
    int tab[3],indice=0,choix=0, i=0;
    do{
    printf("Quelle indice du tableau voulez-vous modifier ? Tapez 0, 1, 2 ou 3 : ");
    scanf("%d",&indice);
    switch(indice){
        case 0 :
             printf("Nouvelle valeur a l'indice %d : ", indice);
             scanf("%d", &tab[indice]);
             break;
        case 1 :
            printf("Nouvelle valeur a l'indice %d : ", indice);
            scanf("%d", &tab[indice]);
            break;
        case 2 :
            printf("Nouvelle valeur a l'indice %d : ", indice);
            scanf("%d", &tab[indice]);
            break;
        case 3 :
            printf("Nouvelle valeur a l'indice %d : ", indice);
            scanf("%d", &tab[indice]);
            break;
    }
    for(i=0;i<4;i++)
    {
        printf("la valeur de la %d case est : %d\n",i, tab[i]);
    }
    printf("Voulez-vous continuer ? Tapez 1 pour oui et 0 pour non\n");
    scanf("%d",&choix);
    }while(choix==1);
    return 0;
}
