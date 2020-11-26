/*
    FUNÇÕES PARTE 2
*/

#include <stdio.h>
#include <stdio.h>



void mensagem(){
    printf("Bem-vindo!\n");
}

int soma(int num1, int num2){
    int res = num1 + num2;
    return res; // isso aqui so significa que ele esta colocando um valor, e nao a imprimindo.
}

void proximo_char(char caractere){ //recebe um caractere e vai imprimir o caractere+1 pela tabela ASCII seria o b
    printf("%c", caractere + 1);
}

int main(){
    printf("\n");

    //chamando as funções
    printf("Olah...\n");

    mensagem();


    int retorno = soma(4,6);
    //printf("Retorno = %d\n",retorno);
    

    printf("Retorno = %d\n", soma(4,6));

    char cara = 'a'; //char cara = 97
    proximo_char(cara);

    printf("\n");
    return 0;
}