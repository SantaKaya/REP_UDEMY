#include <stdio.h>
#include <stdlib.h>


int main(){

    div_t saida;

    saida = div(27, 4);
    printf("O Quociente de 27/4 eh %d\n", saida.quot);
    printf("O resto de 27/4 eh %d\n", saida.rem);

    saida = div(27, 3);
    printf("O Quociente de 27/3 eh %d\n", saida.quot);
    printf("O resto de 27/3 eh %d\n", saida.rem);



    return 0;
}