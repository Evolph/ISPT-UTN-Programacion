#include<stdio.h>
#include<math.h>

void areaCirculo(float r)
{
    printf("\nEl area de un circulo de area %.2f es %.2f", r, acos(-1) * r*r );
}

int main()
{
    float radio;
    char salir;

    do
    {

        do
        {
          printf("Ingrese el radio del circulo: ");
          scanf("%f", &radio);
          if(radio<=0)
                printf("\nError, ingrese radio valido!\n");
        }
        while(radio<=0);
        areaCirculo(radio);
        printf("\nDesea ingresar otro valor? s/n: ");
        fflush(stdin);
        scanf("%c", &salir);
    }
    while(salir=='s' || salir=='S');

    return 0;
}
