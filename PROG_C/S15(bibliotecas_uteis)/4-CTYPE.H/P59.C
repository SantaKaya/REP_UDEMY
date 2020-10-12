#include <stdio.h>
#include <ctype.h>

int main(){
    printf("\n");

    char teste = 'H';

    if(isalnum(teste)){
        printf("EH alfanumerico\n");
    }else{
        printf("Nao eh alfanumerico.\n");
    }

    if(isalpha(teste)){
        printf("EH alfabetico\n");
    }else{
        printf("Nao eh alfabetico.\n");
    }

    if(isdigit(teste)){
        printf("EH digito\n");
    }else{
        printf("Não eh digito.\n");
    }

    if(islower(teste)){
        printf("EH minusculo\n");
    }else{
        printf("Não eh minusculo.\n");
    }

    if(ispunct(teste)){
        printf("EH pontuacao\n");
    }else{
        printf("Não eh pontuacao.\n");
    }

    if(isspace(teste)){
        printf("EH espaço\n");
    }else{
        printf("Não eh espaço.\n");
    }

    if(isupper(teste)){
        printf("EH maiuscula\n");
    }else{
        printf("Não eh maisucula.\n");
    }

    printf("A letra %c em maisculo é %c\n", teste, toupper(teste));
    printf("A letra %c em minuscula é %c\n", teste, tolower(teste));

    printf("\n");
    printf("\n");
    return 0;
}