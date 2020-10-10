#include <stdio.h>


int main(){

    FILE *arq;
    char nome[10], *resultado;

    arq = fopen("arquivo.txt","r");

    if(arq){
        while(!feof(arq)){//feof - file and of file , ira fazer o loop enquanto n chegar ao fim de arquivo
            resultado = fgets(nome, 10, arq);//fgets - file gets
            printf("Resultado: %d\n", resultado);
            if(resultado){
                printf("%s",nome);
            }
        } 
    }else{
        printf("Nao achei o arquivo.");
    }

    fclose(arq);
    return 0;
}