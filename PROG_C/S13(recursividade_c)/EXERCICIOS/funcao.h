#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>


//////////////////////////  FUNÇÕES //////////////////

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