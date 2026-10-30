/* Programa que calcula tres inteiros */

#include <stdio.h>

int main(void)
{
    int n1, n2, n3, resultado;

    printf("Entre com tres inteiros: \n");
    scanf("%d%d%d", &n1, &n2, &n3);

    resultado = n1 * n2 * n3;

    printf("Resuldato: %d\n", resultado);

    return (0);
}