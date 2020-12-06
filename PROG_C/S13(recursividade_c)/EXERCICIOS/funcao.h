#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>


//////////////////////////  FUNÇÕES //////////////////

//



/// imprmindo crescente
int ord_cres(int n){
    if(n==0){
        return 0;
    }else{
        return 1 + ord_cres(n-1);
    }
}

//MULTIPLICAÇÃO 2NUMEROS SOMA RECURSIVA
int multip_rec(n1,n2){
    if(n1==0 || n2==0){
        return 0;
    }else if(n2 == 1){
        return 1;
    }else{
        return n2 + multip_rec(n1-1,n2);
    }
}

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