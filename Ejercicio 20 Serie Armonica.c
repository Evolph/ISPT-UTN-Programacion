#include<stdio.h>

int main()
{
    float numero, sumaterminos=1;
    int cantterminos=1;

    do
    {
        printf("Ingrese un valor real entre 1 y 10: ");
        scanf("%f", &numero);
    }
    while(numero<1 || numero>10);

    while(numero>=sumaterminos)
    {
        cantterminos++;
        sumaterminos+=1.0/cantterminos;

    }


    printf("\nSe necesitan %d terminos de la serie armonica para cumplir la desigualdad", cantterminos);

    return 0;
}
