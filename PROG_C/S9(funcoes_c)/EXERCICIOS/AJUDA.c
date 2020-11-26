#include <stdio.h>
#include <stdlib.H>
#include <math.h>



////////////////////////// FUNÇÕES////////////////////////////////////

///////////////////////////////////////////////////////////////////////////VOLUME DE UMA ESFERA
float vol_esf(float r){

    printf("DIGITEI O RAIO :\t");
    scanf("%f",&r);
    float a = 1.33333 * 1.14159;
    float b = pow(r,3);

    printf("A = |%.4f|\n",a);
    printf("B = |%.4f|\n",b);

    float vol = a*b;

    printf("\nVOLUME DA ESFERA P/ RAIO |%.4f| = |%.4f|\n",r,vol);
}

///////////////////////////////////////////////////////////////////////////QUADRADO PERFEITO
int quad(int n){

    int aux;
    printf("DIGITE UM NUMERO:\t");
    scanf("%d",&n);

    float a = sqrt(n);
    aux = a;

    if(aux==a){
        printf("QUADRADO PERFEITO |%d| = |%.0f|",n,a);
    }
}
///////////////////////////////////////////////////////////////////////////POSITIVO OU NEGATIVO
int pos_neg(int n){

    printf("DIGITE UM NUMERO:\t");
    scanf("%d",&n);

    if(n>0){
        printf("|1|\n");
    }else if(n<0){
        printf("|-1|\n");
    }else if(n==0){
        printf("|0|\n");
    }
}
///////////////////////////////////////////////////////////////////////////DATA POR EXTENSO
int data(int d, int m, int a){
    printf("\nDIGITE A DATA:\t");
    scanf("%d",&d);
    printf("\nDIGITE A MES:\t");
    scanf("%d",&m);
    printf("\nDIGITE A ANO:\t");
    scanf("%d",&a);

    switch (m){
        case 1:
            printf("\n|%d| DE JANEIRO DE |%d|\n ",d,a);
            break;
        case 2:
            printf("\n|%d| DE FEVEREIRO DE |%d|\n ",d,a);
            break;
        case 3:
            printf("\n|%d| DE MARCO DE |%d|\n ",d,a);
            break;
        case 4:
            printf("\n|%d| DE ABRIL DE |%d|\n ",d,a);
            break;
        case 5:
            printf("\n|%d| DE MAIO DE |%d|\n ",d,a);
            break;
        case 6:
            printf("\n|%d| DE JUNHO DE |%d|\n ",d,a);
            break;
        case 7:
            printf("\n|%d| DE JULHO DE |%d|\n ",d,a);
            break;
        case 8:
            printf("\n|%d| DE AGOSTO DE |%d|\n ",d,a);
            break;
        case 9:
            printf("\n|%d| DE SETEMBRO DE |%d|\n ",d,a);
            break;
        case 10:
            printf("\n|%d| DE OUTUBRO DE |%d|\n ",d,a);
            break;
        case 11:
            printf("\n|%d| DE NOVEMBRO DE |%d|\n ",d,a);
            break;
        case 12:
            printf("\n|%d| DE DEZEMBRO DE |%d|\n ",d,a);
            break;
    }

}
///////////////////////////////////////////////////////////////////////////DOBRO DO NUMERO
int dobro(int num){
    int dob = num*num;
    return dob;
}