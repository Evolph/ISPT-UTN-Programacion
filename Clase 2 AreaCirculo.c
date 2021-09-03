#include<stdio.h>
#include<math.h>

int main()
{
    float radio, area;
    double pi= acos(-1.0);

    printf("Ingrese el valor del radio del círculo: ");
    scanf("%f", &radio);

    radio= pi * pow(radio, 2);

    printf("\nEl area del circulo es %f", radio);


return 0;

}
