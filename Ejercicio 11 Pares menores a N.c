#include<stdio.h>

int main()
{
    int numero=-1, par, contador;

    do
    {
        printf("Ingrese un numero natural: ");
        scanf("%d", &numero);
    }
    while(numero<=0);

    printf("\nLos numeros pares menores a %d son: ", numero);

    for(contador=numero-1; contador>0; contador--)
    {
        if(contador%2==0)
            {
                printf("\n%d", contador);
            }
    }

    return 0;
}
