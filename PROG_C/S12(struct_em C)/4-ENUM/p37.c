#include <stdio.h>

enum dias_da_semana{

    segunda,
    terca,
    quarta,
    quinta,
    sexta,
    sabado,
    domingo
};

int main(){

    enum dias_da_semana d1, d2;

    int numeros[5];

    numeros[0] = 1;
    numeros[1] = 3;
    numeros[2] = 5;
    numeros[3] = 7;
    numeros[4] = 9;
    
    d1 = quinta;
    d2 = 14;

    if(d1 == d2){
        printf("Os dias sao iguais...\n");
    }else{
        printf("Os dias sao diferentes...\n");
    }

    printf("\nNumeros 0 = %d\n", numeros[0]);
    printf("Numeros 4 = %d\n", numeros[4]);
    printf("Numeros 14 = %d\n", numeros[14]);


    return 0;
}