#include <stdio.h>
#include <stdlib.H>
#include <math.h>
#include <string.h>
#include "FILA.h"
#include "pilha.h"

/////////////////////// FUNÇÕES EXERCICIO//////////////////


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
*/




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
