/*
    Leia uma temperatura em graus Celcius e apresete-a convertida
    em graus Fahrenheit.
    A formula de conversão é:
        C = 5.0*(F-32.0)/9.0 , sendo F a temperatura em Fahrenheint 
        e C a temperatura em celcius.
*/
#include <stdio.h>

int main(){

    //declarando_variaveis
    float c,f;
    
    //entrada_dados
    printf("Digite sua temperatura em Fahrenheit:\n");
    scanf("%f",&f);

    //processamento_dados
    c = 5*(f - 32)/9;

    //saida_dados
    printf("Sua temperatura em Celsius eh: %.2f",c);


    return 0;
}