#include<stdio.h>

void positivoOno(int x)
{
    if(x>0)
        printf("\nEl valor %d es positivo", x);
    else
        printf("\nEl valor %d no es positivo", x);
}

int main()
{
    int valor=0;
    char salir;

    do
    {
        printf("Ingrese un valor para averiguar si es positivo: ");
        scanf("%d", &valor);
        positivoOno(valor);
        printf("\nDesea ingresar otro valor? s/n: ");
        fflush(stdin);
        scanf("%c", &salir);
    }
    while(salir=='s' || salir=='S');

    return 0;
}
