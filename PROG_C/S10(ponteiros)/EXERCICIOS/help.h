#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>



////////////////////////////FUNÇÕES///////////////////////////

//SOMA 2 NUMEROS COM ARMAZ. NA 1 VARIAVEL.
int soma_2(int a,int b){

    int *pa,soma,*pb;
    pa = a;
    pb = b;

    soma = *pa + *pb;
    *pa = soma;
 
}


//SOMA DOS DOBROS
int soma_d(int a, int b){
    int *pa = &a,*pb = &b ;

    *pa = a*2;
    *pb = b*2;
    int soma = *pb + *pa;
    printf("DA = |%d|\tDB = |%d|\n",*pa,*pb);
    printf("SOMA DOS DOBROS = |%d|\n",soma);

}

//PASSANDO 2 VARIAVEIS MAIOR EM A E MENOR EM B
int pass_maior(int a, int b){
    int *pa,*pb,aux;

    pa = &a;
    pb = &b;
    aux = a;

    if(b>a){
        *pa = *pb;
        *pb = aux;
        printf("A = |%d|\nB = |%d|\n",a,b);
    }else{
        printf("A = |%d|\nB = |%d|\n",a,b);
    }
    
}

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