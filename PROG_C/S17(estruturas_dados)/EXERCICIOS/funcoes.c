#include <stdio.h>
#include <stdlib.H>
#include <math.h>
#include <string.h>
#include "pilha.h"


/////////////////////// FUNÇÕES EXERCICIO//////////////////

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





//EMBARALHANDO PALAVRAS
void embaralha(tp_pilha *p, char string[]){
    int a = strlen(string);
    int aux = 0;
    int a2=0;
    a = a -1;
    printf("a = |%d|\n",a);
    int cont = 0;
    for(int i = 0; i<a;i++){
        printf("i = |%d|\n",i);
        if(string[i]!= '.'){
            printf("cont = |%d|\n",cont);
            if(string[i] == 32){

                for(int j = 0; j<=cont;j++){
                    printf("2cont = |%d|\n",cont);
                    pop(p,&string[a2]);
                    printf("string[%d] = |%c|\n",a2,string[a2]);
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
                printf("3cont = |%d|\n",cont);
                pop(p,&string[a2]);
                printf("1string[%d] = |%c|\n",a2,string[a2]);
                a2++;
            }
        }
        
    }
}



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