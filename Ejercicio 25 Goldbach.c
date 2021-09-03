#include<stdio.h>
#include<stdlib.h>

int main()
{
    int par, divi=2, encontrado=0, primo1, primo2;

    do
    {
        printf("Ingrese un numero par mayor a 2: ");
        scanf("%d", &par);
        system("cls");
        if(par<=2 || par%2!=0)
        {
            printf("Numero ingresado invalido.\n\n");
        }
    }
    while(par<=2 || par%2!=0);

    while(encontrado==0)
    {
        for(int cont1=2; cont1<par; cont1++)
        {
            while((divi<=cont1) && (cont1%divi!=0)) //compruebo el primer primo
            {
                divi++;
            }

            if(divi==cont1)
            {
                divi=2;
                for(int cont2=cont1; cont2+cont1<=par ; cont2++)
                {

                    while((divi<=cont2) && (cont2%divi!=0)) //compruebo el segundo primo
                    {
                        divi++;
                    }
                    if(divi==cont2)
                    {
                        if(cont1+cont2==par)
                        {
                            primo1=cont1;
                            primo2=cont2;
                            encontrado=1;
                        }
                    }

                    divi=2;
                }
            }

            divi=2;
        }
    }

    printf("\nEl numero %d se puede escribir como la suma de primos %d+%d=%d", par, primo1, primo2, par);


    return 0;
}
