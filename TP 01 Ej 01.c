#include<stdio.h>
#include<stdlib.h>
#define VALORCLAVEINICIAL 1234
#define PESOSINICIAL 100000
#define DOLARESINICIAL 25000
#define CORRIENTEINICIAL 75000

int main()
{
    int claveInicial= VALORCLAVEINICIAL, clave, intentos=0;
    int menuprincipal, menuExtraccion, menuSaldo;
    float ahorroPesos=PESOSINICIAL, ahorroDolares=DOLARESINICIAL, cuentaCorriente=CORRIENTEINICIAL;
    float extraccion=0, deposito;

    do
    {
        printf("Ingrese su clave: ");
        scanf("%d", &clave);
        intentos++;
        if(clave<0 || clave>9999 || clave!=claveInicial)
            printf("\nCLAVE INVALIDA");
    }
    while(clave<0 || clave>9999 || clave!=claveInicial);

    fflush(stdin);

    if(intentos>2)
        printf("\nClave incorrecta. Dirigirse al Banco Emisor");
    else
    {
        do
        {
            system("cls");
            printf("\n*****Bienvenido a Banco Trabajo Práctico 2***** \nElija la operacion a realizar");
            printf("\n\n1 - Extraccion\n\n2 - Deposito\n\n3 - Consulta de Saldo\n\n4 - Cambio de clave\n\n5 - Salir");
            printf("\n\nRealizar operacion: ");
            scanf("%d", &menuprincipal);

            switch(menuprincipal)
            {
                case 1:
                printf("\n*****EXTRACCION*****\n");
                printf("\n1 - Extraccion Caja de Ahorro en Pesos");
                printf("\n2 - Extraccion Caja de Ahorro en Dolares");

                do
                {
                    printf("\n\nElija Caja a extraer: ");
                    scanf("%d", &menuExtraccion);
                    if(menuExtraccion!=1 && menuExtraccion !=2) //revisar
                        printf("\nOpcion incorrecta");
                }
                while(menuExtraccion!=1 && menuExtraccion !=2);

                if(menuExtraccion==1)
                {
                    while(extraccion<=0)
                    {
                        printf("\nCaja de ahorro en Pesos, Extraer: ");
                        scanf("%f", &extraccion);
                    }
                    if(extraccion>ahorroPesos)
                    {
                        printf("\nFondos insuficientes. Ingrese un monto menor\n");
                        system("pause");
                    }

                    else
                    {
                        ahorroPesos-=extraccion;
                        printf("\nSe extrajeron %.2f AR$\n", extraccion);
                        system("pause");
                    }

                }
                else
                {
                    while(extraccion<=0)
                    {
                        printf("\nCaja de ahorro en Doalres, Extraer: ");
                        scanf("%f", &extraccion);
                    }
                    if(extraccion>ahorroDolares)
                        printf("\nFondos insuficientes. Ingrese un monto menor");
                    else
                    {
                        ahorroDolares-=extraccion;
                        printf("\nSe extrajeron %.2f $USD", extraccion);
                    }
                }
                break;

                case 2:
                    printf("\n*****Deposito*****\n");
                    do
                    {
                        printf("\nIngrese un monto a depositar en Caja de ahorro");
                        scanf("%f", &deposito);
                    }
                    while(deposito<=0);

                    ahorroPesos+=deposito;

                    break;

                case 3:
                    printf("\n*****Consulta de Saldo*****\n");
                    do
                    {

                    }
                    while(menuSaldo!=1 );    //Me quede acá
            }




        }
        while(menuprincipal!='5');

    }

    return 0;
}
