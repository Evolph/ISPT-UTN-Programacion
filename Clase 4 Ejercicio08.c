#include<stdio.h>

int main()
{
    int numero=-1, contador, factorial=1;

    while(numero<0)
        {
            printf("Ingrese un numero del conjunto de los naturales+0: ");
            scanf("%d", &numero);
        }
    if(numero==0)
        printf("\nEl factorial de %d es 1.", numero);
    else
        {
            contador=numero;

            while(contador>0)
                {
                    factorial*=contador;
                    contador--;
                }

            printf("\nEl factorial de %d es %d.", numero, factorial);
        }

    return 0;
}
