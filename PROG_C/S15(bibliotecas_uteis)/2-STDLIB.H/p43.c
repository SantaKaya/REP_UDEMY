#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

    char valor_s[5];
    double valor_d;

    strcpy(valor_s,"4.5");// eh uma string pois esta em "", mas o valor interno pode ser convertido.

    valor_d = atof(valor_s);

    printf("O valor eh %.2f", valor_d);




    return 0;
}