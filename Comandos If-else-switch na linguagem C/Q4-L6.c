/*4. Um feirista vende suas maças a R$ 1,30 por unidade, se forem compradas menos de
uma dúzia, e a R$ 1,10 por unidade, se forem compradas pelo menos uma dúzia.
Sabendo disso, crie um programa que solicita e lê a quantidade de maças desejadas,
calcula e informa o preço a ser pago pelo cliente, considerando os preços definidos
anteriormente.*/

#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    float x;

    printf("Olá seja bem vindo a barraca de maças do seu Zé\n");
    printf("Aqui você encontra maças de ótima qualidade\n");
    printf("Informamos que caso, você nosso amado cliente, compre menos de uma dúzia de maças\ncada maça custará R$1,30\nporém, caso nosso amado cliente compre mais que uma dúzia o preço para cada maça será de R$1,10\n");

    printf("Dito isso, agora informe quantas das nossas deliciosas maças nosso amado cliente irá comprar\n");
    scanf("%f", &x);

    if (x >= 12)
    {

        printf("O preço total das maças é de: \n%.2f", x * 1.10);
    }
    else
    {

        printf("O preço total das maças é de: \n%.2f", x * 1.30);
    }

    return (0);
}