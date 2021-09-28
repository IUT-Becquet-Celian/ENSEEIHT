#include <stdio.h>
#include <stdlib.h>

void calculer_produit_somme(float a, float b);

int main()
{
    float a,b;
    printf("\n Calculateur fonction a*b et a+b \nEntrez a : ");
    scanf("%f", &a);
    printf("Entrez b : ");
    scanf("%f", &b);
    calculer_produit_somme(a,b);
        return 0;
}

void calculer_produit_somme(float a, float b)
{
    float s=a+b;
    float p=a*b;
    printf("\nLa somme de a et b vaut : %f\nLe produit de a et b vaut : %f\n",s,p);
}

