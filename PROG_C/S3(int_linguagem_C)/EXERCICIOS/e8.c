/*
    Leia uma temperatura em graus Kelvin e apresete-a convertida
    em Celcius.
    A formula de conversão é:
        C = K - 273.15  , sendo C a temperatura em Celsius 
        e K a temperatura em Kelvin. 
*/
#include <stdio.h>
#define x 273.15

int main(){

    //declarando_variaveis
    float cel, kel;


    //entrada_dados
    printf("Digite sua temperatura em Kelvin:\n");
    scanf("%f",&kel);

    //processamento_dados
    cel = kel - x;

    //saida_dados
    printf("Sua temperatura em celcius eh: %.3f",cel);

    return 0;
}