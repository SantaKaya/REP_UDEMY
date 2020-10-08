/*
    Leia um numero real e imprima a quinta parte deste numero.
*/
#include <stdio.h>
#include <stdlib.h>

int main(){

    //declarando_variaveis
    double numero, quintap;

    //entrada_dados
    printf("Digite o numero real:\n");
    scanf("%lf",&numero);

    //processamento_dados

    quintap = numero * 1/5;

    //saida_dados
    printf("A quinta parte do numero %.3lf eh:\n %.3lf \n",numero, quintap);


    return 0;
}