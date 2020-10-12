/*
    //localtime()
   
*/

#include <stdio.h>
#include <time.h>


int main(){//inicio_main
    printf("\n*******************************************************\n");

    time_t tempobruto;
    struct tm *info; //tm = time (tipos de dados).

    time(&tempobruto);

    info = localtime(&tempobruto);
    printf("Data e hora local %s",asctime(info));

    printf("\n*******************************************************\n");
    //declarando_variaveis
    //entrada_dados
    //processamento_dados
    //saida_dados
    printf("\n");
    printf("\n");
    return 0;
}//fim_main