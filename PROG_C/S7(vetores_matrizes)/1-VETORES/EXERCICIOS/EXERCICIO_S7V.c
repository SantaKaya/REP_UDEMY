#include <stdio.h>
#include <stdlib.H>
#include <math.h>


///////////////////////QUESTOÕES VETORES////////////////////////////


//MAIN E09
int main(){

    int n[6],b[6],i=0;

    do{
        
        printf("Valor inteiro %d.\nDigite :\t",i+1);
        scanf("%d",&n[i]);
        if(n[i]%2==0){
            b[i]= n[i];
            i++;
        }

    }while(i<=6);



    for(int j = 0; j<=5; j++){
        printf("Valor PAR %d = |%d|\n",j+1,b[j]);
    }
    
    






    printf("\n");
    return 0;
}





/*MAIN E08
int main(){

    int n[6];

    for(int i = 0; i<=5; i++){
        printf("Valores Inteiros:\nDigite :\t");
        scanf("%d",&n[i]);
    }
    
    for(int j = 5; j>=0; j--){
        printf("Valores Inteiros (-1) = %d\n",n[j]);
    }

    printf("\n");
    return 0;
}
*/

/*MAIN E07
int main(){

    int a[10],M,p;

    for(int i = 0; i<=9; i++){
        printf("Valor %d do vetor.\nDigite :\t",i+1);
        scanf("%d",&a[i]);
    }
    M = 1;
    

    for(int j = 0; j<= 9; j++){
        if(a[j] >= M){
                M = a[j];
                p = j;
                printf("\nA[%d] = %d\n\n",j,a[j],j+1,a[j+1]);
                printf("M = |%d|\n",M);
            }
    }
    printf("\n\n***Maior = |%d|\n***POSICAO =  |%d|\n",M,p);
    return 0;
}
*/


/*MAIN E06
int main(){

    int a[10],M,m;

    for(int i = 0; i<=9; i++){
        printf("Valor %d do vetor.\nDigite :\t",i+1);
        scanf("%d",&a[i]);
    }
    M = 1;
    m = 1;

    for(int j = 0; j<= 9; j++){
        if(a[j] >= M){
                M = a[j];
                printf("\nA[%d] = %d\nA[%d] = |%d|\n",j,a[j],j+1,a[j+1]);
                printf("M1 = |%d|\n",M);
                printf("m1 = |%d|\n",m);
            }else if(a[j]<=m){
                m = a[j];
            }
    }
    printf("\nMaior = |%d|\nMenor = |%d|\n",M,m);

    return 0;
}
*/

/*MAIN E05
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
*/

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