/*1. Escreva um programa que solicita e lê um valor inteiro e informa se ele é positivo,
negativo ou neutro.*/

#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    float a;

    printf("por favor informe o número desejado para saber se ele é positivo, negativo ou neutro: \n");
    scanf("%f", &a);

    if (a == 0)
    {
        printf("o valor informado é neutro");
    }
    else

        if (a > 0)
    {
        printf("o valor informado é positivo");
    }
    else
    {
        printf("o valor informado é negativo");
    }

    return (0);
}