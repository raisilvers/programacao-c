/* if, operadores relacionais, operador de igualdade */

#include <stdio.h>

int main(void)
{
    int n1;
    int n2;

    printf("Entre com  os valores que deseja saber a relacao: \n");
    scanf("%d%d", &n1, &n2);

    if (n1 == n2)
    {
        printf("%d é igual a %d\n", n1, n2);
    }

    if (n1 != n2)
    {
        printf("%d e diferente de %d\n", n1, n2);
    }

    if (n1 < n2)
    {
        printf("%d é menor que %d\n", n1, n2);
    }

    if (n1 > n2)
    {
        printf("%d é maior que %d\n", n1, n2);
    }

    if (n1 <= n2)
    {
        printf("%d é maior ou igual a %d\n", n1, n2);
    }

    if (n1 <= n2)
    {
        printf("%d é menor ou igual a %d\n", n1, n2);
    }
    
    return (0);
}