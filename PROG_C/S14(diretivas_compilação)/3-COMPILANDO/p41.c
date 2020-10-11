#include <stdio.h>

// compilação via terminal
/*
*   gcc arquivo-fonte (opicional) -o nome-progama
*   gcc nome-do-progama.c -o nome-do-progama-executavel.qualquer-cois  
*
*/


int main(){

    int qtd,soma = 0;

    printf("Quantos numeros você quer somar?");
    scanf("%d",&qtd);

    for(int i = 0 ; i < qtd; i++){
        soma = soma + i * 2 +3;
    }
    printf("A soma eh : %d", soma);

    return 0;
}