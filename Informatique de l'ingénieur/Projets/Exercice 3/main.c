#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef struct
{
    float rayon;
    float diametre;
    float perimetre;
    float aire;
}Cercle;

float diametreCercle (float);
float perimetreCercle (float);
float aireCercle (float);

int main()
{
    Cercle cercle1;
    printf("Donnez la valeur du rayon en cm : ");
    scanf("%f",&cercle1.rayon);
    cercle1.diametre=diametreCercle(cercle1.rayon);
    cercle1.perimetre=perimetreCercle(cercle1.rayon);
    cercle1.aire=aireCercle(cercle1.rayon);
    printf("Le rayon du cercle est de %f cm\n", cercle1.rayon);
    printf("Le diametre du cercle est de %f centimetres\n", cercle1.diametre);
    printf("Le perimetre du cercle est de %f centimetres\n", cercle1.perimetre);
    printf("L'aire du cercle est de %f centimetres\n", cercle1.aire);

    return 0;
}

float diametreCercle (float r)
{
    return 2*r;
}

float perimetreCercle (float r)
{
    return 3.14*2*r;
}

float aireCercle (float r)
{
    return 3.14*r*r;
}
