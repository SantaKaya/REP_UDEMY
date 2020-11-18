#include <stdio.h>
#include <stdlib.H>
#include <math.h>


///////////////////////QUESTOÕES VETORES////////////////////////////

//MAIN E02

int main(){

    int n[5];

    for(int i = 0; i<=5;i++){
        printf("Digite um valor:\t");
        scanf("%d",&n[i]);
        printf("n[%d]:|%d|\n",i,n[i]);

    }
    for (int j = 1; j <=6; j++){
        printf("VALOR %d = |%d|\n",j,n[j-1]);
        
    }
   
    return 0;
}



/*MAIN E01
int main(){

    int A[5];

    A[0] = 1;
    A[1] = 0;
    A[2] = 5;
    A[3] = -2;
    A[4] = -5;
    A[5] = 7;
    

    int a = A[0];
    int b = A[1];
    int c = A[5];
    

    int soma = a+b+c;

    printf("Soma -> |%d| + |%d| + |%d| = |%d|\n",a,b,c,soma);

    A[4] = 100;

    for(int i = 0; i<=5;i++){
        printf("A|%d| = |%d|\n",i,A[i]);
    }

    return 0;
}
*/