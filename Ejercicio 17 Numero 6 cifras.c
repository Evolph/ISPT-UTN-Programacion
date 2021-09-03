#include<stdio.h>

int main()
{
    int numero, cantcifras=0, cociente;

    do
    {
        printf("Ingrese un numero entero de hasta 6 cifras: ");
        scanf("%d", &numero);
    }
    while(numero<=-999999 || numero>=999999);


    cociente=numero;

    while(cociente)
    {
        cociente=cociente/10;
        cantcifras++;
    }

    printf("\nEl numero %d tiene %d cifras.", numero, cantcifras);

    return 0;
}
