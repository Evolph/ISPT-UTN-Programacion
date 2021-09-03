#include<stdio.h>

int main()
{
int hr1, hr2, min1, min2, seg1, seg2;
int parcialMin, parcialSeg;
int totalHr, totalMin, totalSeg;

printf("Ingrese las horas de la primer etapa: ");
scanf("%d", &hr1);

printf("Ingrese los minutos de la primer etapa: ");
scanf("%d", &min1);

printf("Ingrese los segundos de la primer etapa: ");
scanf("%d", &seg1);

printf("\n\nIngrese las horas de la segunda etapa: ");
scanf("%d", &hr2);

printf("Ingrese los minutos de la segunda etapa: ");
scanf("%d", &min2);

printf("Ingrese los segundos de la segunda etapa: ");
scanf("%d", &seg2);

parcialSeg= seg1 + seg2;
totalSeg=parcialSeg%60;

parcialMin= min1 + min2 + parcialSeg/60;
totalMin= parcialMin%60;

totalHr= hr1 + hr2 + parcialMin/60;

printf("\nLa primer etapa fue de %d:%d:%d hs", hr1, min1, seg1);
printf("\nLa segunda etapa fue de %d:%d:%d hs", hr2, min2, seg2);
printf("\nEl total de horas de trabajo fue de %d:%d:%d hs\n\n\n", totalHr, totalMin, totalSeg);

return 0;


return 0;

}
