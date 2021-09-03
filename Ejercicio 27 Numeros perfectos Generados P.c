#include<stdio.h>
#include<math.h>

int main()
{
    int numero, deseados, tope, buscado, divi, primo=2;

    printf("Ingrese un numero natural: ");
    scanf("%d", &numero);
    printf("\nLos primeros %d numeros perfectos son:", numero);

    while(deseados<numero)
    {
        divi=2;
        tope=sqrt(primo);
        while(divi<=tope && primo%divi!=0)
        {
            divi++;
        }
        if(divi>tope && primo!=1)
        {
            printf("\n%d", pow(2, primo-1) * (pow(2, primo)-1));
            deseados++;
        }
        primo++;
    }


    return 0;
}
