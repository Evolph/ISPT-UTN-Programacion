#include<stdio.h>
#define TAM 20

int main()
{
    int contador=0, suma=0, num;

    while(contador<TAM)
        {
            printf("Ingrese un numero: ");
            scanf("%d", &num);

            suma+=num;

            contador++;
        }
    printf("%d es la suma\n", suma);
    printf("\nEl promedio de los numeros introducidos es: %.2f", (1.0*suma)/TAM);

    return 0;
}
