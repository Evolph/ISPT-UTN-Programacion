#include<stdio.h>

int main()
{
    int a,b,c; // Declaro a, b y c
    int *p1,*p2; // Declaro punteros a enteros p1 y p2
    p1 = &a; //apunto p1 a la direccion de a
    *p1 = 1; // En la direccion a la que apunta p1(a) le asigno el valor 1, a==1
    p2 = &b; //Apunto p2 a b
    *p2 = 2; //En la direccion a la que apunta p2(b), le asigno el valor 2, b==2
    p1 = p2; //Apunto a p1 a la direccion a la que apunta p2, p1==p2->b
    *p1 = 0; //En la direccion a la que apunta p1(b) le asigno el valor 0, b==0
    p2 = &c; //Apunto p2 a la direccion de c
    *p2 = 3; // En la direccion a la que apunta p2(c), le asigno el valor 3, c==3

    printf("Si todo esta correcto a=1, b=0 y c=3\n");
    printf("Compruebo: a=%d, b=%d, c=%d", a, b,c);

}
