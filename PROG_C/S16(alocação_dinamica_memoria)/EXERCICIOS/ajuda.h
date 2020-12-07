#include <stdio.h>
#include <stdlib.H>
#include <math.h>
#include <string.h>


////////////////////////////////////////// struct ////////////////////////////

typedef struct{
    int par;
    int im;
    int qtd_vetor;
}qtd_PI;




///////////////////////////////////////// FUNÇÃO ////////////////////////////








int *vetor_alocado2(int n){
    printf("\n[===== |ENTRANDO NA FUNCAO| =====]\n");
    int *s = NULL;
    s = calloc(n,sizeof(int));
    printf("\n\t*ALOCACAO = |%d| BYTES\n",sizeof(s));

    return s;
}



int *vetor_alocado(int n){
    int *s = NULL;
    s = malloc(n*sizeof(int));
    printf("ALOCACAO = |%d| BYTES\n",sizeof(s));

    for(int i = 0; i< n;i++){
        printf("VETOR[%d]\nDIGITE :\t",i);
        scanf("%d",&s[i]);
    }

    return s;
}



char *alocacao(int t){
    char *s = NULL;
    s = malloc(t*sizeof(char));
    return s;
}