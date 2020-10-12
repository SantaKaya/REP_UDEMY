#include <stdio.h>
#include <stdlib.h>
#include <time.h>
//Calloc


int main(){//inicio_main
    printf("\n*******************************************************\n");

    int qtd, *p;

    printf("Quantidade de elementos para o vetor:\n");
    scanf("%d",&qtd);

    //alocação de espaço do tipo int
    //p = (int*)malloc(qtd * sizeof(int)); // recebe 1 parametro. | 3 x 4 == 12 bytes
    p = (int*)calloc(qtd, sizeof(int)); // em vez de * recebe 2 parametros. | 3 x 4 == 12 bytes

    if(p){
        
        //p[0] = 6;
        //p[1] = 12;
        //p[2] = 34;

        printf("A variavel 'p' ocupa %ld bytes em memoria.\n", qtd * sizeof(int));
        for(int i = 0; i < qtd; i++){
        printf("Valor de p[%d] = %d\n",i,p[i]);
        }
    }else{
        printf("Erro: Memoria insuficiente!!!");
    }

    printf("\n*******************************************************\n");
    printf("\n");
    printf("\n");
    return 0;
}//fim_main
/********************************ANOTAÇÕES*****************************************
 *  calloc(qtd, sizeof(int)); calloc(a,b) -> a * b;
 * 
 * Malloc
 * [3][66][99] 
 * Calloc
 * [3][66][99] 
 * [0][0][0]
 * 
 * 
//declarando_variaveis
//entrada_dados
//processamento_dados
//saida_dados


*/
