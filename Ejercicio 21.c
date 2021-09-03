#include<stdio.h>

int main()
{
    int entero, unidad, decena, centena, mil, diezmil;

    printf("Ingrese un número de esta 5 cifras: ");
    scanf("%d", entero);
    diezmil= entero/10000;
    mil= entero - (diezmil*10000);
    mil= mil/1000;
    centena= entero - (mil*1000);
    centena= centena/1000;
    decena= entero - (centena*100);
    decena= decena/10;
    unidad= entero - (decena*10);

    printf("\n%d", diezmil);
    printf("\n%d", mil);
    printf("\n%d", centena);
    printf("\n%d", decena);
    printf("\n%d", unidad);
}
