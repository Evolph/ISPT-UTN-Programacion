#include<stdio.h>

int main()
{
    int numero1, numero2;

    printf("Ingrese el numero 1: ");
    scanf("%d", &numero1);

    printf("Ingrese el numero 2: ");
    scanf("%d", &numero2);

    if(numero1<0 && numero2>0 || numero1>0 && numero2<0) //con 2 operadores logicos
        printf("\nSignos Opuestos\n\n");

    //con 1 operador logico

    if(numero1*numero2<0) // sin operador logico
        printf("Signos Opuestos");

    return 0;
}
