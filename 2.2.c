#include <stdio.h>

int main ()
{
    int n1, n2;
    float promedio;

    printf("\nIngrese la nota de la primer evaluacion: ");
    scanf("%d", &n1);

    printf("\nIngrese la nota de la segunda evaluacion: ");
    scanf("%d", &n2);

    promedio=(n1+n2)/2;

    printf("\nEl promedio es de: %f", promedio);
}
