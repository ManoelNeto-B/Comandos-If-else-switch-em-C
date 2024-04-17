/*2. A determinação da divisibilidade de um número por outro é importante na
programação. Sabendo disso, crie um programa que solicita e lê dois números
inteiros (numerador e denominador) e verifica se a divisão é exata. Se for, exiba a
mensagem: “É divisível!”. Caso contrário, exiba a mensagem: “Não é divisível!”.
Obs.: não esqueça que a divisão só deve ser realizada, caso o denominador seja
diferente de zero. Caso contrário, o programa deve exibir uma mensagem
informando que a divisão é indefinida.*/

#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int n, d, m;

    printf("checagem para determinar se uma divisão é possível\n");

    printf("Por favor informe o numerador\n");
    scanf("%i", &n);

    printf("Por favor informe o denominador\n");
    scanf("%i", &d);

    if (d == 0)
    {
        printf("A operação não pode ser realizada quando o denominador for: 0");
    }
    else
    {
        m = n % d;
        if (m != 0)
        {
            printf("a divisão não é exata porque seu resto foi igual a %i", m);
        }
        else
        {
            printf("a divisão é exata porque seu resto foi igual a %i", m);
        }
    }
    return (0);
}