#include<stdio.h>

int main()
{
    int repeticiones=-1, contador=0;
    float num,suma;

    while(repeticiones<0)
        {
            printf("Ingrese la cantidad de repeticiones: ");
            scanf("%d", &repeticiones);

            if(repeticiones<0)
                printf("\nERROR! Ingrese una cantidad de repeticiones no negativas.");
        }


    while(contador<repeticiones)
        {
            printf("\nIngrese numero real: ");
            scanf("%f", &num);

            suma+=num;

            contador++;
        }


    if(repeticiones!=0)
        printf("\nEl promedio de los %d numeros ingresados es %.2f", repeticiones, suma/repeticiones);
    else
        printf("No se realizo ningun ciclo. FIN DEL PROGRAMA");

    return 0;


}
