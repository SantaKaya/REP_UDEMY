/*
    Leia uma temperatura em graus Celcius e apresete-a convertida
    em Kelvin.
    A formula de conversão é:
        K = C + 273.15  , sendo C a temperatura em Celsius 
        e K a temperatura em Kelvin. 

*/
#include <stdio.h>
#define x 273.15


int main(){

    //declarando_variaveis
    float kel,cel;

    //entrada_dados
    printf("Digite sua temperatura em Celcius:\n");
    scanf("%f",&cel);

    //processamento_dados
    kel = cel + x;

    //saida_dados
    printf("Sua temperatura em Kelvin eh:\n %.2f",kel);


    return 0;
}