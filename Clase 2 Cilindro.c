#include<stdio.h>
#include<math.h>


int main()
{
    float alto, radio;
    float pi= acos(-1);

    printf("Ingrese el valor de la altura del cilindro: ");
    scanf("%f", &alto);

    printf("Ingrese el valor del radio del cilindro: ");
    scanf("%f", &radio);

    printf("\nEl area es %.2f y el volumen es %.2f", 2*pi*radio*alto + 2*pi*pow(radio,2), pi*pow(radio,2)*alto);

    return 0;




}
