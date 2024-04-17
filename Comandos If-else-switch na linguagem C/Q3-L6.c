/*3. Crie um programa que simule uma calculadora simples, ou seja, que efetua as
quatro operações básicas da matemática (adição, subtração, multiplicação e divisão)
para dois valores reais fornecidos pelo usuário. O programa deve exibir as opções
ao usuário e efetuar uma delas, conforme a opção digitada pelo usuário. Para isso,
utilize a estrutura SWITCH.
Obs.: não esqueça que a divisão só deve ser realizada, caso o denominador seja
diferente de zero. Caso contrário, o programa deve exibir uma mensagem
informando que a divisão é indefinida.*/

#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int x, y, z;

    printf("esta é uma calculadora simples, a seguir informe o que for pedido\n");

    printf("Informe o primeiro valor\n");
    scanf("%i", &x);

    printf("Informe o segundo valor\n");
    scanf("%i", &y);

    printf("\tagora informe qual operação você deseja realizar\n");
    printf("\tDigite 1 para somar os valores desejados\n");
    printf("\tDigite 2 para subtrair os valores desejados\n");
    printf("\tDigite 3 para multiplicar os valores desejados\n");
    printf("Digite 4 para dividir os valores desejados\n");

    scanf("%i", &z);

    printf("==================================================\n");

    switch (z)
    {
    case 1:
        printf("a soma dos valores informados é: %i", x + y);
        break;

    case 2:
        printf("a subtração dos valores informados é: %i", x - y);
        break;

    case 3:
        printf("a multiplicação dos valores informados é: %i", x * y);
        break;

    case 4:

        if (y == 0)
        {

            printf("a divisão não pode ser realizada porque o denominador é: 0");
        }
        else
        {

            printf("a divisão dos valores informados é: %i", x / y);
        }
    }

    return (0);
}
