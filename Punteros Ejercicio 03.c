#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main ()
{ int *p, a=1, b=8, **s;
 printf(" --------- EJERCICIO Nº 3----------\n\n");

 p=&a;
 b=*p+1;
 s=&p;
 printf("A=%d &A=%d\n\n",a,&a);
 printf("B=%d &B=%d\n\n",b,&b);
 printf("P=%d *P=%d &P=%d\n\n",p,*p,&p);
 printf("S=%d *S=%d &S=%d\n\n",s,*s,&s);
 *s=&b;

 printf("Se ejecuto *S=&B\ny ahora\n\n");
 printf("S=%d *S=%d &S=%d\n\n",s,*s,&s);

 **s=79;
 printf("A=%d &A=%d\n\n",a,&a);
 printf("B=%d &B=%d\n\n",b,&b);
 printf("P=%d *P=%d &P=%d\n\n",p,*p,&p);
 printf("\n");

 system("pause");
 return(0);
}
