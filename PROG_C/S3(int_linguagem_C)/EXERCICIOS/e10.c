/*
    Ler velocidade(km/h) | Conv velocidade(m/s)
    Formula -> M = K/3.6 , sendo K = velocidade(km/h) e
    M = velocidade(m/s);
*/
#include <stdio.h>

int main(){

    //declarando_variaveis
    float kmh,ms;

    //entrada_dados
    printf("Digite sua velocidade(km/h)");
    scanf("%f",&kmh);

    //processamento_dados
    ms = kmh/3.6;

    //saida_dados
    printf("Sua velocidade em m/s eh: %.3f",ms);


    return 0;
}