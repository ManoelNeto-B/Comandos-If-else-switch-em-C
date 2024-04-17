/*5. A Lanchonete Coma Bem deseja informatizar o seu estabelecimento visando melhor
atender seus clientes. Para isso, decidiu trabalhar com pedidos realizados em seu
aplicativo, disponível em dispositivos eletrônicos dispostos no local. Você foi
contratado para criar um sistema para tal lanchonete. O cardápio da lanchonete está
ilustrado na tabela a seguir.
CÓDIGO DO ITEM ESPECIFICAÇÃO PREÇO UNITÁRIO
100 Cachorro quente 8,00
101 Bauru 9,00
102 X-Salada 10,00
103 Hambúrguer 12,00
104 Refrigerante (lata) 3,00
Inicialmente, o programa deve exibir as informações da tabela anterior. Em seguida,
o programa deve solicitar e ler o código do item desejado e a quantidade de tal item.
Por fim, o programa deve calcular e exibir o valor a ser pago. Considere que, a cada
execução do programa, o cliente só pode escolher um item, variando apenas sua
quantidade.*/

#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int c, q;

    float p;

    printf("\tOlá, seja bem vindo a Lanchonete Coma Bem\n");
    printf("=================================================================================\n");
    printf("\tà seguir você irá encontrar nosso cardápio\n\n");

    printf("\tcódigo do item 100 | especificação cachorro-quente   | preço unitário 8R$ \n");
    printf("\tcódigo do item 101 | especificação bauru             | preço unitário 9R$ \n");
    printf("\tcódigo do item 102 | especificação X-salada          | preço unitário 10R$ \n");
    printf("\tcódigo do item 103 | especificação Hambúrguer        | preço unitário 12R$ \n");
    printf("\tcódigo do item 104 | especificação Refrigerante(lata)| preço unitário 3R$ \n");

    printf("==================================================================================\n\n");

    printf("por favor digite a quantidade do item desejado\n");
    scanf("%i", &q);

    printf("por favor digite o código equivalente ao item desejado\n");
    scanf("%i", &c);

    printf("==================================================================================\n\n");

    switch (c)
    {

    case 100:

        p = 8;

        printf("o tatal à pagar pelo(s) cachorros-quente(s) é : R$ %.2f\n", q * p);
        break;

    case 101:

        p = 9;

        printf("o total à pagar pelo(s) bauru(s) é : R$%.2f\n", q * p);
        break;

    case 102:

        p = 10;

        printf("o total à pagar pelo(s) x-salada(s) é : R$%.2f\n", q * p);
        break;

    case 103:

        p = 12;

        printf("o total à pagar pelo(s) hambúrguer(esé) é : R$%.2f\n", q * p);
        break;

    case 104:

        p = 3;

        printf("o total à pagar pelo(s) refrigerante(s) é : R$%.2f\n", q * p);
        break;

    default:

        printf("o código digitado está errado, por favor tente novamente\n");
    }

    return (0);
}