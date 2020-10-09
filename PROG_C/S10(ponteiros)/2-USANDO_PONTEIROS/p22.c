/*

*/

#include <stdio.h>
#include <stdio.h>

int main(){//inicio_main
    printf("\n");

    int n; //ddeclarando_variavel - variavel que guarda seu valor na memoria

    int *p; //declarando_variavel(ponteiro) - variavel que guarda um endereço de memoria.

    printf("informe um numero:\n");
    scanf("%d",&n);

    //inicializando_ponteiro
    p = &n; //ponteiro recebe valor informado pelo usuario


    printf("O numero informado foi : %d\n",n);

    printf("Endereco de memoria: %d\n",&n);

    printf("Endereco do ponteiro: %d\n",p);//%p hexadecimal
    

    //declarando_variaveis
    //entrada_dados
    //processamento_dados
    //saida_dados
    printf("\n");
    printf("\n");
    return 0;
}//fim_main