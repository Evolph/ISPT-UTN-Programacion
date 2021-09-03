#include<stdio.h>

int main()
{
    float A, B, C;

    printf("Ingrese el primer valor: ");
    scanf("%f", &A);

    printf("Ingrese el segundo valor: ");
    scanf("%f", &B);

    printf("Ingrese el primer valor: ");
    scanf("%f", &C);

    if(A>B && A<C || A<B && A>C)
        printf("\nEl valor %.2f es el valor del medio", A);
    else
    {
        if(B>A && B<C || B<A && B>C)
            printf("\nEl valor %.2f es el valor del medio", B);
        else
            printf("\nEl valor %.2f es el valor del medio", C);
    }

    return 0;
}
