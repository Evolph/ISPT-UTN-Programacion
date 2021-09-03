#include<stdio.h>

int main()
{
    int numero, cont1=0;
    long int buscado=1, perfecto=0;

    printf("Ingrese un numero natural: ");
    scanf("%d", &numero);
    printf("\nLos primeros %d numeros perfectos son:", numero);

    while(cont1<numero)
    {
        for(int cont2=1; cont2<buscado; cont2++)
        {
            if(buscado%cont2==0 && buscado!=1)
            {
                perfecto+=cont2;
            }
        }

        if(perfecto==buscado)
        {
            printf("\n%d", buscado);
            cont1++;

        }
        perfecto=0;
        buscado++;
    }



    return 0;
}
