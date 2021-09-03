#include<stdio.h>
#define TAM 20

int main()
{
    int contador=0, negaflag=0, num;

    while(contador<TAM)
        {
            printf("Ingrese un numero: ");
            scanf("%d", &num);

            if(num<0)
                negaflag++;
            contador++;
        }
    if(negaflag!=0)
        printf("\nSe ingresaron %d numeros negativos.", negaflag);
    else
        printf("\nNingun numero ingresado fue negativo.");

    return 0;
}
