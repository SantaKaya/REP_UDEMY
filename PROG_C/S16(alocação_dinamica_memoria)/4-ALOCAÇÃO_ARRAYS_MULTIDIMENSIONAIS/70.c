#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * MATRIX (3 X 3) BI-DIMENSIONAL
 * [00][01][02]
 * [10][11][12]
 * [20][21][22]
 * Alocando para  1 inteiro
 * int -> 4 bytes -> 1 x 4 = 4 bytes
 *                   2 x 4 = 8 bytes
 *                   3 x 3 x 4 = 36 bytes  (linhas * colunas * quantidade_de_bytes)
 * 
*/

int main(){//inicio_main
    printf("\n*******************************************************\n");

    int *p, linhas = 3, colunas = 3;
    

    //alocação de espaço do tipo int
    p = (int*)malloc(linhas * colunas * sizeof(int)); // p = (int*)malloc(colunas * linhas * sizeof(int));

    for(int i = 0; i < linhas; i++){
        for (int j = 0; j < colunas; j++){
            p[i * colunas + j] = 3 * i + j;
        }
    }

    for(int i = 0; i < linhas; i++){
        for (int j = 0; j < colunas; j++){
            printf("Conteudo p[%d][%d] = %d\n", i, j, p[i * colunas + j]);
        }
        
    }

    printf("\n*******************************************************\n");
   
    //free(p);
    //p = NULL;
    printf("\n");
    printf("\n");
    return 0;
}//fim_main
/********************************ANOTAÇÕES*****************************************
//declarando_variaveis
//entrada_dados
//processamento_dados
//saida_dados


*/
