#include <stdio.h>

int main () {

   /* local variable definition */
   int num;

   printf("Ingrese numero ");
   scanf ("%d" ,&num);

   switch(num) {
      case 1 :
         printf("\nLunes" );
         break;
      case 2 :
         printf("\nMartes" );
         break;
      case 3 :
         printf("\nMiercoles" );
         break;
      case 4 :
         printf("\nJueves" );
         break;
       case 5 :
         printf("\nViernes" );
         break;
      case 6: case 7:
         printf("\nFin de semana" );
         break;

      default :
         printf("\nEse numero no vale" );
   }

   printf("\n\nAdios" );

   return 0;
}
