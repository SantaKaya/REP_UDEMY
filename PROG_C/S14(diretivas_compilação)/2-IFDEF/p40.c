#include <stdio.h>

// constantes

/*#ifndef PI
    #define PI 3.14567 //constante
#endif*/

//ifdef - DIRETIVA DE COMPILAÇÃO

int main(){

    int valor =5; //variavel

    valor = 467;

    printf("O valor eh %d\n", valor);

    //printf("2 x PI vale %f\n", (2 * PI));

    #ifdef PI
        printf("O valor de PI eh %f\n",PI);
    #endif

    return 0;
}