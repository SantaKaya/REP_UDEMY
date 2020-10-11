#include <stdio.h>
#include <stdlib.h>

//rand()
// primeira vez : 41//45//51//26//15//47
// segunda vez : 41//45//51//26//15//47

// progama não rodando.

int main(){

    time_t t;

    //inicializar o gerador.
    srand((unsigned) size(&t));

    //Gerar 6 numeros entre 0 e 60
    for(int i = 0; i < 6; i++){
        printf("%d\n", rand() % 61); //rand() por padrão inicia em 0.
    }

    return 0;
}