#include <stdio.h>

int main(){

    //declarando
    FILE *arq;
    int num, soma, resultado;

    soma = 0;

    //abrir o arquivo
    arq = fopen("arquivo.txt","r");

    //fazer a verificação se vai conseguir abrir
    if(arq){
        //verdadeiro, precisamos percorrer o arquivo
        while(!feof(arq)){
            resultado = fscanf(arq,"%d",&num);
            //ver o que a variavel resultado esta recebendo.
            printf("Resultado: %d\n", resultado);

            if(resultado == 1){
                soma = soma + num;
            }
        } 
    }else{
        printf("FNF");
    }
    printf("\n\n\n\n A soma dos numeros encontrados eh: %d\n\n\n\n",soma);

    fclose(arq);
    return 0;
}
////LEGENDAS///
/*
//declarando
int num, resultado, soma = 0;
num = pega cada um dos numeros;
resultado = 
soma = efetuar a soma

while(!feof(arq)){
    - While !file and of file de arq faça...
    fscanf(arq,"%d",&num);
        - Lei arq, receba um inteiro e guarde no endedrçeo de memoria de num(variavel declarada).
}


*/
