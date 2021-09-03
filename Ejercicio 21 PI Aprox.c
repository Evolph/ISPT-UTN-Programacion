#include<stdio.h>

int main()
{
    int cant=0, par=3, impar=5;
    float sumater=0, PI;

    while(cant<1)
    {
        printf("Ingrese la cantidad  de terminos para realizar la aproximacion a PI: ");
        scanf("%d", &cant);
        if(cant<1)
            printf("\nERROR!");
    }

    for(int contador=1; contador<=cant; contador++)
    {
        if(contador==1)
            sumater=1;
        else
        {
            if(contador%2==0)
                {
                    sumater-=1.0/par;
                    par+=4;
                }
            else
            {
                sumater+=1.0/impar;
                impar+=4;
            }


        }


    }

    PI=4*sumater;

    printf("\nLa aproximacion de pi con %d terminos es %f", cant, PI);

    return 0;
}
