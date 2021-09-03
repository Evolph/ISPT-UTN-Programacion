#include<stdio.h>

int main()
{
    float monto;

    printf("Ingrese el monto: ");
    scanf("%f", &monto);

    while(monto<0)
        {
            printf("El monto no puede ser negativo! Ingrese un valor positivo: ");
            scanf("%f", &monto);

        }

    printf("El monto es valido!");

    return 0;
}
