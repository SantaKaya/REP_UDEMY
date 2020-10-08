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
    double media; //23.4, 1.23,....9999999999999

    //entrada_dados
    printf("Qual a primeira nota?\n");
    scanf("%f",&nota1);

    printf("Qual a segunda nota?\n");
    scanf("%f",&nota2);

    //processamento_dados
    media = (nota1 + nota2)/2;

    //saida_dados
    printf("Sua media eh: \n%.2lf",media);


    return 0;
}