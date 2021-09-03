#include<stdio.h>
#include<stdlib.h>

#define TAM 5

void mostrar_vector(int *vector)
{
    for(int i=0; i<TAM; i++)
    {
        printf("\nEl valor en la posicion %d es %d", i, vector[i]);
    }
}

float promedio_vector(int *vector)
{
    int suma=0;

    for(int i=0; i<TAM; i++)
    {
        suma+=vector[i];
    }

    return (suma * 1.0)/TAM;
}

int aplazados(int *vector)
{
    for(int i=0; i<TAM; i++)
    {
        if(vector[i]<4)
            return 1;
    }

    return 0;
}

int guarda_vector_4(int const *vector1, int const *vector2, int *vector_guardar)
{
    int cant_posiciones= 0;

    for(int i=0; i<TAM; i++)
    {
        if(vector1[i]>4)
        {

            vector_guardar[cant_posiciones]=vector2[i];
            cant_posiciones++;
        }

    }
    return cant_posiciones;
}


void mostrar_vector_condicion(int const *vector1, int const *vector2, int condicion)
{
    for(int i=0; i<TAM; i++)
    {
        if(vector1[i]>condicion)
        {
            printf("%d\n", vector2[i]);
        }
    }
}

int cantidad_vector_condicion(int const *vector, int condicion)
{
    int cantidad=0;
    for(int i=0; i<TAM; i++)
    {
        if(vector[i]>condicion)
        {
            cantidad++;
        }

    }
    return cantidad;
}

void mostrar_vector_dinamico(int *vector, int cant_posiciones)
{
    for(int i=0; i<cant_posiciones; i++)
    {
        printf("\nEl valor en la posicion %d es %d", i, vector[i]);
    }
}

int main()
{
    int legajos[TAM], notas[TAM],*legajos_4, aplazos, valor, cantidad_alumnos, posiciones;

    float promedio;

    legajos_4= (int *)malloc(sizeof(int*));

    for(int i=0; i<TAM; i++)
    {
        do
        {
            printf("Ingrese el legajo del alumno %d: ", i+1);
            scanf("%d", &legajos[i]);
            printf("\nIngrese la nota del alumno %d: ", legajos[i]);
            scanf("%d", &notas[i]);
            if(legajos[i]<1 || notas[i]<0)
                printf("\nERROR en el ingreso de datos! Se deben reingresar\n");
        }while(legajos[i]<1 || notas[i]<0);

    }

    promedio= promedio_vector(notas);
    printf("\nEl promedio de las notas de los alumnos es %.2f", promedio);
    aplazos=aplazados(notas);

    if(aplazos)
    {
        printf("\nHubo aplazados.\n");
    }
    else
    {
        printf("\nNo hubo aplazados.\n");
    }

    posiciones =guarda_vector_4(notas, legajos, legajos_4);

    if(posiciones==0)
        printf("\nNo hubo alumnos con notas mayores a 4");
    else
        mostrar_vector_dinamico(legajos_4, posiciones);


    printf("\nLos alumnos que superan el 4 son: \n");
    mostrar_vector_condicion(notas, legajos, 4);

    printf("\nIngrese una nota para ver la cantidad de  que alumnos superan la nota");
    scanf("%d", &valor);
    cantidad_alumnos=cantidad_vector_condicion(notas, valor);
    printf("\nLa cantidad de alumnos con notas mayores a %d es %d.", valor, cantidad_alumnos);

    free(legajos_4);

    return 0;

}
