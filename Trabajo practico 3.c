#include<stdio.h>
#include<math.h>
#include<stdlib.h>

void menu()
{
    printf("\n=======================================");
    printf("\n==CALCULO DE SUPERFICIES (version 1.0==");
    printf("\n=======================================");
    printf("\n1. Cuadrado (lado * lado)");
    printf("\n2. Circulo (pi * radio *radio)");
    printf("\n3. Rectangulo (base * altura)");
    printf("\n4. Trapecio (base1 + base2) * altura/2)");
    printf("\n5. Triangulo ((base * altura)/2)");
    printf("\n0. Salir del programa");
    printf("\n=======================================");


}

float cuadrado(float lado)
{
    return lado*lado;
}

float circulo(float radio)
{
    return acos(-1) * radio * radio;
}

float rectangulo(float base, float altura)
{
    return base * altura;
}

float trapecio(float base1, float base2, float altura)
{
    return (base1 + base2) * altura /2;
}

float triangulo (float base, float altura)
{
    return (base * altura)/2;
}
int lee_opcion()
{
    int eleccion;
    do
    {
        printf("\nIngrese la opcion del menu(1-5): ");
        scanf("%d", &eleccion);
        if(eleccion<0 || eleccion>5)
        {
            printf("\nOpcion no valida, ingrese un valor entre 1 y 5!");
        }
    }while(eleccion<0 || eleccion>5);

    return eleccion;
}

int main()
{
    int opcion;
    float aux1, aux2, aux3;

    do
    {
    system("cls");
    menu();

    opcion=lee_opcion();

    switch(opcion)
    {


    case 1:
        do
        {
            printf("\nIngrese el valor lado del cuadrado: ");
            scanf("%f", &aux1);
            if(aux1<=0)
            printf("\nValor del lado no valido!");
        }while(aux1<=0);


        printf("\nLa superficie del cuadrado de lado %.2f es: %.2f\n", aux1, cuadrado(aux1));
        system("pause");

        break;

    case 2:
        do
        {
            printf("\nIngrese el valor radio del circulo: ");
            scanf("%f", &aux1);
            if(aux1<=0)
            printf("\nValor del radio no valido!");
            }while(aux1<=0);

        printf("\nLa superficie del circulo de radio %.2f es: %.2f\n", aux1, circulo(aux1));
        system("pause");
        break;
    case 3:
        do
        {
            printf("\nIngrese el valor de la base del rectangulo: ");
            scanf("%f", &aux1);
            printf("\nIngrese el valor de la altura del rectangulo: ")  ;
            scanf("%f", &aux2);
            if(aux1 <= 0 || aux2 <= 0)
            printf("\nValores no validos!");
        }while(aux1<=0 || aux2 <= 0);

        printf("\nLa superficie de un rectangulo de base %.2f y altura %.2f es: %.2f\n", aux1, aux2, rectangulo(aux1, aux2));
        system("pause");
        break;
    case 4:
        do
        {
            printf("\nIngrese el valor de la base1 del trapecio: ");
            scanf("%f", &aux1);
            printf("\nIngrese el valor de la base2 del trapecio: ");
            scanf("%f", &aux2);
            printf("\nIngrese el valor de la altura del trapecio: ");
            scanf("%f", &aux3);
            if(aux1 <= 0 || aux2 <= 0 || aux3 <= 0)
            printf("\nValores no validos!");
        }while(aux1<=0 || aux2 <= 0 || aux3 <= 0);

        printf("\nLa superficie de un trapecio de bases %.2f , %.2f y altura %.2f es: %.2f\n", aux1, aux2, aux3, trapecio(aux1, aux2, aux3));
        system("pause");
        break;

    case 5:
        do
        {
            printf("\nIngrese el valor de la base del triangulo: ");
            scanf("%f", &aux1);
            printf("\nIngrese el valor de la altura del triangulo: ")  ;
            scanf("%f", &aux2);
            if(aux1 <= 0 || aux2 <= 0)
            printf("\nValores no validos!");
        }while(aux1<=0 || aux2 <= 0);

        printf("\nLa superficie de un triangulo de base %.2f y altura %.2f es: %.2f\n", aux1, aux2, triangulo(aux1, aux2));
        system("pause");
        break;
    case 0:
        printf("\nSe termina el programa. ADIOS!\n");
        system("pause");
        break;
    }

    }while(opcion!=0);

    return 0;


}
