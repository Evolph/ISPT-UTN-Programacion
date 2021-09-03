#include<stdio.h>

int main()
{
    float manzanas, precio;

    printf("Ingrese la cantidad(en Kg) de manzanas a comprar: ");
    scanf("%f", &manzanas);

    printf("\nIngrese el precio por kilo de la verduleria: ");
    scanf("%f", &precio);

    if(manzanas>10)
        printf("\nEl total a pagar por %.2f Kg de manzanas es de %.2f$", manzanas, manzanas*precio*0.8);
    else
        {
         if(manzanas>5)
            printf("\nEl total a pagar por %.2f Kg de manzanas es de %.2f$", manzanas, manzanas*precio*0.85);
         else
            {
             if(manzanas>2)
                printf("\nEl total a pagar por %.2f Kg de manzanas es de %.2f$", manzanas, manzanas*precio*0.9);
             else
                printf("\nEl total a pagar por %.2f Kg de manzanas es de %.2f$", manzanas, manzanas*precio);
            }
        }

    return 0;
}
