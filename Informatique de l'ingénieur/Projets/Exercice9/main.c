#include <stdio.h>
#include <stdlib.h>

float calculer_y(float a, float b, float x);

int main()
{
    float a,b,x;
    printf("\n Calculateur fonction y=a*x+b \nEntrez a : ");
    scanf("%f", &a);
    printf("Entrez b : ");
    scanf("%f", &b);
    printf("Entrez x : ");
    scanf("%f", &x);
    printf("y = %f", calculer_y(a,b,x));
    return 0;
}

float calculer_y(float a, float b, float x)
{
    return a*x+b;
}

