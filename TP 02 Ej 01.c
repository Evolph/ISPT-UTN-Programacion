#include<stdio.h>
#include<stdlib.h>
#define VALORCLAVEINICIAL 1234
#define PESOSINICIAL 100000
#define DOLARESINICIAL 25000
#define CORRIENTEINICIAL 75000

int main()
{
    int claveInicial= VALORCLAVEINICIAL, clave, claveNueva, intentos=0;
    int menuprincipal, menuExtraccion, menuSaldo;
    float ahorroPesos=PESOSINICIAL, ahorroDolares=DOLARESINICIAL, cuentaCorriente=CORRIENTEINICIAL;
    float extraccion, deposito;

 //***********************************<<<INGRESO DE CLAVE>>>**********************************************

    do
    {
        printf("Ingrese su clave: ");
        scanf("%d", &clave);
        intentos++;
        if(clave<0 || clave>9999 || clave!=claveInicial)
            printf("\nCLAVE INVALIDA\n");
    }
    while(clave<0 || clave>9999 || clave!=claveInicial && intentos<3);


//***********************************<<<INTENTOS FALLIDOS DE INGRESO>>>**********************************************

    if(intentos>2)
        printf("\nClave incorrecta. Dirigirse al Banco Emisor.");
    else
    {

//***********************************<<<MENU PRINCIPAL>>>**********************************************
        do
        {
            system("cls");
            printf("*****Bienvenido a Banco Bordon***** \n\nElija la operacion a realizar");
            printf("\n\n1 - Extraccion\n\n2 - Deposito\n\n3 - Consulta de Saldo\n\n4 - Cambio de clave\n\n5 - Salir");
            printf("\n\nRealizar operacion: ");
            scanf("%d", &menuprincipal);

            switch(menuprincipal)
            {

//***********************************<<<EXTRACCION>>>**********************************************
                case 1:
                printf("\n*****EXTRACCION*****\n");
                printf("\n1 - Extraccion Caja de Ahorro en Pesos.");
                printf("\n2 - Extraccion Caja de Ahorro en Dolares.");

                do
                {
                    printf("\n\nElija Caja a extraer: ");
                    scanf("%d", &menuExtraccion);
                    if(menuExtraccion!=1 && menuExtraccion !=2) //revisar
                        printf("\nOpcion incorrecta");
                }
                while(menuExtraccion!=1 && menuExtraccion !=2);

                switch(menuExtraccion)
                {
                    case 1:
                        do
                        {
                            printf("\nCaja de ahorro en Pesos, Extraer: ");
                            scanf("%f", &extraccion);
                        }
                        while(extraccion<=0);

                        if(extraccion>ahorroPesos)
                        {
                            printf("\nFondos insuficientes. Ingrese un monto menor.\n");
                            system("pause");
                        }

                        else
                        {
                            ahorroPesos-=extraccion;
                            printf("\nSe extrajeron %.2f AR$\n", extraccion);
                            system("pause");
                        }
                        break;



                    case 2:
                        do
                        {
                            printf("\nCaja de ahorro en Dolares, Extraer: ");
                            scanf("%f", &extraccion);
                        }
                        while(extraccion<=0);

                        if(extraccion>ahorroDolares)
                        {
                            printf("\nFondos insuficientes. Ingrese un monto menor.\n");
                            system("pause");
                        }

                        else
                        {
                            ahorroDolares-=extraccion;
                            printf("\nSe extrajeron %.2f U$D.\n", extraccion);
                            system("pause");
                        }

                }

                break;

 //***********************************<<<DEPOSITO>>>**********************************************

                case 2:
                    printf("\n*****Deposito*****\n");
                    do
                    {
                        printf("\nIngrese un monto a depositar en Caja de ahorro: ");
                        scanf("%f", &deposito);
                    }
                    while(deposito<=0);

                    ahorroPesos+=deposito;
                    printf("Se depositaron %.2f AR$ en la cuenta.", deposito);
                    system("pause");

                    break;

//***********************************<<<CONSULTA DE SALDO>>>**********************************************

                case 3:
                    printf("\n*****Consulta de Saldo*****\n");
                    printf("\n1 - Consulta de Saldo de Caja de Ahorro en Pesos.\n");
                    printf("\n2 - Consulta de Saldo de Cuenta Corriente.\n");

                    do
                    {
                        printf("\nElija cuenta a consultar: ");
                        scanf("%d", &menuSaldo);
                    }
                    while(menuSaldo!=1 && menuSaldo!=2);

                    switch(menuSaldo)
                        {
                            case 1:
                                printf("\nEl saldo de la Caja de Ahorro en Pesos es: %.2f AR$\n", ahorroPesos);
                                system("pause");
                                break;
                            case 2:
                                printf("\nEl saldo de la Cuenta Corriente es: %.2f AR$\n", cuentaCorriente);
                                system("pause");
                                break;
                        }
                    break;

//***********************************<<<CAMBIO DE CLAVE>>>**********************************************
                case 4:

                    printf("\n*****Cambio de Clave*****\n");

                    do
                    {

                        printf("\nIngrese su clave actual: ");
                        scanf("%d", &clave);
                        printf("\nIngrese su nueva clave: ");
                        scanf("%d", &claveNueva); //validar clave de 4 digitos
                        if(clave<0 || clave>9999 || claveNueva<0 || claveNueva>9999)
                        {
                            printf("\nLas claves solo pueden contener hasta 4 digitos!\n");
                        }
                    }
                    while(clave<0 || clave>9999 || claveNueva<0 || claveNueva>9999);

                    if(clave!=claveInicial)
                    {
                        printf("\nERROR en la validacion de identidad. No se realizara cambio de clave.\n");
                        system("pause");
                    }

                    else
                    {
                        if(claveNueva==clave)
                        {
                            printf("\nClave nueva y clave anterior coinciden\n");
                            system("pause");
                        }

                        else
                        {
                            printf("\nClave modificada con exito!\n");
                            claveInicial=claveNueva;
                            system("pause");
                        }

                    }

                    break;

//***********************************<<<MENSAJE DE SALIDA MENU>>>**********************************************


                case 5:
                    printf("\nGracias por utilizar los servicios del Banco Bordon!\n");
                    system("pause");
                    break;

            }

        }
        while(menuprincipal!=5);

    }

    return 0;
}
