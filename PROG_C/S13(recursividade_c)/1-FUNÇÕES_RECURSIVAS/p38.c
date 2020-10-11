#include <stdio.h>
//Recursividade - É o ato de uma função chamar a si mesma.
/*
*   5 primeiros numeros da sequencia fibonacci.
*   1 1 2 3 5 
*/


int contador = 1;

int fib(int n){

    if(n==0){
         return 0;
    }

    if(n==1){
        return 1;
    }

    return fib(n - 1) + fib(n - 2);
}//fim_fib

int main(){

    int qtd;
    
    printf("Informe o tamanho da sequencia fibonacci:\n");
    scanf("%d",&qtd);
    printf("\n");
    for(int i = 0; i < qtd; i++){
        printf("%d\n", fib(i + 1));
    }

    return 0;
}