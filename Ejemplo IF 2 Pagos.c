#include<stdio.h>

int main()
{
    float monto;
    char opcion;

    printf("Ingrese el monto de la compra: ");
    scanf("%f", &monto);
    fflush(stdin);

    printf("\nIngrese el metodo de pago(a,b,c,d): ");
    scanf("%c", &opcion);

    if(opcion=='a')
    {
        printf("\nPago al contado.");
        printf("\nEl monto total con un descuento del 15 porciento es de %.2f$", monto-(15.0*monto/100));

    }

    if(opcion=='b')
    {
        printf("\nPago con tarjeta en una cuota.");
        printf("\nEl monto total con un recargo del 10 porciento es de %.2f$", monto+(10.0*monto/100));
    }

    if(opcion=='c')
    {
        printf("\nPago con tarjeta en 3 cuotas");
        printf("\nEl monto total con recargo del 20 porciento es de %.2f$", monto+(20.0*monto/100));
        printf("\nCada cuota es de %.2f $", (monto+(20.0*monto/100))/3);
    }

    if(opcion=='d')
    {
        printf("\nPago en 12 cuotas.");
        printf("\nCada cuota es de %.2f$", monto/12);
    }

    return 0;
}
