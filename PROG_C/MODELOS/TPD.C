#include <stdio.h>

int main(){
    printf("\n");

    int numero = 42;
    float nota = 7.9;
    char letra = 'd';
    double outraNota = 19.4;


    printf("TIPO DE DADO :'int' | VALOR =  %d | TAMANHO MEMORIA : %ld bytes.\n",numero,sizeof(numero));
    printf("TIPO DE DADO :'float' | VALOR = %.2f | TAMANHO MEMORIA : %ld bytes.\n",nota,sizeof(nota));
    printf("TIPO DE DADO : 'char' | VALOR = %c | TAMANHO MEMORIA : %ld bytes.\n",letra, sizeof(letra));
    printf("TIPO DE DADO : 'double'| VALOR =  %.2lf | TAMANHO MEMORIA : %ld bytes.\n",outraNota, sizeof(outraNota));

    printf("\n");
    return 0;
}