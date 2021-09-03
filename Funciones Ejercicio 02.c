#include<stdio.h>

int esPositivo(int x)
{
    return x>0?1:0;
}

int main()
{
    int val, res;

    printf("Ingrese un entero: ");
    scanf("%d", &val);

    res=esPositivo(val);

    if (res==1)
        printf("\nEl valor ingresado es positivo");
    else
        printf("\nEl valor ingresado no es positivo");

    return 0;
}
