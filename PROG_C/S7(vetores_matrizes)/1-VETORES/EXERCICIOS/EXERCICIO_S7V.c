#include <stdio.h>
#include <stdlib.H>
#include <math.h>


///////////////////////QUESTOÕES VETORES////////////////////////////

//MAIN E23
int main(){

    float a[5],b[5],p[5],soma= 0;

    for(int i = 0; i<=4; i++){
        printf("VETOR A\nDIGITE :\t");
        scanf("%f",&a[i]);
    }
    for(int m = 0; m<=4;m++){
        printf("VETOR B\nDIGITE :\t");
        scanf("%f",&b[m]);
    }

    
    for(int c = 0; c<= 4;c++){
        p[c] = a[c]*b[c];
        soma = soma + p[c];
    }
    
    for(int k = 0; k<=4; k++){
        printf("VETOR A[%d] = |%.2f|\n",k+1,a[k]);
        
    }
    for(int l = 0; l<=4;l++){
        printf("VETOR B[%d] = |%.2f|\n",l+1,b[l]);
        
    }
    for(int v = 0; v<=4;v++){
        printf("VETOR PRODUTO [%d] = |%.2f|\n",v+1,p[v]);
    }





    return 0;
}




/*MAIN E22
int main(){

    int a[10],b[10],c[10];

    for(int i = 1; i<=10; i++){
        printf("VETOR A\nDIGITE :\t");
        scanf("%d",&a[i]);
    }
    for(int m = 1; m<=10;m++){
        printf("VETOR B\nDIGITE :\t");
        scanf("%d",&b[m]);
    }

    for(int j = 1; j<=10; j++){

        if(j%2==0){
            c[j]=a[j];
        }else{
            c[j]=b[j];
        }

    }
    
    for(int k = 1; k<=10; k++){
        printf("VETOR A[%d] = |%d|\n",k,a[k]);
        
    }
    for(int p = 1; p<=10;p++){
        printf("VETOR B[%d] = |%d|\n",p,b[p]);
        
    }
    for(int v = 1; v<=10;v++){
        printf("VETOR C[%d] = |%d|\n",v,c[v]);
        
    }

    return 0;
}
*/

/*MAIN E21
int main(){

    int a[10],b[10],c[10];

    for(int i = 0; i<=9; i++){
        printf("VETOR A\nDIGITE :\t");
        scanf("%d",&a[i]);
    }
    for(int m = 0; m<=9;m++){
        printf("VETOR B\nDIGITE :\t");
        scanf("%d",&b[m]);
    }
    
    for(int j = 0; j<=9; j++){
        c[j] = a[j] - b[j];
        printf("VETOR A = |%d|\n",a[j]);
        printf("VETOR B = |%d|\n",b[j]);
        printf("VETOR C = |%d|\n",c[j]);
    }
    return 0;
}
*/

/*MAIN E20
int main(){

    int n1[10],n2[10],a,c=0;

    for(int i = 0; i<= 9; i++){

        printf("VALOR VETOR |%d|\nDIGITE :\t",i+1);
        scanf("%d",&a);

        if(a>=0 || a<=50){
            n1[i]=a;
        }else{
            printf("Numero fora do intervalo!\n");
        }

        if(a%2!=0){
            n2[c]=a;
            c++;
            printf("C = |%d|\n",c);
        }
        //printf("V1 |%d| = |%d|\n",i+1,n1[i]);
    }

    //printf("C = |%d|\n",c);

    a = c-1;

    for(int j = 0; j<=a; j++){
        //printf("V1 |%d| = |%d|\n",j+1,n1[j]);
        printf("V2 IMPARES -  |%d| = |%d|\n",j,n2[j]);
    }
    return 0;
}
*/

/*MAIN E19
int main(){
    float num[50];

    for(int i=0; i<=49;i++){
        num[i] = (i+(5*i))%(i+1);
    }

    for(int j=0; j<=49;j++){
        printf("Vetor |%d| = |%.2f|\n",j,num[j]);
    }

    return 0;
}
*/



/*MAIN E18
int main(){

    int num[10],x;

    for(int i = 0; i<=9;i++){
        printf("Vetor |%d|\nDIGITE :\t",i+1);
        scanf("%d",&num[i]);
    }

    printf("\nVALOR X DIGITE :\t");
    scanf("%d",&x);

    for(int j = 0; j<=9;j++){
        if(num[j]%x==0){
            printf("MULTIPLO |%d| = |%d|\n",x,num[j]);
        }
    }
    return 0;
}
*/

/*MAIN E17
int main(){

    int num[10];

    for(int i = 0; i<=9; i++){
        printf("\nVALOR |%d|\nDIGITE:\t",i+1);
        scanf("%d",&num[i]);
        
    }

    for(int k = 0; k<=9; k++){
        printf("\nVETOR |%d|\n\n",num[k]);
    }
    
    
    printf("***SAIDA***\n");
    for(int j = 0; j<=9;j++){
        if(num[j]<0){
            num[j]=0;
        }
        printf("VETOR = |%d|\n",num[j]);
    }
    return 0;
}
*/

