#include<stdio.h>

int main()
{
    float numero1, numero2;

    printf("Ingrese el primer valor: ");
    scanf("%f", &numero1);

    printf("Ingrese el segundo valor: ");
    scanf("%f", &numero2);

    if(numero2==0)
        printf("\nERROR MATEMATICO! No se puede dividir por 0!");
    else
        printf("\nEl resultado de la division de %.2f/%.2f es %.2f", numero1, numero2, numero1/numero2);

    return 0;
}
