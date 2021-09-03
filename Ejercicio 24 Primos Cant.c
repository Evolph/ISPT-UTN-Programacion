#include<stdio.h>

int main()
{
    int divi=0, x, y;


    printf("\nIngrese un entero no negativo, recibira todos los numeros primos menores al dado: ");
    scanf("%d", &x);
    printf("nume 2:");
    scanf("%d", &y);



        for(int cont=x; cont<y; cont++)
        {
            while((divi<=cont) && (cont%divi!=0))
            {
                divi++;
            }

            if(divi==cont)
            {
            printf("\n%d", cont);
            }

            divi=2;

        }




    return 0;
}
