#include<stdio.h>

int main()
{
    int entero, noprimo=0;

    printf("Ingrese un numero entero: ");
    scanf("%d", &entero);

    for(int contador=entero-1; contador>0; contador--)
    {
        if(entero%contador==0 && contador!=1)
            noprimo++;
    }

    if(noprimo==0)
        printf("\nEl numero %d es primo", entero);
    else
        printf("\nEl numero %d no es primo", entero);

    return 0;
}
