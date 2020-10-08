/*
    PROTOTIPOS DE FUNÇÃO.
*/

#include <stdio.h>
#include <stdio.h>

//////////////////PROTOTIPOS DE FUNÇÃO////////////////////////////////////////

int soma(int num1, int num2);

void mensagem();

int main(){
    printf("\n");

    //declarando_variaveis
    int n1, n2, ret;

    //entrada_dados
    printf("Informe o primeiro numero:\n");
    scanf("%d",&n1);
    printf("Informe o segundo numero:\n");
    scanf("%d",&n2);
    


    //processamento_dados
    ret = soma(n1,n2);

    //saida_dados
    printf("A soma de %d com %d eh %d\n", n1, n2, ret);

    mensagem();


    printf("\n");
    return 0;
}

///////////////////////////////////////////FUNÇÕES/////////////////////////////

//soma
int soma(int num1, int num2){
    return num1 + num2;
}


//saudação
void mensagem(){
    printf("Bem-vindo!\n");
}