/*1. Escreva um programa que solicita e lê um valor inteiro e informa se ele é positivo,
negativo ou neutro.*/

#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");

    float a;
    //Printf para receber o valor informado de usuario
    printf("por favor informe o número desejado para saber se ele é positivo, negativo ou neutro: \n");
    scanf("%f", &a);
    
    //Se "a" for igual a 0, então ele é neutro 
    if (a == 0){
        printf("0 é Neutro!");
    }
        
    //Se "a" for maior que 0, entao o valor informado pelo ususario é positivo    
    else if (a > 0){
        printf("%f é Positivo!", a);
    }
    
    //Senão ele e negativo 
    else{
        printf("%f é Negativo!", a);
    }
    return (0);
}
