/* Programa que adiciona dois valores */

#include <stdio.h>

int main(void)
{
    int num1;
    int num2;
    int soma;

    printf("Digite o primeiro valor: \n");
    scanf("%d", &num1);

    printf("Digite o segundo valor: \n");
    scanf("%d", &num2);

    soma = num1 + num2;

    printf("Resultado: %d\n", soma);

}