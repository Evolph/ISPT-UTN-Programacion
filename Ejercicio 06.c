#include<stdio.h>

int main()
{
    int A, B;

    printf("Ingrese un numero natural A: ");
    scanf("%d", &A);

     printf("Ingrese un numero natural B: ");
     scanf("%d", &B);

    if((A+B)%2==0)
        printf("\nLa suma de los numeros %d y %d es %d y es par", A, B, A+B);
    else
        printf("\nLa suma de los numeros %d y %d es %d y es impar", A, B, A+B);

    return 0;
}
