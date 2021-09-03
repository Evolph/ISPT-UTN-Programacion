#include<stdio.h>

int main()
{

    int num1, num2, num3;

    printf("Ingrese el primer valor: ");
    scanf("%d", &num1);

    printf("Ingrese el segundo valor, distinto al anterior: ");
    scanf("%d", &num2);

    printf("Ingrese el tercer valor, distinto a los anteriors: ");
    scanf("%d", &num3);

    if(num1<num2 && num2<num3 || num1>num2 && num2>num3)
    {
        if(num1<num2)
            printf("\nEstan ordenados de forma creciente.");
        else
            printf("\nEstan ordenados de forma decreciente.");
    }
    else
        printf("\nNo se encuentran ordenados.");

    return 0;
}
