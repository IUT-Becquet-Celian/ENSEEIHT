#include <stdio.h>
#include <stdlib.h>

void var_fonction (int *i, int *j, int k, int l);


void main()
{
    int a=1, b=-2, c=3, d=-4;
    printf("\n valeur des variables en entree du programme principal  \n");
    printf(" a = %d b = %d \n",a,b);
    printf(" c = %d d = %d \n",c,d);

    printf("\n adresse des variables \n");
    printf(" &a = %p &b = %p \n",&a,&b);
    printf(" &c = %p &d = %p \n",c,d);

    var_fonction(&a,&b,c,d);

    printf("\n valeur des variables en sortie de var_fonction  \n");
    printf(" a = %d b = %d \n",a,b);
    printf(" c = %d d = %d \n",c,d);

}

void var_fonction (int *i, int *j, int k, int l)
{
    int u=2,v=2;

    printf("\n adresse des variables internes var_fonction \n");
    printf("i = %p j = %p \n",i,j);
    printf("k = %p l = %p \n",&k,&l);
    printf("u = %p v = %p \n",&u,&v);

    *i=u;
    *j=v;
    k=u;
    l=v;

}

