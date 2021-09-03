#include<stdio.h>

int main()
{
    int A,B;

    printf("Ingrese el valor A: ");
    scanf("%d", &A);

    printf("Ingrese el valor B: ");
    scanf("%d", &B);

    if(A>B)
        {
            if(!(A%B))
                printf("\nEl valor A= %d es divisible por el valor B= %d", A,B);
        }
    else
        {
            if(!(B%A))
                printf("\nEl valor B= %d es divisible por el valor A= %d", B,A);
        }

    return 0;
}
