#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// codigo trazendo lixo, pq?
int main(){

    char valor_s[500];
    double valor_li;

    valor_li = 0;

    strcpy(valor_s,"45464546544685");// eh uma string pois esta em "", mas o valor interno pode ser convertido.

    valor_li = atol(valor_s);

    printf("O valor eh %lf", valor_li);
 
   return 0;
}