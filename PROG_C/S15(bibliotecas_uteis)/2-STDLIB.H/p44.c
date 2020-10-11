#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

    char valor_s[5];
    int valor_i;

    strcpy(valor_s,"4");// eh uma string pois esta em "", mas o valor interno pode ser convertido.

    valor_i = atoi(valor_s);

    printf("O valor eh %.d", valor_i);
 
   return 0;
}