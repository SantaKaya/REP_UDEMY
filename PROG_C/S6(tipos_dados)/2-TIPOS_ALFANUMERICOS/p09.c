/*
    Tipos de Dados

    TIPOS ALFANUMERICOS
        - Caracteres
        - Strings
*/

#include <stdio.h>
#include <stdio.h>

int main(){

    //declarando_variaveis
    char nome[50];//49 char + /0 caractere finalizador.

    //entrada_dados
    printf("Qual eh o seu nome?\n");
    gets(nome);
    //processamento_dados

    //saida_dados
    printf("Seu nome eh %s",nome);


    return 0;
}