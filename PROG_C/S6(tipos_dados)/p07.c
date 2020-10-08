/*
    Tipos de Dados

    Tipos Numericos
        - Inteiros
        - Reias

*/

#include <stdio.h>
#include <stdio.h>

int main(){

    //declarando_variaveis
    
    //inteiro
    int numero_inteiro; //7,890...

    //real
    float nota1,nota2; // 23.4,1.23,...9999999
    float media; //23.4, 1.23,....9999999999999

    //entrada_dados
    printf("Qual a primeira nota?");
    scanf("%f",&nota1);

    printf("Qual a segunda nota?");
    scanf("%f",&nota2);

    //processamento_dados
    media = (nota1 + nota2)/2;

    //saida_dados
    printf("Sua media eh: %.2f",media);


    return 0;
}