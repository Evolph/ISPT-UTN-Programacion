#include<stdio.h>

int es_primo(int x)
{
    int noprimo=0, contador;

    for( contador=x-1; contador>0; contador--)
    {
        if(x%contador==0 && contador!=1)
            noprimo++;
    }

    if(noprimo==0)
        return 1;
    else
        return 0;
}

int main()
{
    int posibleprimo, res;

    printf("Ingrese un valor: ");
    scanf("%d", &posibleprimo);

    if(es_primo(posibleprimo))
        printf("\nEl numero %d es primo", posibleprimo);
    else
        printf("\nEl numero %d no es primo", posibleprimo);

    return 0;
}
