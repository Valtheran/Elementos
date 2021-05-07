#include <stdio.h>

int main()
{
    int articulo, cantidad, precio, i, total, mayor, codigo, maxcodigo;
    mayor = 0;
    maxcodigo = 0;

    printf("\nIngrese la cantidad total de articulos a comprar: ");
    scanf("%d", &articulo);

    for(i=0; i<articulo; i++)
    {
        printf("\nIngrese el codigo de articulo: ");
        scanf("%d", &codigo);

        printf("\nIngrese la cantidad del articulo a comprar: ");
        scanf("%d", &cantidad);

        printf("\nIngrese el precio de venta por unidad: ");
        scanf("%d", &precio);

        total=cantidad*precio;

        printf("\nEl total vendido es de: %d", total);

        if(mayor<total)
        {
            mayor=total;
            maxcodigo=codigo;
        }
    }

    printf("\n La mayor cantidad del articulo %d, es de %d", maxcodigo, mayor);
}
