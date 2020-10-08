// Peça ao usuario para digitar tres valores inteiros e imprima a soma deles.

#include <stdio.h>

int main(){

    //declarando_variaveis
    int valor1, valor2, valor3, i = 0,soma;

    //entrada_dados
    if (i < 3){
        printf("Digite 3 valores inteiros:\n");
        scanf("%d %d %d",&valor1,&valor2,&valor3);
        i++;
    }

    //processamento_dados
    soma = valor1 + valor2 + valor3;

    //saida_dados
    printf("A soma eh: %d",soma);


    return 0;
}