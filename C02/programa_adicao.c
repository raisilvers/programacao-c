/* Programa que soma dois 
valores inteiros */

#include <stdio.h>

int main(void)
{
    int num1, num2, result;

    printf("Digite o primeiro numero: \n");
    scanf("%d", &num1);

    printf("Digite o segundo valor: \n");
    scanf("%d", &num2);

    result = num1 + num2;

    printf("Resultado = %d\n", result);
    
    return (0);
}