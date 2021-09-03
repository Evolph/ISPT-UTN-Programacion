#include<stdio.h>

int main()
{
    int n;
    printf("Ingrese un valor entero: ");
    scanf("%d", &n);
    if(n > 0)
        printf("\nEl numero %d es positivo", n);
    else
        printf("\nEl numero %d no es poisitivo", n);
    printf("\nADIOS!");

    return 0;
}
