#include <stdio.h>
#include <stdlib.H>
#include <math.h>
#include <string.h>
#include "pilha.h"


/////////////////////// FUNÇÕES EXERCICIO//////////////////

void M_m_med(tp_pilha *p, int tam){
    int array[tam];
    int Max = 1, Min = 999;
    float soma = 0;

    for(int i = 1; i<=tam;i++){
        pop(p,&array[i]);
        soma = soma + array[i];
        //printf("array[%d] = |%d|\n",i,array[i]);
    }

    for(int j = 1; j<=tam;j++){
        if(array[j]>Max){
            Max = array[j];
        }else if(array[j]<Min){
            Min = array[j];
        }
    }
    

    float med = soma/tam;
    
    printf("MAIOR = |%d|\tMENOR = |%d|\t MEDIA = |%.2f|\n",Max,Min,med);


}


void ordem_pilha(tp_pilha *p, int array[]){
    int tot = array[0];
    printf("tot = |%d|\n",tot);
    tp_item aux;

    int j;

    
    for(int i = 0; i<=tot;i++){
        for(j = 1;j<tot;j++){
            if(array[j]>array[j+1]){
                aux = array[j+1];
                array[j+1] = array[j];
                array[j]=aux;
            }
        }
        
    }
    
    for(int k = tot; k>=1;k--){
        push(p,array[k]);
    }
}
    
//CONTANDO PARENTESES
void cont_paranteses(tp_pilha *p, char string[]){
    int a = (strlen(string)-1 );
    tp_item aux;
    int cont = 0;

    for(int i = 0; i<a;i++){
       push(p,string[i]);
    }

    for(int j = 0;j<a;j++){
        pop(p,&aux);
        if(aux == '('){
            cont++;
            printf("\ncont- = |%d|\n",cont);
        }else if(aux == ')'){
            cont--;
            printf("\ncont- = |%d|\n",cont);
        }
    }

    if(cont == 0){
        printf("\nPARENTISACAO CORRETA!\n");
    }else{
        printf("\nPARENTISACAO INCORRETA!\n");
    }


}




void palindromo(tp_pilha *p,char string[]){
    int a = strlen(string);
    a = a -1;
    printf("a = |%d|\n",a);
    int cont = 0;
    int b = 0;
    tp_item aux;

    for(int i = 0; i<a;i++){
        push(p,string[i]);
        cont++; 
        
    }
    for(int j = 0; j<a;j++){
        pop(p,&aux);
        
        
        if(aux == string[j]){
            b++;
            
        }
    }
    if(b==a){
        printf("\n|%s|EH UM PALINDROMO!\n",string);
    }else{
        printf("\n|%s|NAO EH UM PALINDROMO!\n",string);
    }
}





/*EMBARALHANDO PALAVRAS
void embaralha(tp_pilha *p, char string[]){
    int a = strlen(string)-1;
    int aux = 0;
    int a2=0;
    
    
    int cont = 0;
    for(int i = 0; i<a;i++){
        
        if(string[i]!= '.'){
            
            if(string[i] == 32){

                for(int j = 0; j<=cont;j++){
                    
                    pop(p,&string[a2]);
                    
                    a2++;
                }
                aux = cont;
                cont = 0;
            }else{
                push(p,string[i]);
                cont++;
            }
        }else{
            for(int u = 0; u<=cont;u++){
               
                pop(p,&string[a2]);
                
                a2++;
            }
        }
        
    }
}
*/


//VERIFICAÇÃO SE STRING ESTA NA FORMA XY
void forma_xy(tp_pilha *p,char n[]){
    int tot = n[0];
    int a = tot/2;
    int cont=0;
    tp_item aux;
    for(int i = 1; i<=a;i++){
        push(p,n[i]);
    }

    for(int j = a+1; j<=tot;j++){
        pop(p,&aux);
        if(aux==n[j]){
            cont++;
        }else{
            printf("\n\nSTRING FORA DO FORMA XY\n\n");
        }
    }
    if(cont==tot/2){
        printf("\n\nSTRING NO FORMATO XY\n\n");
    }

}