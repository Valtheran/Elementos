#include <stdio.h>

int main ()
{
    int hs, val, sueldo;

    printf("\nIngrese la cantidad de horas trabajadas: ");
    scanf("%d", &hs);

    printf("\nIngrese el valor por horas de trabajo: ");
    scanf("%d", &val);

    sueldo=hs*val;

    printf("\nEl sueldo es de: %d", sueldo);
}
