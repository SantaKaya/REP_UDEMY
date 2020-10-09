/*

*/

#include <stdio.h>
#include <stdio.h>

int main(){//inicio_main
    printf("\n");

    int valores[5] = {1, 2, 3, 4, 5}; //declaração_inicialização de um vetor
    
    for(int i = 0; i < 5; i++){
        printf("O valor %d tem %ld bytes!\n", valores[i], sizeof(valores[i]));
    }
    printf("O valores possui %ld bytes\n", sizeof(valores));

    //utilização do ponteiro do vetor[0]
    printf("valores[0] vale %d e endereco de memoria eh %p\n",valores[0], valores[0]);
    printf("*valores vale %d e endereco de memoria eh %p\n",*valores, *valores);
    
    // avançando as posições
    printf("*(valores + 1) vale %d e endereco de memoria eh %p\n",*(valores+1), *(valores+1));
    printf("*(valores + 2) vale %d e endereco de memoria eh %p\n",*(valores+2), *(valores+2));
    printf("*(valores + 3) vale %d e endereco de memoria eh %p\n",*(valores+3), *(valores+3));
    printf("*(valores + 4) vale %d e endereco de memoria eh %p\n",*(valores+4), *(valores+4));

    printf("\n");
    printf("\n");
    return 0;
}//fim_main