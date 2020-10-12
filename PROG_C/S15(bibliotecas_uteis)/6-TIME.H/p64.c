#include <stdio.h>
#include <time.h>


int main(){
    printf("\n*******************************************************\n");


    long int inicio_t, fim_t, total_t;

    inicio_t = clock();
    //printf("Iniciando o progama, inicio_t = %ld\n", inicio_t);

    printf("*Realizar um loop grande em inicio_t = %ld\n", inicio_t);
    for(int i = 0; i <= 100000000; i++){}// criado so para o ir ser incrementado.

    fim_t = clock();
    printf("*Fim do loop grande, fim_t = %ld\n", fim_t);

    total_t = ((double)fim_t - (double)inicio_t)/ (double)CLOCKS_PER_SEC;// CONSTANTE QUE FAZ PARTE DA BIBLIOTECA TIME

    printf("*CLOCKS POR SEGUNDO = %ld\n", CLOCKS_PER_SEC);

    printf("*Tempo total usado pela CPU = %lf\n", (double)total_t);
    printf("*Finalizando o progama");

    printf("\n*******************************************************\n");
    return 0;
}



