/*
    VETORES PARTE 1
*/

#include <stdio.h>
#include <stdio.h>

int main(){

    //declarando_variaveis
    
    //vetore e string
    char nome[50];
    printf("Qual seu nome?\n");
    gets(nome);
    printf("Olah %s\n",nome);




    //vetores e caracteres
    char letras[26];//0..25
    //'b'
    int contador = 0;
    for (int i = 97 ; i <= 122 ; i++){
        letras[contador] = i;
        contador = contador + 1;
    }
    //imprimindo as letras e seus valores em decimal.
    for (int i = 0 ; i < 26; i++){
        printf("%d == %c\n",letras[i],letras[i]);
    }


    //entrada_dados

    //processamento_dados

    //saida_dados



    return 0;
}