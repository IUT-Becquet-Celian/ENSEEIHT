#include <stdio.h>
#include <stdlib.h>

void permuter_valeur (float *a, float *b,float *c);

int main()
{
    float a,b,c;
    printf("\n Permuteur de trois valeurs a, b et c \nEntrez a : ");
    scanf("%f", &a);
    printf("Entrez b : ");
    scanf("%f", &b);
    printf("Entrez c : ");
    scanf("%f", &c);
    permuter_valeurs(&a,&b,&c);
    printf("\n Les valeurs permutees de a, b et c sont : a = %f, b = %f, b = %f",a,b,c);
    return 0;
}

void permuter_valeurs(float *a, float *b, float *c)
{
    int t=*a;
    *a=*b;
    *b=*c;
    *c=t;

}
