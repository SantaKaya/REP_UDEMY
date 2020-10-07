// Aulas sobre variaveis
#include <stdio.h>//biblioteca de i/o padrão.

int main(){//A chave delimita um bloco de codigo.

/*============================================Entrada de Dados=======================================================================*/
    //Declarando variaveis [*OBS1*]
    int idade; // (int = inteiro = tdd) (idade = nome da variavel)
    
    //Função para escrever algo na saida padrão(console).
    printf("Qual sua idade?\n");//O ; finaliza um comando

    // Função para receber dados da entrada padrão(teclado)
    scanf("%d",&idade);

/*============================================Processamento de Dados===============================================================*/
/*============================================Saida de Dados=======================================================================*/

    
    printf("\nA sua idade eh %d",idade);

    return 0;
}//FB->main



/*              OBSERVAÇÃO01

*********Declarando e inicializando variaveis********

int idade = 0;

*/