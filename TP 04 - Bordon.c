#include<stdio.h>
#include<stdlib.h>

int validar_legajo(int leg)
{
    if(leg>=1200 && leg<=4000)
        return 1;
    else
        return 0;

}

float porcentajes_FM(int const Cant_sexo, int const total)
{
    float porcentaje;

    porcentaje= (Cant_sexo * 100.0)/total;

    return porcentaje;

}

void cant_empleados(int *cant)
{

    *cant= *cant + 1;

}

float promedio_edad(int const edad, int const total)
{
    float promedio;

    promedio = (edad * 1.0 ) / total;

    return promedio;
}

void mayor_edad(int const legajo, int const edad, int *leg_mayor, int *edad_mayor )
{
    if(edad>=*edad_mayor)
    {
        *edad_mayor=edad;
        *leg_mayor=legajo;
    }


}

int main ()
{
    int legajo, edad, edad_mayor=0, legajo_mayor, suma_M=0, suma_F=0,  suma_edad=0, sector;
    int empleados=0;
    float sueldo, porcentaje;
    char genero;

    do
    {
        printf("Ingrese el numero de legajo: ");
        scanf("%d", &legajo);
        if(!validar_legajo(legajo) && legajo!=-1)
        {
            printf("\nLegajo no valido, ingrese nuevamente\n");
        }
        else if(legajo !=-1)
        {
            printf("\nLegajo valido\n");
            cant_empleados(&empleados); //llamado a la funcion cantidad de empleados

            do
            {
                printf("\nIngrese la edad del empleadx: ");
                scanf("%d", &edad);
                if(edad <=0)
                    printf("\nEdad no valida");
            }while(edad<=0);

            suma_edad+=edad;

            printf("\nIngrese el genero del empleadx(F, M, O): ");
            fflush(stdin);
            scanf("%c", &genero);

            if(genero=='m' || genero=='M')
            {
                suma_M++;
                mayor_edad(legajo, edad, &legajo_mayor, &edad_mayor);
            }

            if(genero=='f' || genero=='F')
            {
                suma_F++;
            }

            for(int i=1; i<=3; i++)
            {
                printf("\nIngrese sueldo correspondiente al sector %d: ", i);
                scanf("%f", &sueldo);
            }
        }
    }while(legajo!=-1);

    printf("\nLa cantidad de empleados fue %d", empleados);
    porcentaje= porcentajes_FM(suma_F, empleados);
    printf("\nEl porcentaje de personal F es %.2f", porcentaje ); // llamado a la funcion porcentaje FM
    porcentaje= porcentajes_FM(suma_M, empleados);
    printf("\nEl porcentaje de personal M es %.2f", porcentaje); // llamado a la funcion porcentaje FM
    printf("\nEl promedio de edad de empleadxs es: %.2f", promedio_edad(suma_edad, empleados)); //llamado a la funcion promedio de edad

    if(suma_M!=0)
    {
        printf("\nEl legajo del empleado M de mayor edad es %d", legajo_mayor);
    }

    return 0;
}
