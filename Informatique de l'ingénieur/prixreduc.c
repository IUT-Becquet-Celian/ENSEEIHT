#include <stdio.h>
#include <stdlib.h>

float prix=0;
float reduction=0;
float calculerPrix(float,float);
char exit;

int main(void)
{
    do {
    printf("Entrez le prix : ");
    scanf("%f", &prix);
    printf("Entrez la reduction : ");
    scanf("%f", &reduction);
    printf("Le prix final est de : %.f\n", calculerPrix(prix,reduction));
    printf("Voulez-vous continuer ? (Y/N)");
    scanf("%c", &exit);

    } while(exit !='n' || exit!='N')

}

return 0;
}


float calculerPrix (float prix, float reduction)
{
    return prix-(prix*reduction/100);

}
