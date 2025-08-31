//ENTRADA E SAÍDA DE DADOS;

#include <stdio.h>
 
int main() {
    int idade = 19;
    float altura = 1.70;
    double saldo = 1.412;
    char inicial = 'T';
    char nome[20] = "Tainara";

    //IDADE:
    printf("Digite a sua idade: ");
    scanf("%d", &idade);
    printf("A idade e: %d anos\n", idade);

    //ALTURA:
    printf("Digite a sua altura: ");
    scanf("%f", &altura);
    printf("A sua altura e: %.2f metros\n", altura);

    //SALDO BANCÁRIO:
    printf("Digite seu saldo: ");
    scanf("%f", &saldo);
    printf("Seu saldo bancario e: %.3f\n", saldo);

    //LETRA INICIAL DO NOME:
    printf("Digite a letra inicial do seu nome: ");
    scanf(" %c", &inicial);
    printf("A inicial do seu nome e: %c\n", inicial);

    //NOME:
    printf("Digite seu nome: ");
    scanf(" %s", &nome);
    printf("Seu nome e: %s", nome);
    
    
   /* //SAÍDA DE DADOS;
    printf("Idade: %d anos\n", idade);
    printf("Altura: %f metros\n", altura);
    printf("Saldo Bancario: %f reais\n", saldoBancario);
    printf("Inicial do Nome: %c\n", inicial);
    printf("Nome: %s\n", nome);*/
 
    return 0;
}
