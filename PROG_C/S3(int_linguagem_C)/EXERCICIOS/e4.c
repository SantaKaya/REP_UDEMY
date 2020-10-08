// Leia um numero real e imprima o resultado do quadrado de numero.

#include <stdio.h>

int main(){

    //declarando_variaveis
    float numero, quadrado;

    //entrada_dados
    printf("Digite um numero real:\n");
    scanf("%f",&numero);

    //processamento_dados
    quadrado = numero*numero;
    //saida_dados
    printf("O Quadrado do valor digitado eh: %.4f",quadrado);


    return 0;
}