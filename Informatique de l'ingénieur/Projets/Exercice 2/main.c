#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a = 3;
    int b = 4;
    int result = a&b;
    printf("%i\n\n",result);
    if (a>b)
        printf("%d est superieur a %d\n",a,b);
    else if (a==b)
        printf("%d est egal a %d\n",a,b);
    else
        printf("%d est inferieur a %d\n",a,b);
    return 0;
}
