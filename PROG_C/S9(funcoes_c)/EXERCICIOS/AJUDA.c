#include <stdio.h>
#include <stdlib.H>
#include <math.h>
#include <string.h>



////////////////////////// FUNÇÕES////////////////////////////////////


//MEDIA ALUNO
void notas(float n1, float n2, float n3,char op){
    
    fflush(stdin);
    printf("NOTA 1\nDIGITE :\t");
    scanf("%f",&n1);
    printf("NOTA 2\nDIGITE :\t");
    scanf("%f",&n2);
    printf("NOTA 3\nDIGITE :\t");
    scanf("%f",&n3);
    printf("LETRA\nDIGITE :\t");
    fflush(stdin);
    scanf("%c",&op);
    
    float soma, med_ari, med_pond;

    switch (op){
        case 'a':
            soma = n1+n2+n3;
            med_ari = soma/3;
            printf("MEDIA ARITIMETICA = |%.2f|\n",med_ari);
            break;
    
        default:
            soma = (n1*5)+(n2*3)+(n3*2);
            med_pond = (soma)/10;
            printf("MEDIA PONDERADA = |%.2f|\n",med_pond);
        break;
    }

    /*
    if(op !='a'){
        float soma = (n1*5)+(n2*3)+(n3*2);
        float med_pond = (soma)/10;
        printf("MEDIA PONDERADA = |%.2f|\n",med_pond);
    }else{
        float soma = n1+n2+n3;
        float med_ari = soma/3;
        printf("MEDIA ARITIMETICA = |%d|\n",med_ari);
    }
    */

}


//MAIOR DE DOIS
int maior(int n1, int n2){
    printf("DIGITE 2 NUMEROS :\t");
    scanf("%d %d",&n1,&n2);

    if(n1>n2){
        printf("|%d| - MAIOR",n1);
    }else{
        printf("|%d| - MAIOR",n2);
    }
}


//VOLUME CILINDRO CIRCULAR
float vol_cc(float r,float alt){
    printf("DIGITE O RAIO :\t");
    scanf("%f",&r);
    printf("DIGITE A ALTURA :\t");
    scanf("%f",&alt);

    float a = pow(r,2);

    float vol = 3.141592*a*alt;

    printf("VOLUME DO CILINDRO = |%.2f|\n",vol);

}

////////////HIPOTENUSA
float hipotenusa(float a, float b){
    printf("DIGITE VALOR DE A :\t");
    scanf("%f",&a);
    printf("DIGITE VALOR DE B :\t");
    scanf("%f",&b);

    float c = pow(a,2);
    printf("C = |%.2f|\n",c);
    float d = pow(b,2);
    printf("D = |%.2f|\n",d);
    

    float hip = sqrt(c+d);
    printf("HIPOTENUSA = |%.2f|\n",hip);
}

///////////////////////////////////////////////////////////////////////////CONVERSÃO CELCIUS FAHRENHEIT
float conv_CF(float c){
    printf("*TEMPERATURA EM CELCIUS*\nDIGITE :\t");
    scanf("%f",&c);

    float f = (c*(1.8))+32;

    printf("*TEMPERATURA EM FAHRENHEIT*\n = |%.2f|\n",f);

}
///////////////////////////////////////////////////////////////////////////CONVERSÃO SEGUNDOS
int conv_seg(int h,int m, int s){
    printf("DIGITE HORAS :\t");
    scanf("%d",&h);
    printf("DIGITE MINUTOS :\t");
    scanf("%d",&m);
    printf("DIGITE SEGUNDOS :\t");
    scanf("%d",&s);

    int segundos = h*3600 + m*60 + s;

    printf("TEMPO EM SEGUNDOS = |%d|\n",segundos);
}
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