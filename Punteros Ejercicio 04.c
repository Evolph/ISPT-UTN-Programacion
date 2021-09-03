#include<stdlib.h>
#include<math.h>
int main ()
{ char michar='A', *pchar=&michar;
 int mientero=67, *pint=&mientero;
 printf(" --------- EJERCICIO Nº 4 ----------\n\n");

 printf("Michar=%c Mientero=%d *Pchar=%c *Pint=%d\n\n",michar, mientero,
*pchar, *pint);
system("pause");
 pint=(int*)(pchar);
 *pint=70;
 printf("Michar=%c Mientero=%d *Pchar=%c *Pint=%d\n\n",michar, mientero,
*pchar, *pint);
system("pause");

 pint=&mientero;
 pchar=(char*)&mientero;
 *pchar='@';
 printf("Michar=%c Mientero=%d *Pchar=%c *Pint=%d\n\n",michar, mientero,
*pchar, *pint);
system("pause");

 if (pint==((int*)pchar)){
 *pint=69;
 pchar=&michar;}
 printf("Michar=%c Mientero=%d *Pchar=%c *Pint=%d\n\n",michar, mientero,
*pchar, *pint);
 printf("\n");
 system("pause");
 return(0);
}
