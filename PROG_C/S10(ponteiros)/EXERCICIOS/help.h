#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>



////////////////////////////FUNÇÕES///////////////////////////


//PASSANDO 2 VARIAVEIS
int passando_2_variaveis(int a, int b){

    int *pa,*pb,aux;

    pa = &a;
    pb = &b;
    aux = a;
    
    *pa = *pb;
    *pb = aux;

    printf("A = |%d|\nB = |%d|\n",a,b);
}