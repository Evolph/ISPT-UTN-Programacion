#include <stdio.h>

int main()

{
    float numero1, numero2, suma, resta, producto, division, promedio, ecuacion;

    printf("Ingrese el primer valor: ") ;
    scanf("%f", &numero1);

    printf("\nIngrese el segundo valor(no puede ser CERO ): ");
    scanf("%f", &numero2);

    suma= numero1 + numero2;
    resta= numero1 - numero2;
    producto = numero1 * numero2;
    division = numero1 / numero2;
    promedio = (numero1 + numero2) / 2;
    ecuacion= 2 * numero1 + numero2 * 0.5;

    printf("Con los valores %.2f y %.2f", numero1, numero2);
    printf("\nSu suma da %.2f", suma);
    printf("\nSu resta da %.2f", resta);
    printf("\nSu producto da %.2f", producto);
    printf("\nSu division da %.2f", division);
    printf("\nSu promedio da %.2f", promedio);
    printf("\nLa ecuacion 2x%.2f - 0.5x%.2f da %.2f\n\n\n", numero1, numero2, ecuacion);

}
