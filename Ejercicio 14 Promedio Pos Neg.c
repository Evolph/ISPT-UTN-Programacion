#include<stdio.h>

int main()
{
    int cantidad, ciclo, cantceros=0, cantpos=0, cantneg=0;
    float numero, sumapos=0, sumaneg=0;

    do
    {
        printf("Ingrese un numero natural: ");
        scanf("%d", &cantidad);
    }
    while(cantidad<=0);

    for(ciclo=0; ciclo<cantidad; ciclo++)
    {
        printf("\nIngrese un numero real: ");
        scanf("%f", &numero);
        if(numero!=0)
        {
            if(numero>0)
            {
                sumapos+=numero;
                cantpos++;
            }
            else
            {
                sumaneg+=numero;
                cantneg++;
            }
        }
        else
            cantceros++;

    }


    if(cantpos!=0)
        printf("\nEl promedio de numero positivos es %.2f", sumapos/cantpos);
    else
        printf("\nNo se ingresaron numeros positivos");
    if(cantneg!=0)
        printf("\nEl promedio de numero negativos es %.2f", sumaneg/cantneg);
    else
        printf("\nNo se ingresaron numeros negativos");

    printf("\nLa cantidad de ceros ingresados fue %d", cantceros);

    return 0;
}
