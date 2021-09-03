#include<stdio.h>

int main()
{
    const int clave=12345;
    int valor;

    printf("Ingrese la clave de ingreso: ");
    scanf("%d", &valor);

    while(valor!=clave)
    {
        printf("\nEsa no es la clave! Ingrese nuevamente: ");

        scanf("%d", &valor);
    }

    printf("\nAcertaste! Bienvenido.");

    return 0;
}
