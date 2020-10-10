#include <stdio.h>


int main(){

    FILE *arq;
    char fruta[10], resultado;
     

    arq = fopen("frutas.txt", "w");//w = write | OVERWIRTE IF FILE EXIST

    if(arq){
        printf("Informe uma fruta, ou 0 para sair: \n");
        fgets(fruta, 10, stdin);//STDDIN = STANDARD INPUT
        while(fruta[0] != '0'){

            fputs(fruta,arq);//coloca a fruta no arquivo.

            printf("Informe uma fruta, ou 0 para sair: \n");
            fgets(fruta, 10, stdin);
        }
    }else{
        printf("\nArquivo não criado.\n");
    }

    

    fclose(arq);
    return 0;
}