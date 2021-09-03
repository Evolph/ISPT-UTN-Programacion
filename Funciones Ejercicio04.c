#include<stdio.h>

int comparacion(int x, int y)
{
    return x>y?0:1;
}

int main()
{
    int valor1, valor2;

    printf("Ingrese un primer valor entero: ");
    scanf("%d", &valor1);

    printf("Ingrese un segundo valor entero: ");
    scanf("%d", &valor2);

    if(comparacion(valor1, valor2))
    {
        printf("\nEl primer valor es menor o igual al segundo");
    }
    else
        printf("\nEl primer valor es mayor al segundo");

    return 0;
}
