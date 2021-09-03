#include<stdio.h>

void FaC(int f)
{
    float celcius=((f-32)*5)/9;

    printf("\nTemp. Fahrenheit      Temp. Celcius");
    printf("\n%16.d     %14.f", f, celcius);
}

int main()
{
    int fahr;
    char salir;

    do
    {


        printf("Ingrese una temperatura en Fahrenheint: ");
        scanf("%d", &fahr);
        FaC(fahr);
        printf("\nDesea ingresar otro valor? s/n: ");
        fflush(stdin);
        scanf("%c", &salir);
    }
    while(salir=='s' || salir=='S');

    return 0;
}
