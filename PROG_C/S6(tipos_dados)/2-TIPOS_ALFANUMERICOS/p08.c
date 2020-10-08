/*
    Tipos de Dados

    - Tipos Alfanumericos
        - Caracteres;
            's';
        - Strings
            "auihsduiahsduasd asddas asdasd asdd";
    * Na linguagem C, não existe o tipo ded dados String.

*/

#include <stdio.h>
#include <stdio.h>

int main(){

    //declarando_variaveis
    char opcao;

    //entrada_dados
    printf("Informe uma opcao:\n");
    printf("a - Saldo da conta.\n");
    printf("b - Extrato da conta.\n");
    printf("c - Limite da conta.\n");
    
    scanf("%c",&opcao);
    //processamento_dados
    if(opcao == 'a'){//inicio_if1
        printf("Seu saldo eh....");
    }else if (opcao == 'b'){//inicio_if2
            printf("Extrato da conta eh...");
        }else if(opcao == 'c'){//inicio_if3
                printf("Seu limite eh..");
        }else{
            printf("Opcao desconhecida..");
        }

    //saida_dados

    return 0;
}