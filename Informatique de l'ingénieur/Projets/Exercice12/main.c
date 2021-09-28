#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    int i=0;
    char s[20];
    int tab[4]={10,20,30,40};
    char extension[]=".txt";

    printf("Tapez le nom du fichier a creer : \n");
    scanf("%s",s);
    strcat(s,extension);

    printf("%s\n",s);

    FILE *contenu_tableau;
    contenu_tableau = fopen(s,"w");
    for(i;i<4;i++)
    {
        fprintf(contenu_tableau,"tab[%d] = %d\n",i,tab[i]);
    }
    fclose(contenu_tableau);


    return 0;
}
