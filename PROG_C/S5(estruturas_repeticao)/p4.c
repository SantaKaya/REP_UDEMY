// Estrutura de repetição FOR

/* Utilizado o FOR
    Faça um progama no qual receba e some 5 numeros inteiros e apresente a soma no final.
*/
                        
#include <stdio.h>

int main(){

    //declaração_variaveis
    int numero, soma = 0; //Inicializa soma para não receber lixo

    //inicio_for 
    for (int i = 0; i < 5; i++){//para o int i iniciando em 0; enquanto i < 5; incremente i em 1.

    //entrada_dados
    printf("Informe um numero:\n");
    scanf("%d",&numero);

    //processamento_dados
    soma = soma + numero;
    }//fim_for

    //saida_dados
    printf("A soma eh: %d",soma);
    

    return 0;
}

