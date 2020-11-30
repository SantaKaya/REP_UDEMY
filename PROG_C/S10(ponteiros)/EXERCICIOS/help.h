#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>



////////////////////////////FUNÇÕES///////////////////////////


//ORDENAÇÃO 3 VALORES
int ord_3val(int a,int b,int c){
    int *pa,*pb,*pc,auxa,auxb,auxc;

    pa = a;
    pb = b;
    pc = c;
    auxa = *pa;
    auxb = *pb;
    auxc = *pc;


    if(*pa<*pb && *pa<*pc){
        if(*pb<*pc){
            *pb = auxb;
            *pc = auxc;
        }else if(*pb>*pc){
            *pb = auxc;
            *pc = auxb;
        }
    }else if(*pb<*pa && *pb<*pc){
        if(*pa<*pc){
            *pa = auxb;
            *pb = auxa;
            *pc = auxc;
        }else if(*pa>*pc){
            *pa = auxb;
            *pb = auxc;
            *pc = auxa;
        }
    }else if(*pc<*pa && *pc <*pb){
        if(*pb<*pa){
            *pa = auxc;
            *pb = auxb;
            *pc = auxa;
        }else if(*pb>*pa){
            *pa = auxc;
            *pb = auxa;
            *pc = auxb;
        }
    }else if(*pa==*pb && *pb==*pc){
        return 1;
    }
    
}


//SOMA 2 NUMEROS COM ARMAZ. NA 1 VARIAVEL.
int soma_2(int a,int b){

    int *pa,soma,*pb;
    pa = a;//endereço
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