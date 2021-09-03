#include<stdio.h>


int main()
{
    int *p;
    int a=1, b=2;
    int **s;

    p=&a; //p apunta a la direccion en la que se encuentra a

    b=*p+1; //a p le ponogo el contenido de la direccion a la que apunta p(a=1) y le sumo 1, b=2
    s=&p; //a s lo apunto a la direccion de p

    printf("p=%d, *p=%d, &p=%d\n", p, *p, &p);
    printf("s=%d, *s=%d, &s=%d\n", s, *s, &s);

    *s=&b; //a la direccion a la que apunta s(p), le apunto la direccion de b, p apunta a b ahora
    printf("Ahora ejecuto *s=&b\n y ahora...\n");

    printf("s=%d, *s=%d, &s=%d\n", s, *s, &s);

    **s=79; //A la direccion a la que apunta p le doy el valor 79, ahora b=79
    printf("a=%d, &a=%d\n", a, &a);
    printf("b=%d, &b=%d\n", b, &b);

    return 0;
}
