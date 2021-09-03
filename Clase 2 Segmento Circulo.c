#include<stdio.h>
#include<math.h>
#define pi acos(-1)

int main()
{
    float segmento, radio, area;

    printf("Ingrese el valor del segmento: ");
    scanf("%f", &segmento);

    printf("\nIngrese el valor del radio del círculo: ");
    scanf("%f", &radio);

    area= (pi * pow(radio,2) / 2) + (segmento * sqrt(pow(radio,2) - pow(segmento, 2)) + pow(radio, 2) * asin(segmento / radio));

    printf("El area es %.2f", area);

    return 0;

}
