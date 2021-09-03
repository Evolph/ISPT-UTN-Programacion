#include<stdio.h>

int main()
{
    const int secreto=546;
    int valor;

    printf("Ingrese un numero: ");
    scanf("%d", &valor);

    while(valor!=secreto)
        {
            printf("\nTE EQUIVOCASTE!");

            if(valor>secreto)
                printf("\nEl valor secreto es mas bajo que %d", valor);
            else
                printf("\nEl valor secreto es mas alto que %d", valor);

            printf("\nIngrese un numero: ");
            scanf("%d", &valor);

        }

    printf("\nACERTASTE!");

    return 0;
}
