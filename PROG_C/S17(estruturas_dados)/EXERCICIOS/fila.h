
/////////////////////// FUNÇÕES PILHA//////////////////
/**
 * @brief ESTRUTURA FILA
 *  - INI = INICIO, ONDE O VALOR EH RETIRADO
 *  - FIM = FIM, ONDE O VALOR EH INSERIDO
 *  - FILA VAZIA => INI = FIM
 *  - INICIALIZAÇÃO DA FILA => INI = FIM = MAX-1;
 *  - FILA CHEIA - AO AVANÇAR(PROXIMO) FIM == INI
 */
/*==================================================*/



#ifndef FILA_H
#define FILA_H
#include <stdio.h>
#define MAX 100


typedef int tp_item;

typedef struct {
    tp_item item[MAX];
    int ini,fim;
    // int tam;
}tp_fila;

//INICIALIZANDO FILA
void inicializa_fila(tp_fila *f){
    printf("\n[===========| INI FILA |==========]\n");
    f->ini = f->fim = MAX -1;
    //f->tam=0;
    printf("\nINI = |%d|\t FIM = |%d|\n",f->ini,f->fim);
}

//FILA VAZIA
int fila_vazia(tp_fila *f){
    if(f->ini == f->fim){
        //printf("\n| EMPTY QUEUE |\n");
        return 1;
    }
    return 0;
    
}

//FUNÇÃO PARA TORNAR A FILA CICLICA, SE A posIÇÃO = MAX -1 -> 0
int proximo ( int pos){//se não, (4) - > (5)
    if(pos==MAX-1){
        return 0;
    }
    return ++pos;
}

//VERIFICAÇÃO SE A FILA ESTA CHEIA
int fila_cheia(tp_fila *f){

    if(proximo(f->fim) == f->ini){
        //printf("\n| FULL QUEUE |\n");
        return 1;
    }

    return 0;
}

//INSERINDO NA FILA
int insere_fila(tp_fila *f, tp_item e){

    if(fila_cheia(f)){
        return 0;
    }

    f->fim = proximo(f->fim);
    f->item[f->fim]=e;
    //f->tam++;
    //printf("| ADDED TO QUEUE |%d| |\n",e);
    return 1;
}

//REMOVENDO DA FILA
int remove_fila(tp_fila *f,tp_item *e){

    if(fila_vazia(f)){
        return 0;
    }
    
    f->ini = proximo(f->ini);
    *e = f->item[f->ini];
    //f->tam--;
    //printf("\n| REMOVED OF QUEUE |\n");
    return 1;

}

//IMPRIMINDO FILA
void imprime_fila(tp_fila f){
    tp_item e;
    printf("\n\n[=== |IMPRIMINDO FILA| ====]\n\n");
    while(!fila_vazia(&f)){
        remove_fila(&f,&e);
        printf("|%d|",e);
    }
    printf("\n[=======================]\n\n");
    return e;
}

//3 OPÇÕES PARA O TAMANHO DA FILA

/*
int tamanho_fila(tp_fila *f){
    if(fila_vazia(f)){
        return 0;
    }else if(f->ini < f->fim){
        return f->fim - f->ini;
    }else{
        return MAX -1 - f->ini + f-> fim +1;
    }
}
*/

// TAMANHDO DA FILA (PASSADA POR COPIA) - MAIS USADA
int tamanho_fila1(tp_fila f){
    int cont =0;
    tp_item e;
    while(!fila_vazia(&f)){
        remove_fila(&f,&e);
        cont++;
    }
    printf("TAMANHO FILA = |%d|\n",cont);
    return cont;
}

/*
int tamanho_fila2(tp_fila *f){
    printf("TAMANHO DA FILA = |%d|\n",f->tam);
}
*/

#endif