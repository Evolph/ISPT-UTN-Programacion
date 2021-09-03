#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main ()
{ int a, b, *p, *q, *r;
 char c, d, *m, *n;;
 printf(" --------- EJERCICIO Nº 2----------\n\n");

 b=7;
 a=5;
 q=&a;
p=q;
 *p=b;
 printf("*Q=%d\n\n",*q);

 r=&b;
 *r=*q;
 printf("A=%d, b=%d, *p=%d, *q=%d, *r=%d\n\n", a,b,*p,*q,*r);

 c='A'; d='B';
 m=&c;
 n=&d;
 *m=*n;
 if (m==n) printf("M y N apntan a la misma direccion\n");
 else printf ("M y N apuntan a direcciones distintas\n");
 printf ("*M=%c\n",*m);
 printf("\n");

 system("pause");
 return(0);
}
