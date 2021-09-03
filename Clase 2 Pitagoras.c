#include<stdio.h>
#include<math.h>

int main()
{
    float lado1, lado2, hipotenusa;

    printf("Ingrese el valor del lado 1: ");
    scanf("%f", &lado1);

    printf("\nIngrese el valor del lado 2: ");
    scanf("%f", &lado2);

    hipotenusa= sqrt(pow(lado1, 2) + pow(lado2, 2));

    printf("La hipotenusa del triangulo con lados de %.2f cm y %.2f cm es de %.2f cm", lado1, lado2, hipotenusa);

    return 0;



}
