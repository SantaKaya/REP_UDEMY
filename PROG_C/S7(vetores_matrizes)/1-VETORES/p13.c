/*
    VETORES PARTE 2
*/

#include <stdio.h>
#include <stdio.h>

int main(){

    //declarando_variaveis
    
   
    //vetores de inteiros
    int numeros[6];//0...5
    numeros[0] = 1;
    numeros[1] = 3;
    numeros[2] = 5;
    numeros[3] = 7;
    numeros[4] = 9;
    numeros[5] = 2;


    //vetores e reais
    float valores[5];//0...4
    for(int i = 0; i<= 5; i++){
        valores[i] = (float)numeros[i] / (float)2;
    }//fim_for preenchimento

    for(int i = 4 ; i > 0; i--){//imprimindo ao contrario.
        printf("%.2f\n",valores[i]);
    }




    //entrada_dados

    //processamento_dados

    //saida_dados



    return 0;
}