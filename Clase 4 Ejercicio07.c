#include<stdio.h>
#include<stdbool.h>

int main()
{
    int natural=-1,contador=0, num, anterior;
    bool creciente=false, decreciente=false, desordenados=false;

    while(natural<0)
        {
            printf("Ingrese un numero de repeticiones: ");
            scanf("%d", &natural);
        }



    while(contador<natural)
        {
            printf("\nIngrese un numero natural: ");
            scanf("%d", &num);

            if(contador==0)
                anterior=num;
            else
            {
                if(desordenados==false)
                    {
                        if(num>anterior)
                            {
                                if(creciente==false && decreciente==true)
                                    {
                                        desordenados=true;
                                        anterior=num;
                                    }
                                else
                                    {
                                        creciente=true;
                                        anterior=num;
                                    }
                            }
                        else
                            {
                                if(decreciente==false && creciente==true)
                                    {
                                        desordenados=true;
                                        anterior=num;
                                    }
                                else
                                    {
                                        decreciente=true;
                                        anterior=num;
                                    }
                            }

                    }
                else
                    {
                        creciente=false;
                        decreciente=false;
                    }
            }

            contador++;

        }

    if(desordenados==true)
        printf("\nLos numeros se ingresaron desordenados.");
    else
        {
            if(creciente==true)
                printf("\nLos numeros se ingresaron de forma creciente.");
            if(decreciente==true)
                printf("\nLos numeros se ingresaron de forma decreciente.");

        }

    return 0;
}
