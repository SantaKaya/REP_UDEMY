// Estrutura de dados switch

/* Switch
    - Usamos o switch em casos onde tenhamos uma estrutura grande ou confusa de if/else/if..else

#pseudocodigo
    escola(variavel)
    Inicio
        caso valor1;
        caso valor2;
            instruções
        ..
        caso valorN;
    fim

# Linguagem C

    switch(variavel){
        case valor1:
            instruções
            break;
        
        case valor 2:
            instruções
            break;
        default:
            instruções;
    }

*/
#include <stdio.h>

int main(){//inicio_main

    //declaração_de_variaveis
    int valor;


    //entrada_dados
    printf("Digite um valor de 1 a 7:\n");
    scanf("%d",&valor);

    //processamento_dados
    switch(valor){
        case 1:
            printf("Domingo\n");
            break;
        case 2:
            printf("Segunda\n");
            break;
        case 3:
            printf("Terça\n");
            break;
        case 4:
            printf("Quarta\n");
        case 5:
            printf("Quinta\n");
            break;
        case 6:
            printf("Sexta\n");
            break;
        case 7:
            printf("Sabado\n");
            break;
        default:
            printf("Valor invalido!\n");
    
    }//fim_switch
}//fim_main