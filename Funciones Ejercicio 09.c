#include<stdio.h>
#include<math.h>

void distanciaPuntos(float ux, float uy, float vx, float vy)
{
    float dist;
    float difX=vx-ux, difY=vy-uy;
    dist= sqrt(pow(difX, 2) + pow(difY, 2));

    printf("\nLa distancia entre los puntos (%.2f , %.2f) y (%.2f , %.2f) es = %.3f", ux, uy, vx, vy, dist);
}

int main()
{
  float ax, ay, bx, by;
  char salir;

    do
    {
        printf("Ingrese la coordenada x del punto A: ");
        scanf("%f", &ax);
        printf("Ingrese la coordenada y del punto A: ");
        scanf("%f", &ay);

        printf("Ingrese la coordenada x del punto B: ");
        scanf("%f", &bx);
        printf("Ingrese la coordenada y del punto B: ");
        scanf("%f", &by);

        distanciaPuntos(ax, ay, bx, by);

        printf("\n\nDesea ingresar otros puntos? s/n: ");
        fflush(stdin);
        scanf("%c", &salir);

    }
    while(salir=='s' || salir=='S');

    return 0;
}
