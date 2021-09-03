#include<stdio.h>

int main()
{
 int nroLegajo, edad, cantRangoEdad=0, cantMasTreinta=0;
 float sueldo, sueldoTreinta=0;

 do
 {
    printf("Ingrese un numero de legajo(-1 corte): ");
    scanf("%d", &nroLegajo);
    if((nroLegajo<1000 || nroLegajo>2300) && nroLegajo!=-1)
        {
            printf("\nNumero de legajo invalido!\n\n");
        }
 }
 while((nroLegajo<1000 || nroLegajo>2300) && nroLegajo!=-1);

 while(nroLegajo!=-1)
 {
     do
     {
        printf("\nIngrese la edad: ");
        scanf("%d", &edad);
        printf("\nIngrese el sueldo: ");
        scanf("%f", &sueldo);
        if(edad<0 || sueldo<0)
        {
            printf("\nERROR! Datos invalidos!");
        }
     }
     while(edad<0 || sueldo<0);

     if(edad>=20 && edad<=50)
     {
         cantRangoEdad++;
     }

     if(edad>30)
     {
         cantMasTreinta++;
         sueldoTreinta+=sueldo;
     }

     do
     {
        printf("\nIngrese un numero de legajo(-1 corte): ");
        scanf("%d", &nroLegajo);
        if((nroLegajo<1000 || nroLegajo>2300) && nroLegajo!=-1)
        {
            printf("\nNumero de legajo invalido!");
        }
     }
     while((nroLegajo<1000 || nroLegajo>2300) && nroLegajo!=-1);


 }


 printf("\nSe ingresaron en total %d legajos de personas entre 20 y 50 años", cantRangoEdad);

 if(cantMasTreinta==0)
 {
     printf("\nNo se ingresaron personas de más de 30 años.");
 }
 else
 {
      printf("\nEl promedio de sueldos de personas de mas de 30 años es: %.2f", sueldoTreinta/cantMasTreinta);
 }


 return 0;
}
