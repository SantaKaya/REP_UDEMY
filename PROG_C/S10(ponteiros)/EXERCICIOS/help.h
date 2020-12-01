#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

#define pi 3.141592


////////////////////////////FUNÇÕES///////////////////////////

//MAIOR NUMERO E QUANTAS VEZES APARECE EM UM ARRAY
void maior_array(int *array,int *n){
    int maior = 1,soma = 0;
    for(int i = 1; i<*n+1;i++){
        if(array[i]>maior){
            printf("1array[%d] = |%d|>|%d|\n",i,array[i],maior);
            maior = array[i];
            printf("MAIOR = |%d|\n",maior);
        }
    }

    for(int j = 0; j<*n+1;j++){
        if(array[j]==maior){
            printf("2array[%d] = |%d|>|%d|\n",j,array[j],maior);
            soma++;
            printf("SOMA = |%d|\n",soma);
        }
    }
    array[0]=maior;
    *n = soma;
    printf("arra[0] = |%d|\n",array[0]);
    printf("&n = |%d|\n",*n);
}




// AREA E VOLUME DE UMA ESFERA
void calc_esfera(float r, float *area, float *volume){

    *area = 4*pi*(pow(r,2));
    *volume = 1.33*pi*(pow(r,3));
}

//PARTE INTEIRA E FRACIONARIA DE UM NUMERO
void frac(float num, int *inteiro, float *frac){
    *inteiro = (int)num;
    *frac = num - *inteiro;
}


//IMPRINDO UM ARRAY
void printArray(int vet[]){
	int i,tot=vet[0];
    printf("tot = |%d|\n",tot);
	for(i=0;i<tot;i++){
		printf("|%d|\n", *(vet+1));
		vet++;
	}
}

//PREENCHENDO ELEMENTOS DO ARRAY
int preenc_array(int *array, int val){
    
    int a = val;

    printf("DIGITE A VARIAVEL:\t");
    scanf("%d",&val);

    for(int i = 0; (*(array+a))!=val;i++){
        array[i] = val;
    }
}

//FUNÇÃO INTERCEÇÃO
int verifica(char *string1, char *string2){
    int aux = 0;
    for(int i = 0,j=0;(*(string1+i))!='\0';i++){

        while(*(string1+i)==(*(string2+j))){
            i++;
            j++;

            if((*(string2+j))=='\n' || (*(string2 +j))=='\0'){
                return 1;
            }else if((*(string1+i))!=(*(string2+j))){
                aux = 0;
            }
        }
    }
    return aux;
}

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