#include <stdio.h>

int main(void)
{
    int valor1;
    int valor2;
    int resultado;

    printf("Digite o primeiro valor: \n");
    scanf("%d", &valor1);

    printf("Digite o segundo valor: \n");
    scanf("%d", &valor2);

    resultado = valor1 + valor2;

    printf("Resuldado = %d\n",resultado);
    return 0;
}