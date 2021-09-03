#include<stdio.h>

int main()
{
    int valor;

    printf("Ingrese un valor: ");
    scanf("%d", &valor);

    while(valor>0)
        {
            if(valor%2==0)
                printf("\nEl valor es par!");
            else
                printf("\nEl el valor es impar!");

            printf("\nIngrese un nuevo valor: ");
            scanf("%d", &valor);
        }
    printf("\nPROGRAMA FINALIZADO");

    return 0;
}
