#include<stdio.h>

int main()
{
    int natural=0, fibo=1, anterior=1,aux;

    while(natural<1)
    {
        printf("Ingrese un numero natural: ");
        scanf("%d", &natural);
    }

    printf("\nLos primeros %d terminos de la Sucesion de Fibonacci son: ", natural);

    for(int contador=0; contador<natural; contador++)
    {
        if(contador<=1)
            printf("\n%d", fibo);
        else
        {
            aux=fibo;
            fibo+=anterior;
            anterior=aux;

            printf("\n%d", fibo);
        }
    }




    return 0;
}
