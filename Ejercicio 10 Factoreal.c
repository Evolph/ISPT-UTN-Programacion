#include<stdio.h>

int main()
{
    int numero, factorial=1, cont=0;

    do
    {
        printf("Ingrese un numero entero no negativo: ");
        scanf("%d", &numero);
    }
    while(numero<0);

    if(numero!=0)
    {
        for(cont; cont<numero; cont++)
        factorial*=cont+1;
    }

    printf("\nEl factorial de %d es %d", numero, factorial);

    return 0;

}
