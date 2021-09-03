#include<stdio.h>

int termino_fibonacci(int x)
{
    int inicial=0, inicial2=1, generado=0;
    if (x==1)
        return generado;
    if(x<4)
        return inicial2;

    for(int i=2; i<x; i++)
    {
        generado = inicial + inicial2;
        inicial = inicial2;
        inicial2 = generado;
    }

    return generado;

}




int main()
{
    int termino;

    do
    {
     printf("Ingrese el termino de Fibonacci que desea ver: ");
     scanf("%d", &termino);
    }while(termino<1);

    printf("\nEl termino %d de Fibonacci es %d", termino, termino_fibonacci(termino));
}
