#include<stdio.h>

int main()
{
float l1, l2, per, sup;
int seguir='s';

while(seguir=='s' || seguir=='s')
{
    printf("Ingrese el valor del lado 1: ");
    scanf("%f",&l1);

    printf("\nIngrese el valor de lado 2: ");
    scanf("%f", &l2);

    per= l1*2 + l2*2;

    sup= l1 * l2;

    printf("El perimetro de un rectangulo de lados de %.2f y %.2f metros es %.2f", l1, l2, per);
    printf("\nLa superficie del mismo rectangulo es de %.2f metros cuadrados\n\n\n", sup);

    printf("\nDesea ingresar otros datos? s/n");
    fflush(stdin);
    scanf("%c", &seguir);
}



return 0;

}
