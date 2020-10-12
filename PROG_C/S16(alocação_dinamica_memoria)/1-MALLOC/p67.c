#include <stdio.h>
#include <stdlib.h>

/*
    int qtd; // variavel para perguntar ao usuairo o quanto ele quer cadastras
    int numeros[3];// 0..n-1 -> 0..2
*/

int main(){//inicio_main
    printf("\n*******************************************************\n");

    int qtd, *p;

    printf("Informe a quantidadee de elementos para o vetor:\n");
    scanf("%d", &qtd);


    p = (int*)malloc(qtd * sizeof(int)); // 3 x 4 = 12 bytes -> isso eh colocado no ponteiro e ele aloca todo o espaço necessario.
    // ponteiro ira receber um ponteiro do tipo int e o malloc(quantidade * tamanho em bytes de inteiro.)

    //checagem
    if(p){
/*
    for(int i = 0; i < qtd; i++){
        printf("Informe o valor para a posicao %d do vetor:\n",i);
        scanf("%d", &p[i]);
        printf("\n");
    }
    for( int i = 0 ; i < qtd; i++){
        printf(" *p[%d] = %d\n *Bytes_em_Memoria = %ld\n\n", i, p[i], sizeof(p[i]));
    }
*/
    printf("*Memoria Total p[] = %d bytes", qtd * sizeof(int));
    }else{
        printf("**Erro de Alocacao!**");
    }

    printf("\n*******************************************************\n");
    
    free(p);
    p = NULL;

    printf("\n");
    printf("\n");
    return 0;
}//fim_main

/******************************************************************************
    int qtd; // variavel para perguntar ao usuairo o quanto ele quer cadastras
    int numeros[3];// 0..n-1 -> 0..2
*/