#include <stdio.h>

int main(){

    FILE *arq;
    char c;

    arq = fopen("arquivo.txt","r");
    
    if(arq){//sempre importante fazer essa verificação.
        while((c = getc(arq)) != EOF){// EOF = AND OF FILE
            printf("%c",c);
        }
    }else{
        printf("Nao achei o arquivo!");
    }
    
    fclose(arq);
    return 0;
}