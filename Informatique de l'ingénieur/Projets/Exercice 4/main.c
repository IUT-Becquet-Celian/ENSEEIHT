#include <stdio.h>
#include <stdlib.h>



int main()
{
    int val = 123;
    int *p_val = &val;

    *p_val=124;
    p_val=p_val+1;


    printf("La valeur de val est : %d\n",val);
    printf("L'adresse de val est : %d\n",&val);
    printf("L'adresse de p_val est : %d\n",p_val);


    /*double val2=123;
    double* p = &val2;
    return 0;*/
}
