#include <stdio.h>
#include <stdlib.h>

int main()
{
    int val_int=1000000000;
    float val_float=0.0;
    char val_char='c';
    double val_double=0.0;

    printf(" La taille que prend un int est : %d\n", sizeof(val_int));
    printf(" La taille que prend un float est : %d\n", sizeof(val_float));
    printf(" La taille que prend un char est : %d\n", sizeof(val_char));
    printf(" La taille que prend un double est : %d\n", sizeof(val_double));

    printf(" La valeur du int est : %i\n", val_int);
    return 0;
}
