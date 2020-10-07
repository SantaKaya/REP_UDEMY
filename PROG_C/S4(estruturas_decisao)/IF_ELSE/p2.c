//Estrutura de decisão if, else, else if

#include <stdio.h>

int main(){//inicio_do_main


    //declaração_de_variaveis
    int idade;


    //entrada_de_dados
    printf("Qual eh a sua idade?\n");
    scanf("%d",&idade);


    //processamento_de_dados
    if(idade < 18){
        printf("Voce eh menor de idade.\n");
    }else if(idade > 18 && idade < 60){
        printf("Voce eh adulto.\n");
    }else{
        printf("Voce eh idoso.\n");
    }
    

    //saida_de_dados
    printf("Sua idade eh: %d",idade);


    return 0;
}//fim_do_main
