#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>


//////////////////////////  FUNÇÕES //////////////////

//n-esimo fiboo

int fibbo(int n){
    if(n==0){
        return 0;
    }else if(n==1){
        return 1;
    }else{
        return fibbo(n-1) + fibbo(n-2);
    }
}


//K^N
int exponencial_kn(int k, int n){
    if(k==0){
        return 0;
    }else if(n == 0){
        return 1;
    }else{
        return k * exponencial_kn(k,n-1);
    }
}


//SOMA N CUBOS
int soma_n(int n){
    if(n==0){
        return 0;
    }else if(n==1){
        return 1;
    }else{
        return pow(n,3) + soma_n(n-1);
    }
}




//fatorial recursivo
int fat(int n){
    if(n==0){
        return 0;
    }else if(n==1){
        return 1;
    }else{
        return n * fat(n-1);
    }
}

// soma recursiva
int soma(int n){
    
    if(n==0){
        return 0;
    }else{
        return n + soma(n-1);
    }
}