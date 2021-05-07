#include <stdio.h>

int main ()
{
    int num, nmax1, nmax2, bandera;
    bandera=0;
    nmax1=0;
    nmax2=0;

    printf("\nIngrese un numero: ");
    scanf ("%d", &num);

    while (num != 0)
    {
        if (bandera == 1)
        {
            nmax1=num;
            nmax2=num;
            bandera = 2;
        }
        else
        {
            if(bandera == 2)
            {
                bandera = 3;
                nmax1 = num;
            }
            else
            {
                if(nmax1<num)
                {
                    nmax2=nmax1;
                    nmax1=num;
                }
                else
                {
                    if(nmax2<num)
                    {
                        nmax2=num;
                    }
                }
            }
        }

        printf("\nIngrese un numero: ");
        scanf ("%d", &num);
    }

    printf("\nEl primer numero maximo es de: %d", nmax1);
    printf("\nEl segundo numero maximo es de: %d", nmax2);

    return 0;
}
