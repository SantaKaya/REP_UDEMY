
/////////////////////// FUNÇÕES PILHA//////////////////
/**
 * @brief ESTRUTURA PILHA
 *  - TOPO = ELEMENTO NO TOPO DA PILHA 
 *  - ITEM[MAX] = PILHA COM QTD ELEMENTOS = MAX
 */
/*==================================================*/

#ifndef PILHA_H
#define PILHA_H

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

#define MAX 100
#define TRUE 1
#define FALSE 0

//ESTRUTURA PARA FACILITAR A ALTERAÇÃO DO TIPO DE DADO DA PILHA
typedef int 
    tp_item;


//ESTRUTURA DA PILHA
typedef struct{
    int topo;
    int item[MAX];
}tp_pilha;

//INICIALIZAÇÃO DA PILHA
void inicializa_pilha(tp_pilha *p){
    p -> topo = -1;
    printf("\n[===========| INI PILHA |==========]\n");
    printf("1TOPO = |%d|\n",p->topo);
}

//TESTE PARA VER SE A PILHA ESTA VAZIA
int pilha_vazia(tp_pilha *p){
    if(p->topo == -1){
        printf("\n|PILHA VAZIA|\n");
        printf("\n");
        return TRUE;
    }else{
        return FALSE;
    }
}

//TESTE PARA VER SE A PILHA ESTA CHEIA
int pilha_cheia(tp_pilha *p){
    if(p->topo == MAX-1){
        printf("\n|PILHA CHEIA|\n");
        return TRUE;
    }else{
        return FALSE;
    }
}

//ADICIONANDO ELEMENTO NA PILHA
int push(tp_pilha *p, tp_item e){
    if(pilha_cheia(p)==TRUE){
        return FALSE;
    }else{
        p->topo++;
        p->item[p->topo]=e;//em p.item na posição p.topo colocar o (e).
        //printf("\n|VALUE ADDED |%d||\n",e);
        return TRUE;
    }

}

//REMOVENDO ELEMENTO DA PILHA
int pop(tp_pilha *p,tp_item *e){
    if(pilha_vazia(p)==TRUE){
        return FALSE;
    }else{
        *e = p->item[p->topo];
        p->topo--;
        //printf("\n|VALUE REMOVED |%d||\n",*e);
        return TRUE;

    }
    
}

//VISUALIZANDO O ELEMENTO DO TOPO
int top(tp_pilha *p, tp_item *e){
    if(pilha_vazia(p)){
        return FALSE;
    }else{
        *e = p->item[p->topo];
        printf("VALOR TOPO = |%d|\n",p->item[p->topo]);
        return TRUE;
    }
}

//ALTURA DA PILHA
int altura_pilha(tp_pilha *p){
    return p->topo+1;
}


//LIMPANDO PILHA
void clear(tp_pilha *p){
    for(int i = 0; i<= p->topo;i++ ){
        p->item[i]=0;
    }
    p->topo=0;
    printf("\n|STACK ERASED|\n");
}

#endif

/**
 * @brief EXEMPLO MAIN PILHA
 * 
 *  inicializa_pilha(&pilha); 
 *                  -> Estamos passando o endereço de memoria do topo como parametro de *p e atribuindo o valor de -1 ao topo.
 *                  -> Como não existe nenhuma posição de vetor negativa, o progama entende que não existe nada para buscar na
 *                  -> pilha.
 * 
 * push(&pilha,10);
 * 
 * pop(&pilha,&e); 
 *                  -> Cria uma variavel de ponteiro para armazenar o endereço de uma nova variavel criada para armazenar o valor 
 *                  -> que foi retirado, e depois decrementa do topo.
 * 
 */