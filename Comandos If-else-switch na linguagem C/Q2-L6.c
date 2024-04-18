/*2. A determinação da divisibilidade de um número por outro é importante na
programação. Sabendo disso, crie um programa que solicita e lê dois números
inteiros (numerador e denominador) e verifica se a divisão é exata. Se for, exiba a
mensagem: “É divisível!”. Caso contrário, exiba a mensagem: “Não é divisível!”.
Obs.: não esqueça que a divisão só deve ser realizada, caso o denominador seja
diferente de zero. Caso contrário, o programa deve exibir uma mensagem
informando que a divisão é indefinida.*/

#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    int numerador, denominador, resto;

    printf("Checagem para determinar se uma divisão é possível\n");

    // Solicita ao usuário que informe o numerador
    printf("Por favor, informe o numerador: ");
    scanf("%d", &numerador);

    // Solicita ao usuário que informe o denominador
    printf("Por favor, informe o denominador: ");
    scanf("%d", &denominador);

    if (denominador == 0) {
        printf("A operação não pode ser realizada quando o denominador é zero.\n");
    } else {
        resto = numerador % denominador;
        if (resto != 0) {
            printf("A divisão não é exata porque o resto foi igual a %d.\n", resto);
        } else {
            printf("A divisão é exata porque o resto foi igual a %d.\n", resto);
        }
    }
    return 0;
}
