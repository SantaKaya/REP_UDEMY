#include <stdio.h>
#include <stdlib.H>
#include <math.h>
#include <string.h>
#include "pilha.h"


/////////////////////// FUNÇÕES EXERCICIO//////////////////

void forma_xy(tp_pilha *p,char n[]){
    int tot = n[0],cont=0;
    tp_item aux;
    for(int i = 1; i<=tot/2;i++){
        push(p,n[i]);
    }

    for(int j = tot/2; j<=tot;j++){
        pop(p,&aux);
        if(aux==n[j]){
            cont++;
        }else{
            printf("STRING FORA DO FORMA XY");
        }
    }
    if(cont==tot/2){
        printf("STRING NO FORMATO XY");
    }

}