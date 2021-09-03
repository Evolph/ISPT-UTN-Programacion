#include<stdio.h>

int main()
{
    int natural=-1, contador;

    while(natural<0)
        {
            printf("Ingrese un numero natural: ");
            scanf("%d", &natural);
        }

    contador=natural;
    contador--;

    printf("\nLos numeros pares menores a %d son:", natural);

    while(contador>=0)
        {
            if(contador%2==0)
                printf("\n%d", contador);
            contador--;
        }
    if(natural==0)
        printf("\nNo hay naturales pares menores que 0");

    return 0;
}
