//Estrutura de repetição do..while

/*
    Utilizado quando você precisa de m loop onde não se tenha um numero fixo de elementos mas que
    tenha um criterio de parada e a condição de parada é checada após a primeira execução.

    PROBLEMA:
    Faça um progama, no qual receba e some numeros inteiros até que o numero de entrada seja 0 e apresente
    a soma no final:
*/

#include <stdio.h>

int main(){

    //declaração_variavel
    int numero, soma = 0;

    //entrada_dados
    do{
        //entrada
        printf("Informe um numero:\n");
        scanf("%d",&numero);

        //processamento
        soma = soma + numero;
    }while(numero != 0);

    

    //saida_dados
    printf("A soma eh: %d",soma);


    return 0;
}