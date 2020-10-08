/*

*/

#include <stdio.h>
#include <stdio.h>

int main(){
    printf("\n");

    //declarando_variaveis
    int valor = 2;
    printf("Valor vale %d\n",valor);

    //entrada_dados

    //processamento_dados
        //deslocamento de bit para esquerda
    valor = valor << 2;
    printf("Valor vale %d\n",valor);

    valor = 2;//reset

        //deslocamento de bit para esquerda
    valor = valor >> 1;
    printf("Valor vale %d\n",valor);

    valor = 2;//reset

    //Negação
    valor = ~valor;
    printf("Valor vale %d\n",valor);

    //saida_dados


    printf("\n");
    return 0;
}