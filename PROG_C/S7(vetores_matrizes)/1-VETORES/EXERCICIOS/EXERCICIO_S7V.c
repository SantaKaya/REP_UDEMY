#include <stdio.h>
#include <stdlib.H>
#include <math.h>


///////////////////////QUESTOÕES VETORES////////////////////////////

//MAIN E05
int main(){

    int a[10],b[10],p=0;

    for(int i = 0; i<=9; i++){
        printf("Valor %d do vetor.\nDigite :\t",i);
        scanf("%d",&a[i]);

        if(a[i]%2==0){
            p++;
            b[i] = a[i];
        }else{
            b[i] = 0;
        }
    }

    printf("\nQTD_NUM_PAR = |%d|\n\n",p);
    printf("\n***NUMEROS***\n");

    for(int j = 0; j<=9; j++){
        if(b[j]>0){
            printf("Par %d = |%d|\n",j+1,b[j]);
        }
    }

    return 0;
}


/*MAIN E04
int main(){

    int num[8],x,y;

    for(int i = 0; i<=7;i++){
        printf("Valor %d do veto =\t",i+1);
        scanf("%d",&num[i]);
    }

    printf("Digite duas posições:\n");
    scanf("%d %d",&x,&y);

    int soma = num[x-1]+num[y-1];
    printf("Soma %d + %d = |%d|",x,y,soma);
    return 0;
}
*/


/*MAIN E03
int main(){

    float a[10],b[10],c,d;
    
    
    for(int i = 0; i<=9; i++){
        
        printf("Digite um valor:\t");
        scanf("%f",&a[i]);

        c = a[i]*a[i];
        b[i] = c;
    }

    for(int j = 1; j<=10; j++){
        printf("\n\nA[%d] = |%.1f|\tB[%d] = |%.1f| \n",j,a[j-1],j,b[j-1]);
    }

    printf("A[9] = %.0f",a[9]);
    return 0;
}
*/

/*MAIN E02

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
*/


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