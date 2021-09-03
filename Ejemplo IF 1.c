#include<stdio.h>

int main()
{
    float lado1, lado2, lado3;

    printf("Ingrese el valor del primer lado: ");
    scanf("%f", &lado1);

    printf("\nIngrese el valor del segundo lado: ");
    scanf("%f", &lado2);

    printf("\nIngrese el valor del tercer lado: ");
    scanf("%f", &lado3);

    if(lado1==lado2 && lado1==lado3 && lado2==lado3)
        printf("\nEl triangulo de lados %.2f, %.2f y %.2f es equilatero.", lado1, lado2, lado3);
    else
    {
        if(lado1!=lado2 && lado1!=lado3 && lado2!=lado3)
            printf("\nEl triangulo de lados %.2f, %.2f y %.2f es escaleno.", lado1, lado2, lado3);
        else
            printf("\nEl triangulo de lados %.2f, %.2f y %.2f es isósceles.", lado1, lado2, lado3);
    }

    printf("\nPrograma finalizado.");
    return 0;
}
