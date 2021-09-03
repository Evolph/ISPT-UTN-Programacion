#include<stdio.h>

int main()
{
    int A=10, B=20, *P=NULL, *Q=NULL;

    P=&A;

    printf("\nEl valor de A es %d y su direccion es %d", A, &A);
    printf("\nLa direccion contenida en P es %d, el valor contenido es dicha direccion es %d y la direccion de P es %d", P, *P, &P);

    Q=P;

    printf("\n\nLa direccion contenida en Q es %d, el valor contenido es dicha direccion es %d y la direccion de Q es %d", Q, *Q, &Q);

    printf("\nSe le suma 1 a A usando el puntero P");
    *P+=1;

    printf("\nLa direccion contenida en P es %d, el valor contenido es dicha direccion es %d y la direccion de P es %d", P, *P, &P);
    printf("\nLa direccion contenida en Q es %d, el valor contenido es dicha direccion es %d y la direccion de Q es %d", Q, *Q, &Q);

    if (P==Q)
        printf("P y Q contienen el mismo valor\n");
    else
        printf("P y Q contienen distinto valor\n");

    if (*P==*Q)
        printf("\nLos contenidos apuntados desde P y Q son iguales\n");
    else
        printf("\nLos contenidos apuntados desde P y Q son distintos\n");

    printf("\nSe le asigna a Q la direccion de B.");

    Q=&B;

    printf("\nSe modifica B mediante Q.");
    *Q=11;

    if (P==Q)
        printf("\nP y Q contienen el mismo valor\n");
    else
        printf("\nP y Q contienen distinto valor\n");

    if (*P==*Q)
        printf("\nLos contenidos apuntados desde P y Q son iguales\n");
    else
        printf("\nLos contenidos apuntados desde P y Q son distintos\n");

    printf("\nLa direccion contenida en P es %d, el valor contenido es dicha direccion es %d y la direccion de P es %d", P, *P, &P);
    printf("\nLa direccion contenida en Q es %d, el valor contenido es dicha direccion es %d y la direccion de Q es %d", Q, *Q, &Q);


    return 0;

}
