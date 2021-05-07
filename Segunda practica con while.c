#include <stdio.h>

int main()
{
    int codigo, num1, num2;

    printf("\nIngrese un codigo: ");
    scanf("%d", &codigo);

    while(codigo = 0)
    {
        printf("\nIngrese un numero: ");
        scanf("%d", &num1);

        printf("\nIngrese otro numero: ");
        scanf("%d", &num2);

        if(codigo == 1)
        {
            printf("\nEl resultado de la suma es: %d", num1 + num2);
        }

        if(codigo == 2)
        {
            printf("\nEl resultado de la resta es: %d", num1 - num2);
        }

        printf("\n\nIngrese un codigo: ");
        scanf("%d", &codigo);

    }
}
