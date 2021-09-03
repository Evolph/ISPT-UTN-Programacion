#include<stdio.h>

int main()
{
    int num1, num2, num3;
    int resultado=1;
    char operacion;

    //Lectura de valores

    printf("Ingrese el valor 1: ");
    scanf("%d", &num1);

    printf("\nIngrese el valor 2: ");
    scanf("%d", &num2);

    printf("\nIngrese el valor 3: ");
    scanf("%d", &num3);

    //Menu de selección de operacion

    printf("\n****************************\n    Menu de operaciones\n****************************");
    printf("\n\nA - Producto de numeros pares.\n\nB - Promedio de numeros ingresados y porcentanje de pares. \n\nC- Maximo de los numeros ingresados.\n\nD - Suma de los cuadrados de los impares.\n\n");
    printf("Ingrese la operacion a realizar: ");
    fflush(stdin);
    scanf("%c", &operacion);

    switch(operacion)
        {
        case 'a': case 'A':

            if(num1%2!=0 && num2%2!=0 && num3%2!=0)
                printf("\nNinguno de los numeros son pares, no se puede realizar el producto.");
            else
                {
                    if(num1%2==0)
                    resultado*=num1;
                    if(num2%2==0)
                    resultado*=num2;
                    if(num3%2==0)
                    resultado*=num3;

                    printf("\n\nEl producto de los numeros pares es %d\n\n", resultado);

                }

            break;

        case 'b': case 'B':

            resultado=0;

            if(num1%2==0)
                resultado++;
            if(num2%2==0)
                resultado++;
            if(num3%2==0)
                resultado++;

            printf("\n\nEl promedio de los numeros ingresados es %.2f y el porcentaje de pares del es %.2f porciento\n\n", (num1+num2+num3)/3.0, (resultado*100.0)/3);

            break;

        case 'c': case 'C':

            if(num1>=num2 && num1>=num3)
                resultado=num1;
            else
               {
                 if(num2>=num1 && num2>=num3)
                    resultado=num2;
                else
                    resultado=num3;
               }

            printf("\n\nEl valor maximo de entre los tres numeros es %d\n\n", resultado);

            break;

        case 'd': case 'D':

            resultado=0;

            if(num1%2==0 &&num2%2==0 &&num3%2==0)
                printf("\n\nNinguno de los numeros ingresados es impar\n\n");
            else
               {
                 if(num1%2!=0)
                 resultado+=num1*num1;
                 if(num2%2!=0)
                 resultado+=num2*num2;
                 if(num3%2!=0)
                 resultado+=num3*num3;

                 printf("\n\nLa suma de cuadrados de los numeros impares es %d\n\n", resultado);
               }


            break;

        default:

            printf("\n\nLa opcion ingresada es incorrecta. Fin del programa.\n\n");

        }


    return 0;
}
