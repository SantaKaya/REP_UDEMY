#include <stdio.h>
#include <stdlib.h>
#include <time.h>
  

int main(){//inicio_main
    printf("\n*******************************************************\n");

    int qtd, *p;

    printf("Quantidade de elementos para o vetor:\n");
    scanf("%d",&qtd);

    //alocação de espaço do tipo int
    p = (int*)malloc(qtd * sizeof(int)); 


    if(p){//ini_if1
        
        printf("\nTAMANHO MEMORIA p[%d] = %ld bytes.\n\n", qtd, qtd * sizeof(int));
            for(int i = 0; i < qtd; i++){
                printf("Conteudo de p[%d] = %d\n",i,p[i]);
                printf("Endereco de p[%d] = %d\n",i,&p[i]);
                printf("TM p[%d] = %d\n\n",i,sizeof(p[i]));
            }
        
        printf("Quantidade de elementos para o vetor:\n");
        scanf("%d",&qtd);

        p = (int*)realloc(p , qtd * sizeof(int)); // 2 parametros, o 1 eh o proprio ponteiro.

        //verificação
        if(p){//ini_if2
            printf("\nTAMANHO MEMORIA p[%d] = %ld bytes.\n\n", qtd, qtd * sizeof(int));
                for(int i = 0; i < qtd; i++){
                printf("Conteudo de p[%d] = %d\n",i,p[i]);
                    printf("Endereco de p[%d] = %d\n",i,&p[i]);
                printf("TM p[%d] = %d\n\n",i,sizeof(p[i]));
                }

        }else{
            printf("Erro: Memoria insuficiente!!!");
        }//fim_if2
    
    }else{
        printf("Erro: Memoria insuficiente!!!");
    }//fim_if1

    printf("\n*******************************************************\n");
    //declarando_variaveis
    //entrada_dados
    //processamento_dados
    //saida_dados
    printf("\n");
    printf("\n");
    return 0;
}//fim_main
/********************************ANOTAÇÕES*****************************************
//declarando_variaveis
//entrada_dados
//processamento_dados
//saida_dados

        printf("\nTAMANHO MEMORIA p[%d] = %ld bytes.\n\n", qtd, qtd * sizeof(int));
        for(int i = 0; i < qtd; i++){
        printf("Conteudo de p[%d] = %d\n",i,p[i]);
        printf("Endereco de p[%d] = %d\n",i,&p[i]);
        printf("TM p[%d] = %d\n\n",i,sizeof(p[i]));

*/
