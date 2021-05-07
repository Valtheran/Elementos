#include <stdio.h>

int main ()
{
    int temp, tmin, tmax, pmin, pmax, pos;
    tmin=0;
    tmax=0;
    pos=0;

    printf("\nIngrese la temperatura: ");
    scanf ("%d", &temp);

    while (temp != -50)
    {
        if (temp>tmax)
        {
            pos++;
            pmax=pos;
            tmax=temp;
        }

        if (temp<tmin)
        {
            pos++;
            pmin=pos;
            tmin=temp;
        }

        printf("\nIngrese la temperatura: ");
        scanf ("%d", &temp);
    }

    printf("\nLa temperatura maxima es de %d y fue ingresada en la posicion %d",tmax, pmax);
    printf("\nLa temperatura minima es de %d y fue ingresada en la posicion %d",tmin, pmin);

    return 0;
}
