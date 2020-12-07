#include <stdio.h>
#include <stdlib.H>
#include <math.h>
#include "ajuda.h"
#include <string.h>



///////////////////// QUESTOES /////////////////

//MAIN E01

int main(){

    int qtd, *p;

    printf("QUANTIDADE DE ELEMENTOS\nDIGITE :\t");
    scanf("%d",&qtd);

    p = (int*)malloc(qtd*sizeof(int));
    
    if(p){
        for(int i = 0; i<qtd;i++){
            printf("Informe o valor para a posicao %d do vetor:\t",i);
            scanf("%d",&p[i]);
            printf("\n");
        }
    }

    for (int j = 0; j < qtd; j++){
        printf("P[%d] = |%d|\t TM = |%d| BYTES\n",j,p[j],sizeof(p[j]));
    }
    printf("MEMORIA TOTAL p[]= |%ld| BYTES\n",qtd*sizeof(int));

    free(p);
    p=NULL;
    return 0;
}