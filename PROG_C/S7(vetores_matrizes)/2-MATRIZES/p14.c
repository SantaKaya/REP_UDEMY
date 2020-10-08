/*  MATRIZES PARTE 1

    ARRAY MULTI-DIMENSIONAIS
    char nome[3][5];

*/

#include <stdio.h>
#include <stdio.h>

int main(){

    //declarando_variaveis

    char nome[3][50];

    //entrada_dados

    for(int i = 0 ; i < 3; i++){
        printf("Qual seu nome?\n");
        gets(nome[i]);// pede o nome ao usuario 3x e guarda nas posições indicadas
    }

    for(int i = 0; i < 3; i++){
        printf("Olah %s\n",nome[i]);// saudação aos nomes digitados.
    }

    //processamento_dados

    //saida_dados



    return 0;
}