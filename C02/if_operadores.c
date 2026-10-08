/* Usando if, operadores relacionais
e operadores de igualdade.*/

#include <stdio.h>

int main(void)
{
    int num1;
    int num2;

    printf("Entre com dois numeros e eu lhe direi\n");
    printf("as relaçoẽs que eles satisfazem: ");

    scanf("%d", &num1);
    scanf("%d", &num2);
    
    if(num1 == num2)
    { 
        printf("%d é igual a %d\n", num1, num2 );
    }

    if(num1 != num2)
    {
        printf("%d é diferente de %d\n", num1, num2 );
    }

    if(num1 < num2)
    {
        printf("%d é menor que %d\n", num1, num2);
    }

    if(num1 > num2)
    {
        printf("%d é maior que %d\n", num1, num2);
    }

    if(num1 <= num2)
    {
        printf("%d é menor igual a %d\n", num1, num2);
    }

    if(num1 >= num2)
    {
        printf("%d é maior igual a %d\n", num1, num2);
    }

    return 0;
}