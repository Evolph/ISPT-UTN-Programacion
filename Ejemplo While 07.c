#include<stdio.h>

int main()
{
    int suma=0, contador=0, valor;

    while(contador<5)
        {
            printf("Ingrese un numero: ");
            scanf("%d", &valor);

            suma+=valor;
            contador++;
        }

    printf("\nEl valor total de la suma de los numero ingresados es %d", suma);

    return 0;
}
