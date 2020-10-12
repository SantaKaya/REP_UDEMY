/*
    //time()
    // https:
*/

#include <stdio.h>
#include <time.h>


int main(){//inicio_main
    printf("\n*******************************************************\n");

    time_t segundos;

    segundos = time(NULL); //recebe o tempo desda hora 0(era unix) ate agora.   
    printf("Horas desde 1 de janeiro de 1970 = %ld\n", segundos / 3600 );



    printf("\n*******************************************************\n");
    //declarando_variaveis
    //entrada_dados
    //processamento_dados
    //saida_dados
    printf("\n");
    printf("\n");
    return 0;
}//fim_main