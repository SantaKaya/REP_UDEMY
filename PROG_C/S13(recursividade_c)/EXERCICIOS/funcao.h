#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>


//////////////////////////  FUNÇÕES //////////////////

int soma(int n){
    
    if(n==0){
        return 0;
    }else{
        return n + soma(n-1);
    }


    
}