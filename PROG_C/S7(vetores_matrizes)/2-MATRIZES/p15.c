/*
    MATRIZES PARTE 2

[00][01][02][03][04]
[10][11][12][13][14]
[20][21][22][23][24]
[30][31][32][33][34]
[40][41][42][43][44]

*/

#include <stdio.h>
#include <stdio.h>

int main(){

    //declarando_variaveis




    //vetores de inteiros
    /*  matrix
             
        [00][01]
        [10][11]
    */
//DECLARAÇÃO
    int numeros[2][2];
    numeros[0][0] = 1;
    numeros[0][1] = 2;
    numeros[1][0] = 3;
    numeros[1][1] = 4;

//IMPRESSÃO
    for(int i = 0; i < 2 ; i++){//for_percorrer_LINHAS
        for(int j = 0; j < 2 ; j++){//for_percorrer_COLUNAS
            printf("numeros[%d][%d] vale %d\n", i, j,numeros[i][j]);
        }
    }




    //vetores de reais
    float valores[5][5];
    int somador = 1;
    
    for(int i = 0; i < 5; i++){
        for(int j = 0 ; j < 5; j++){
            valores[i][j] =  (float)somador / 2;
            somador++;
        }
    }
    //impressão
    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++){
            printf("valores[%d][%d] vale %.2f\n",i,j,valores[i][j]);
        }
    }



    //entrada_dados

    //processamento_dados

    //saida_dados



    return 0;
}