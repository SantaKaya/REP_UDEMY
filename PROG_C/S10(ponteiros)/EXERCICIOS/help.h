#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

#define pi 3.141592


////////////////////////////FUNÇÕES///////////////////////////

//VALORES MIN E MAX
int min_max(int array[],int *min,int*max){
    int tot = array[0];
    for(int i = 1; i<=tot;i++){
        if(array[i]>*max){
            *max = array[i];
        }else if(array[i]<*min){
            *min = array[i];
        }
    }
}





//MAIOR DE UM ARRAY
int maior1_array(int array[]){
    int tot = array[0],maior = 1;
    for(int i = 1;i<=tot;i++){
        if(array[i]>maior){
            maior = array[i];
        }
    }
    array[0]=maior;
}


//// FUNÇÃO SOMA DE 2 ARRAYS
int soma_2a(int array[],int array2[]){
    int tot = array[0];
    int tot2 = array2[0];

    if(tot == tot2){
        int array3[tot];
        for(int i = 0; i<tot;i++){
            array3[i]=*(array+1)+*(array+1);
            printf("array[i+1] = |%d|\t array2[i+1] = |%d|\n",*(array+1),*(array+1));
            printf("array3 [%d] = |%d|\n",i,array3[i]);
            array++;
            array2++;
            printf("\n");
        }
    }else if(tot!=tot2){
        return 0;
    }

    return 1;

}


//NUMEROS NEGATIVOS NUM ARRAY
int negativos(float *vet, int n){
    float soma = 0;
    for(int i = 0; i<n+1; i++){
        if(vet[i]>0.0){
            soma++;
            printf("SOMA = |%.0f|\n",soma);
        }
    }
    soma = soma -1;
    vet[0] = n - soma;
    printf("vet[0] = |%.0f|\n",vet[0]);
    return vet[0];
}



//MAIOR NUMERO E QUANTAS VEZES APARECE EM UM ARRAY
void maior_array(int *array,int *n){
    int maior = 1,soma = 0;
    for(int i = 1; i<*n+1;i++){
        if(array[i]>maior){
            maior = array[i];
        }
    }

    for(int j = 0; j<*n+1;j++){
        if(array[j]==maior){
            soma++;
        }
    }
    array[0]=maior;
    *n = soma;
}

// AREA E VOLUME DE UMA ESFERA
void calc_esfera(float r, float *area, float *volume){

    *area = 4*pi*(pow(r,2));
    *volume = 4.0/3.0*pi*(pow(r,3));
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