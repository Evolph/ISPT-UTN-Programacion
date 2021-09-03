#include <stdio.h>

int main()
{
    int u = 3, v; //Declaro variable enteras u y v, le asigno el valor 3 a u
    int *pu; //Declaro un puntero a entero pu
    int *pv; //Declaro un puntero a entero pv
    pu = &u; //Apunto pu a la la direccion de u
    v = *pu; //Le asigno a v el valor que se encuentra en la direccion a la que apunta pu(u), v==3
    pv = &v; //Apunto pv a la direccion de v
    printf("\nu=%d &u=%X pu=%X *pu =%d", u, &u, pu, *pu); //Muestro valor, y direccion(Hexa) de u y pu
    printf("\nv=%d &v=%X pv=%X *pv =%d", v, &v, pv, *pv); //Muestro valor, y direccion(Hexa) de v y pv

    return 0;
}

