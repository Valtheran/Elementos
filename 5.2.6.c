#include <stdio.h>

int main ()
{
    int cont;
    float precio, descuento, total, acumulador, promedio;
    cont = 0;
    acumulador = 0;

    printf("\nIngrese el importe a pagar: ");
    scanf("%f", &precio);

    while(precio > 0)
    {
        if(precio < 50)
        {
            descuento = (precio*3.5)/100;
            total = precio - descuento;
        }

        if(precio >= 50 && precio <= 150)
        {
            descuento = (precio*10)/100;
            total = precio - descuento;
        }

        if(precio >= 151 && precio <= 300)
        {
            descuento = (precio*20)/100;
            total = precio - descuento;
        }

        if(precio > 300)
        {
            descuento = (precio*25)/100;
            total = precio - descuento;
        }

        cont ++;
        acumulador += total;

        printf("\nEl precio es : %f", total);

        printf("\n\nIngrese el importe a pagar: ");
        scanf("%f", &precio);

    }

    if(acumulador > 0)
    {
        promedio = acumulador/cont;
        printf("\nEl promedio de las ventas es: %.2f", promedio);
    }
}
