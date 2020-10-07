// Estrutura de repetição while
/*
    Utilizado quando voce precisa de m loop, onde não se tenha um numero fixo de elementos, mas que se tenha
    um criterio de parada. E antes de iniciar o loop, a condição é checada.

    PROBLEMA : Faça um progama no qual receba e some numeros inteiros até que o número de entrada seja 0.
*/




#include <stdio.h>

int main(){

    //declaração_variaveis
    int numero, soma = 0;

    
    //entrada_dados
    printf("Informe um Numero:\n");
    scanf("%d",&numero);

    //processamento_dados
    while(numero != 0){//ini_while
        
        soma = soma + numero;

        //entrada_dados
        printf("Informe um Numero");
        scanf("%d",&numero);

    }//fim_while


    //saida_dados
    printf("A soma eh: %d", soma);


    


    return 0;
}