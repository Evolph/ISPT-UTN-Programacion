#include<stdio.h>


int main()
{
    int segDato, horas, minutos, segundos;

    printf("Ingrese la cantidad de segundos a convertir: ");
    scanf("%d", &segDato);

    segundos= segDato%60;
    minutos= (segDato/60)%60;
    horas= segDato/3600;

    printf("\n\n%d segundos son %d horas con %d minutos y %d segundos\n\n\n",segDato, horas, minutos, segundos);


    return 0;


}

