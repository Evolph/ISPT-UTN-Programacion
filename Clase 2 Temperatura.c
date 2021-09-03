#include<stdio.h>

int main()
{
    float celcius, far, kelvin;

    printf("Ingrese el valor de la temperatura en °C: ");
    scanf("%f", &celcius);

    far= (celcius *1.8) + 32;

    kelvin= celcius + 273.15;

    printf("\nLa temperatura de %.2f (C) es equivalente a %.2f (F) y a %.2f (K)\n\n\n", celcius, far, kelvin);

    return 0;



}
