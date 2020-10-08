/*
    Vamos criar um progama que receba 2 numeros, execute a função de soma e multiplicação e passe esses valores para as
    variaveis ret_s e ret_m.
*/

#include <stdio.h>
#include <stdio.h>
#include "ajuda.h"





int main(){
    printf("\n");

    mensagem();

    //d_v//
    int n1, n2, ret_s, ret_m;

    //e_d//
    printf("Informe o primeiro numero:\n");
    scanf("%d",&n1);
    printf("Informe o segundo numero:\n");
    scanf("%d",&n2);


    //p_d//
    ret_s = soma(n1,n2);
    printf("A soma de %d com %d eh: %d\n", n1, n2, ret_s);

    ret_m = mult(n1,n2);
    printf("A multiplicacao de %d com %d eh: %d", n1, n2, ret_m);

    //s_d//


    printf("\n");
    return 0;
}