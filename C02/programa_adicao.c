/* Programa que soma dois 
valores inteiros */

#include <stdio.h> // biblioteca 

int main(void) // Em main que inicia o programa
{
    int num1; // variavel tipo inteiro
    int num2; // variavel tipo inteiro
    int soma; // variavel tipo inteiro

    printf("Digite o primeiro valor: \n"); // exibe na tela mensagem e pula uma linha
    scanf("%d", &num1);  // le um dado do tipo inteiro do teclado

    printf("Digite o segundo valor: \n");
    scanf("%d", &num2);

    soma = num1 + num2;

    printf("Resultado = %d\n", soma);

    return (0);
}