#include <stdio.h>
#include <stdlib.H>
#include <math.h>
#include <string.h>
#include "pilha.h"


/////////////////////// FUNÇÕES EXERCICIO//////////////////

void forma_xy(tp_pilha *p,char n[]){
    int tot = n[0];
    int a = tot/2;
    int cont=0;
    tp_item aux;
    for(int i = 1; i<=a;i++){
        push(p,n[i]);
    }

    for(int j = a+1; j<=tot;j++){
        pop(p,&aux);
        if(aux==n[j]){
            cont++;
        }else{
            printf("\n\nSTRING FORA DO FORMA XY\n\n");
        }
    }
    if(cont==tot/2){
        printf("\n\nSTRING NO FORMATO XY\n\n");
    }

}