#include <stdio.h>

int main(){

    typedef float nota;

    //declarando_variaveis
    nota prova1 = 7.0;
    nota prova2 = 6.0;

    nota soma = prova1 + prova2;

    printf("\nA soma das notas eh: %.2f\n",soma);

    printf("\n");
    return 0;
}