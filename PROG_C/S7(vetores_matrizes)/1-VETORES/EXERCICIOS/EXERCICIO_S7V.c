#include <stdio.h>
#include <stdlib.H>
#include <math.h>


///////////////////////QUESTOÕES VETORES////////////////////////////

//MAIN E01
int main(){

    int A[5];

    A[0] = 1;
    A[1] = 0;
    A[2] = 5;
    A[3] = -2;
    A[4] = -5;
    A[5] = 7;

    int soma = A[0]+A[1]+A[5];

    printf("Soma -> |%d| + |%d| + |%d| = |%d|\n",A[0],A[1],A[5],soma);

    A[4] = 100;

    for(int i = 0; i<=A[5];i++){
        printf("A|%d| = |%d|\n",i,A[i]);
    }

    return 0;
}
