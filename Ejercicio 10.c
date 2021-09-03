#include<stdio.h>

int main()
{
    int A, B, C;

    printf("Ingrese el primer valor: ");
    scanf("%d", &A);

    printf("Ingrese el segundo valor: ");
    scanf("%d", &B);

    printf("Ingrese el primer valor: ");
    scanf("%d", &C);

    if(B%A==0 && C%A==0)
        printf("\nEl valor %d divide exacatamente a los valores %d y %d", A, B, C);
    else
    {
        if(A%B==0 && C%B==0)
            printf("\nEl valor %d divide exacatamente a los valores %d y %d", B, A, C);
        else
        {
            if(A%C==0 && B%C==0)
                printf("\nEl valor %d divide exacatamente a los valores %d y %d", C, A, B);
            else
                printf("Ningun numero divide exactamente a los otros 2");
        }
    }

    return 0;
}