/*MAIN E16
int main(){

    float num[5];
    int cod;

    for(int i = 0; i<=4; i++){
        printf("\nVALOR |%d|\nDIGITE:\t",i+1);
        scanf("%f",&num[i]);
    }

    printf("\nCODIGO|Digite:\t");
    scanf("%d",&cod);
    if(cod!=1 && cod!=2 && cod !=0){
        printf("CODIGO INVALIDO!\n");
    }
    switch (cod){
        case 1:
            for(int j = 0; j<=4;j++){
                printf("VETOR = |%.1f|\n",num[j]);
            }
        break;

        case 2:
            for(int j = 4; j>=0;j--){
                printf("VETOR INVERSO = |%.1f|\n",num[j]);
            }
            break;
    
        case 0:
            printf("Progama FINALIZADO!\n");
        break;
        }

    return 0;
}
*/


/*MAIN E15
int main(){

    int num[20],b[20];

    for(int i = 0; i<=19; i++){
        printf("\nVALOR |%d|\nDIGITE:\t",i+1);
        scanf("%d",&num[i]);
        b[i] = num[i];
    }
    for(int j = 0; j<=19; j++){
        for(int k = 0; k<=19; k++){

            if(num[j]==num[k] && j!=k){
                b[j]=0;
                b[k]=0;
                
                
            }
        }
        if(b[j]>0){
            printf("\nVETOR= |%d|\n",b[j]);
        }    
    }
    return 0;
}
*/

/*MAIN E14
int main(){

    int num[10],b[10],a=0,c;

    for(int i = 0; i<=9; i++){
        printf("\nVALOR |%d|\nDIGITE:\t",i+1);
        scanf("%d",&num[i]);
        b[i] = num[i];
    }


    for(int j = 0; j<=9; j++){
        for(int k = 0; k<=9; k++){
            c = 0;

            if(num[j]==num[k] && j!=k){
                for(int w = 0; w<=9; w++){
                    if(b[w]==num[j]){
                        c = 1;
                    }
                    if(c == 0){
                        b[a]=num[j];
                        a++;
                    }
                }
            }
        }
    }

    for(int m = 0; m<a ;m++){
        for(int n = 0; n<=m;n++){
            if(b[m]==b[n]&& m!=n){
                b[m]=0;
            }
        }
        if(b[m]>0){
            printf("VALOR IGUAL - |%d|\n",b[m]);
        }
    }
    printf("\n");
    
    return 0;
}
*/


/*MAIN E13
int main(){

    int n[5],M=1,m=1,p_M,p_m;

    for(int i = 0; i<=4; i++){
        printf("VALOR %d.\nDIGITE :\t",i+1);
        scanf("%d",&n[i]);

        if(n[i]>M){
            M=n[i];
            p_M = i;
        }else if(n[i]<=m){
            m = n[i];
            p_m = i;
        }

    }
    printf("MAIOR[%d] = |%d|\nMENOR[%d] = |%d|\n",p_M,M,p_m,m);

    return 0;
}
*/

/*MAIN E12
int main(){

    int n[5],M=1,m=1;

    for(int i = 0; i<=4; i++){
        printf("VALOR %d.\nDIGITE :\t",i+1);
        scanf("%d",&n[i]);

        if(n[i]>M){
            M=n[i];
        }else if(n[i]<=m){
            m=n[i];
        }

    }

    float soma = 0;

    for(int j = 0; j <= 4; j++){
        soma = soma + n[j];
    }

    float med = soma / 5;
    printf("MAIOR = |%d|\nMENOR = |%d|\nMEDIA = |%.2f|",M,m,med);
    return 0;
}
*/


/*MAIN E11
int main(){

    float a[10],neg = 0,pos=0;
    int p=0;

    for(int i = 0; i<=9; i++){
        printf("Valor Real |%d|\nDigite :\t",i+1);
        scanf("%f",&a[i]);

        if(a[i]<0){
            neg = neg + a[i];
            p++;
        }else if(a[i]>0){
            pos = pos + a[i];
        }
    }
    printf("Soma + = |%.2f|\n",pos);
    printf("SOMA NEGATIVOS = |%.2f|\tQTD = |%d|\n",neg,p);
    return 0;
}
*/



/*MAIN E10
int main(){

    float nota[15];

    for(int i = 0; i<=14; i++){
        printf("ALUNO %d NOTA.\nDIGITE :\t",i+1);
        scanf("%f",&nota[i]);

    }

    int soma = 0;

    for(int j = 0; j<=14;j++){
        soma = soma + nota[j];
        printf("soma = |%d|\n\n",soma);
    }

    float media = (soma / 15);

    printf("MEDIA = |%.2f|\n",media);
    return 0;
}
*/

/*MAIN E09
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
*/




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
        if(a[j] > M){
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