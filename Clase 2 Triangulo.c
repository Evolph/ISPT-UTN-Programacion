#include<stdio.h>
#include<math.h>

int main()
{
    float ladoA, ladoB, ladoC, semiperimetro, area, aux;

    printf("Ingrese el valor del lado A: ");
    scanf("%f", &ladoA);

    printf("Ingrese el valor del lado B: ");
    scanf("%f", &ladoB);

    printf("Ingrese el valor del lado C: ");
    scanf("%f", &ladoC);

    semiperimetro= (ladoA + ladoB + ladoC) / 2;
    printf("\n %.2f", semiperimetro);

    aux= semiperimetro * (semiperimetro - ladoA) * (semiperimetro - ladoB) * (semiperimetro - ladoC);
    printf("\n %.2f", aux);


    area= sqrt(aux);

    printf("\nEl Area del triangulos de lados %.2f , %.2f y %.2f (cm) es de %.2f (cm al cuadrado)", ladoA, ladoB, ladoC, area);


    return 0;
}
