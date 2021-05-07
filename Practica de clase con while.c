#include <stdio.h>

int main()
{
    int articulo, cantidad, precio, total, mayor, maxcodigo, codigo;
    mayor = 0;
    maxcodigo = 0;

    printf("\nIngrese el numero de articulo: ");
    scanf("%d", &articulo);

    while(articulo >= 1 && articulo <=10 )
    {
        printf("\nIngrese la cantidad del articulo a comprar: ");
        scanf("%d", &cantidad);

        printf("\nIngrese el precio de venta por unidad: ");
        scanf("%d", &precio);

        total=cantidad*precio;

        printf("\nEl total vendido es de: %d", total);

        if(mayor<total)
        {
            mayor=total;
            maxcodigo=articulo;
        }

        printf("\n\nIngrese el numero de articulo: ");
        scanf("%d", &articulo);
    }

    printf("\n La mayor cantidad vendida del articulo %d, es de %d", maxcodigo, mayor);
}
