/*6. Na UFERSA, será aprovado na disciplina o aluno que obtiver Média Parcial (MP)
igual ou maior que 7,0 (sete vírgula zero) ou Média Final (MF) igual ou maior que
5,0 (cinco vírgula zero). Para o cálculo da MP usa-se a seguinte fórmula:
𝑀𝑃 =
(𝐴1 + 𝐴2 + 𝐴3)
3
Onde A1, A2 e A3 são as notas da primeira, segunda e terceira avaliação,
respectivamente.
O aluno que obtiver a MP igual ou superior a 3,5 (três vírgula cinco) e inferior a 7,0
(sete vírgula zero), será submetido a uma Avaliação Final (AF), e terá sua MF
calculada de acordo com a seguinte fórmula:
𝑀𝐹 =
[(6 × 𝑀𝑃) + (4 × 𝐴𝐹)]
10
Elabore um programa em C que calcula e exibe uma mensagem informando a(s)
média(s) obtidas e a situação final de um aluno, segundo os critérios adotados pela
UFERSA. Para isso, o programa deve solicitar e ler as notas necessárias para o
cálculo da(s) média(s).*/

#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    float unidade1, unidade2, unidade3, mp;

    // char nome;

    printf("\tOlá usuário, este algoritmo tem o objetivo de informar se um aluno(a) da UFERSA está aprovado ou reprovado\n");
    printf("\t\t\tPara realizar essa checagem por favor atenda as seguintes demandas.\n\n\n ");

    // printf("\tOlá aluno, por favor informe seu nome.\n\n");
    // scanf("%.10c", &nome );

    printf("\tpor favor informe a sua nota da primeira unidade.\n");
    scanf("%.2f", &unidade1);

    printf("\tpor favor informe a sua nota da segunda unidade.\n");
    scanf("%.2f", &unidade2);

    printf("\tpor favor informe a sua nota da terceira unidade.\n");
    scanf("%.2f", &unidade3);

    return (0);
}
