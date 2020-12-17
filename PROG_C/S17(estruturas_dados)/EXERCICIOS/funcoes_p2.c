#include <stdio.h>
#include <stdlib.H>
#include <math.h>
#include <string.h>
#include "FILA.h"
#include "pilha.h"

/////////////////////// FUNÇÕES EXERCICIO//////////////////

void valores_par(tp_fila *f){
    tp_item e;
    int a = tamanho_fila1(*f);
    for(int i = 0; i<a;i++){
        remove_fila(f,&e);
        if(e%2==0){
            printf("\nVALOR PAR |%d|\n",e);
            insere_fila(f,e);
        }else{
            insere_fila(f,e);
        }
    }
}


void valores_impar(tp_fila *f){
    tp_item e;
    int a = tamanho_fila1(*f);
    for(int i = 0; i<a;i++){
        remove_fila(f,&e);
        if(e%2!=0){
            printf("\nVALOR IMPAR |%d|\n",e);
            insere_fila(f,e);
        }else{
            insere_fila(f,e);
        }
    }
}



void f3_f2f1_cres(tp_fila *f1,tp_fila *f2, tp_fila *f3){
    int a = tamanho_fila1(*f1);
    int b = tamanho_fila1(*f2);
    tp_item aux;
    int array[a+b];

    int c = 0;

    while(!fila_vazia(f1)){
        remove_fila(f1,&array[c]);
        c++;
    }
    while(!fila_vazia(f2)){
        remove_fila(f2,&array[c]);
        c++;
    }

    printf("ARRAY :\t");
    for(int t = 0; t<a+b; t++){
        printf("|%d|",array[t]);
    }

    for(int i = 0; i<a+b;i++){
        for(int j = 0;j<(a+b)-1;j++){
            if(array[j]>array[j+1]){
                aux = array[j+1];
                array[j+1] = array[j];
                array[j]=aux;
            }
        }
        
    }

    for(int v = 0; v<a+b; v++){
        insere_fila(f3,array[v]);
    }

}





void rem_neg(tp_fila *f){
    int a = tamanho_fila1(*f);
    tp_item e;

    for(int i = 0; i<a;i++){
        remove_fila(f,&e);
        if(e>0){
            insere_fila(f,e);
        }else{
            insere_fila(f,0);
        }
    }
}




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
