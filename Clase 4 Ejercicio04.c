#include<stdio.h>

int main()
{
    int repeticiones=-1, contador=0;
    float num, menor;

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

            if(contador==0)
                menor=num;
            else
                {
                    if(num<menor)
                        menor=num;
                }

            contador++;
        }


    if(repeticiones!=0)
        printf("\nEl menor numero de los ingresados fue %.2f", menor);
    else
        printf("No se realizo ningun ciclo. FIN DEL PROGRAMA");

    return 0;


}
