#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include<stdbool.h>

int main()
{

    srand(time(NULL));
    int replay=1;
    int nAleat, n, i=1;
    do{
    switch(replay)
    {
        case 1:
            i=1;
            bool gagne=0;
            nAleat=rand()%100;
            /*printf("%d\n",nAleat);*/
            do{
            printf("Deviner la valeur entre 0 et 100 : ");
            scanf("%d",&n);
            if (n==nAleat)
            {
                printf("Gagne ! il vous a fallu %d essais\n",i);
                gagne=1;
            }

            else
            {
                printf("Perdu ! essaye encore\n");
                if(n>nAleat)
                    printf("-\n");
                else
                    printf("+\n");
                i++;
            }
            }while(!gagne);
            printf("Voulez-vous rejouer ? 1 pour oui, 0 pour non : ");
            scanf("%d",&replay);
            break;
        case 0:
            break;
        default:
            break;

    }
    }while (replay);


}
