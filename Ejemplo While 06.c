#include<stdio.h>

int main()
{
    int valor, contador=0;

    printf("Ingrese un numero: ");
    scanf("%d", &valor);

    while(valor!=0)
        {
            if(valor>0)
                {
                    printf("\n%d es positivo!", valor);
                    contador++;
                }
            printf("\nIngrese un numero");
            scanf("%d", &valor);
        }

    printf("\nSe ingresaron %d valores positivos.", contador);

    return 0;
}
