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


    for(int i  = 0; i < 5; i++){
        printf("Endereco de memoria(%d): %p\n valor(%d) : %d\n",i, &valores[i], i, valores[i]);
        printf("Endereco de memoria(vetor): %p\n valor(%d) : %d\n\n",valores, i, valores[i]);
    
    }
    
    printf("\n");
    printf("\n");
    return 0;
}//fim_main