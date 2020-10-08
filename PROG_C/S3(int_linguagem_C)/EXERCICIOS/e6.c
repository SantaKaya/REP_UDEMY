/*
    Leia uma temperatura em graus Celcius e apresete-a convertida
    em graus Fahrenheit.
    A formula de conversão é:
        F = C*(9.0/5.0)+32.0, sendo F a temperatura em Fahrenheint 
        e C a temperatura em celcius.
*/
#include <stdio.h>

int main(){

    //declarando_variaveis
    float temp, f;


    //entrada_dados
    printf("Digite a temperatura em Celcius:\n");
    scanf("%f",&temp);

    //processamento_dados
    f = (temp*9/5) + 32;

    //saida_dados
    printf("Sua temperatura em Fahrenheit eh: %.2f",f);


    return 0;
}