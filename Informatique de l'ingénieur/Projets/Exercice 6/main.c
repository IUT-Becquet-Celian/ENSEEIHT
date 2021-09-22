#include <stdio.h>
#include <stdlib.h>

int main()
{
    char tab[6]="Salut";
    int i=0;
    for(i=0;i<6;i++)
    {
        printf("%c",tab[i]);
    }
    printf("\nl'adresse a laquelle est stoche le tableau est : %d\n",&tab);
    printf("Changement de la chaine de caractère, tapez la nouvelle : ");
    scanf("%s",&tab);
    i=0;
    for(i=0;i<6;i++)
    {
        printf("%c",tab[i]);
    }

}
