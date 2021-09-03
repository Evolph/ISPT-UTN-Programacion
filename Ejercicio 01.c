#include<stdio.h>

int main()
{
    int numero;

    printf("Ingrese un numero entero: ");
    scanf("%d", &numero);

    if(numero<0)
        printf("\nEl numero %d es negativo", numero);
    else
    {
        if(numero>0)
            printf("\nEl numero %d es positivo", numero);
        else
            printf("\nEl numero es cero");
    }

    return 0;
}
