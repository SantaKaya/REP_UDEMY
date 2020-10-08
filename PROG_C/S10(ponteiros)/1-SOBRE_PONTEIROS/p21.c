/*

*/

#include <stdio.h>
#include <stdio.h>


void incrementa(int valor);// função que recebe um tipo inteiro e imprime seu valor antes e depois.



int main(){//inicio_main

    printf("\n");

    int contador = 10;

    printf("Antes de incrementar.\n", contador);
    printf("O contador vale :%d\n",contador);
    

    incrementa(contador); //passa a variavel contador para a função incrementa.

    printf("Depois de incrementar.\n", contador);
    printf("O contador vale :%d\n", contador);

    //declarando_variaveis
    //entrada_dados
    //processamento_dados
    //saida_dados
    printf("\n");
    printf("\n");
    return 0;
}//fin_main

////////////////////////////////////////FUNÇÕES///////////////////////////////////////////

//1//
void incrementa(int valor){
    printf("O Antes de incrementar.\n");
    printf("O contador vale :%d\n",valor);

    printf("O Depois de incrementar.\n");
    //valor++;
    printf("O contador vale:%d\n",++valor);
    //printf("O contador vale :%d\n",valor);
    


}