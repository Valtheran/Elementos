#include <stdio.h>

int main ()
{
    int num1, num2, sum, rest, producto;
    float cociente;

    printf("\nIngrese el primer numero: ");
    scanf("%d", &num1);

    printf("\nIngrese el segundo numero: ");
    scanf("%d", &num2);

    sum=num1+num2;
    rest=num1-num2;
    producto=num1*num2;
    cociente=(float)num1/num2;

    printf("\nEl resultado es de: ");
    printf("\nSuma: %d", sum);
    printf("\nResta: %d", rest);
    printf("\nProducto: %d", producto);
    printf("\nCociente: %.2f", cociente);
}
