#include <stdio.h>
#include <stdlib.H>
#include <math.h>
#include <string.h>
#include "FILA.h"
#include "pilha.h"

/////////////////////// FUNÇÕES EXERCICIO//////////////////

void maior_fila(tp_fila *f1, tp_fila *f2){
    if(tamanho_fila1(*f1)>tamanho_fila1(*f2)){
        printf("\n\nFILA 1 > FILA 2\n\n");
    }else{
        printf("\n\nFILA 2 > FILA 1\n\n");
    }
}




void M_m_med_fila(tp_fila *f){
    int a = tamanho_fila1(*f);
    printf("a = |%d|\n",a);
    int soma = 0,max=1,min=99999;
    tp_item aux;

    for(int i = 0; i<a;i++){
        remove_fila(f,&aux);
        if(aux>max){
            max = aux;
        }else if(aux<min){
            min = aux;
        }

        soma = soma + aux;
    }

    float med = (float)soma/(float)a;

    printf("MAIOR = |%d|\tMENOR = |%d|\t MEDIA = |%.2f|\n",max,min,med);

}



void ordem_fila(tp_fila *f){
    int a = tamanho_fila1(*f) - 1;
    printf("a = |%d|\n",a);
    tp_item aux;

    int array[a];

    for(int i = 0; i<=a;i++){
        remove_fila(f,&array[i]);
    }

    printf("ARRAY :\t");
    for(int v = 0; v<=a; v++){
        printf("|%d|",array[v]);
    }

    for(int j = 0; j<=a; j++){
        for(int k = 0;k<a;k++){
            if(array[k]>array[k+1]){
                aux = array[k+1];
                array[k+1] = array[k];
                array[k]=aux;
                
            }
        }
    }

    for(int t = 0; t<=a ; t++){
        insere_fila(f,array[t]);
    }

}





void reverso_fila(tp_fila *f){
    tp_pilha pilha;
    tp_item e;
    inicializa_pilha(&pilha);

    while(!fila_vazia(f)){
        remove_fila(f,&e);
        push(&pilha,e);
    }
    
    while(!pilha_vazia(&pilha)){
        pop(&pilha,&e);
        insere_fila(f,e);
    }

}
