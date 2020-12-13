#include <stdio.h>
#include <stdlib.H>
#include <math.h>
#include <string.h>
#include "FILA1.h"
#include "pilha.h"

/////////////////////// FUNÇÕES EXERCICIO//////////////////


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
