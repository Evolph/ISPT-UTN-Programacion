#include<stdio.h>

int main()
{
    int Natural;

    printf("Ingrese un numero natural: ");
    scanf("%d", &Natural);

    if(Natural%2==0)
        printf("\nEl numero %d es par", Natural);
    else
        printf("\nEl numero %d es impar", Natural);

    return 0;
}
