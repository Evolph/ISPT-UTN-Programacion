#include<stdio.h>
#include<ctype.h>

int main()
{
    char A,B,C;

    printf("Ingrese la primera letra:");
    scanf("%c", &A);
    A=toupper(A);
    fflush(stdin);


    printf("Ingrese la segunda letra distinta a la anterior:");
    scanf("%c", &B);
    B=toupper(B);
    fflush(stdin);

    printf("Ingrese la tercera letra distinta a las anteriores:");
    scanf("%c", &C);
    C=toupper(C);
    fflush(stdin);


    if(A<B && A<C)
    {
        if(B<C)
            printf("Las letras ordenadas son %c %c %c", A,B,C);
        else
            printf("Las letras ordenadas son %c %c %c", A,C,B);
    }
    else
    {
        if(B<A && B<C)
        {
            if(A<C)
                printf("Las letras ordenadas son %c %c %c", B,A,C);
            else
                printf("Las letras ordenadas son %c %c %c", B,C,A);
        }
        else
        {
            if(A<B)
                printf("Las letras ordenadas son %c %c %c", C,A,B);
            else
                printf("Las letras ordenadas son %c %c %c", C,B,A);
        }
    }

    return 0;
}
