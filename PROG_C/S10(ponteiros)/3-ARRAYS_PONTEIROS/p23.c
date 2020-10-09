/*

*/

#include <stdio.h>
#include <stdio.h>

int main(){//inicio_main
    printf("\n");

                
    int valores[5];

    //recebendo resultado
    for (int i = 0; i < 5;i++){//inicio_for1
        printf("Informe o valor %d/5 valor: ",(i+1));
        scanf("%d", &valores[i]);
    }//fim_for1

    printf("Os valores informados foram: \n");

    //imprimindo resultados
     for (int i = 0; i < 5;i++){//inicio_for2
        printf("%d\n\n", valores[i]);
    
    }//fim_for2


    printf("Endereco de memoria(0): %p\n valor(0) : %d\n",&valores[0], valores[0]);
    printf("Endereco de memoria(vetor): %p\n valor(0) : %d\n\n",valores, valores[0]);

    printf("Endereco de memoria(1): %p\n valor(1) : %d\n",&valores[1], valores[1]);
    printf("Endereco de memoria(vetor): %p\n valor(1) : %d",valores, valores[1]);

    printf("\n");
    printf("\n");
    return 0;
}//fim_main