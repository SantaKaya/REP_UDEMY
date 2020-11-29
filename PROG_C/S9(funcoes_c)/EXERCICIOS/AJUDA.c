#include <stdio.h>
#include <stdlib.H>
#include <math.h>
#include <string.h>




////////////////////////// FUNÇÕES////////////////////////////////////



//TRIANGULO
void tri(){
    int n;
    printf("Digite um numero:\n");
    scanf("%d",&n);
    int a = 2*n-1;
    printf("A = |%d|\n",a);
    int met_tri = a/2;

    for(int i = 0; i<=n;i++){
        for(int d = 0; d<=i;d++){
            printf("*");
        }
        for(int j = 0; j<=i; j++){
           printf("");
        }
        for(int k = 1; k<=i;k++){
            printf("*");
        }
       
       printf("\n");
        
    }
}



//TRIANGULO LATERAL
void tri_lat(){
    int n;
    printf("Digite um numero:\n");
    scanf("%d",&n);
    int a = 2*n-1;
    printf("A = |%d|\n",a);


    for(int i = 0; i<=a;i++){
        
        if(i<=n){
            for(int j=1;j<=i;j++){
            printf("*");
            }
            printf("\n");
        }else if(i>n){
            
            for(int k = 2; k<=n;k++){
                printf("*");
                
            }
            printf("\n");
            n--;
        }
    }
    
}



//PONTOS DE EXCLAMAÇÃO
void exc(){
    int n;
    printf("DIGITE UM NUMERO:\n");
    scanf("%d",&n);

    for(int i = 0; i<=n;i++){
        for(int j=1;j<=i;j++){
            printf("!");
        }
        printf("\n");
    }

}

//QUANTIDADE DE NUMEROS PRIMOS ABAIXO DE N
void num_p(){
    int num;

    printf("DIGITE UM NUMERO:\n");
    scanf("%d",&num);

    int n[num-1],a=0;

    for(int i = 1; i<num;i++){
        n[a]=i;
        a++;  
    }
    a = a-1;
    int d,verifica=1,qtd_primo = 0,limite;
    
    for(int t = 1; t<=a;t++ ){
        if(n[t]>1){
            d = 2;
            verifica = 1;
            limite = sqrt(n[t]);
            
            while(verifica && d<=limite){
                if(n[t]%d==0){
                    verifica = 0;
                }
                d++;
            }
        
            if(verifica){
                qtd_primo++;
            }
          
        }
        
    }

    printf("QTD PRIMOS ABAIXO DE |%d| = |%d|\n",num,qtd_primo);
}


//FATORIAL DE UM NUMERO
void fato_num(){

    int num;

    printf("DIGITE UM NUMERO:\n");
    scanf("%d",&num);

    int fat[num-1],a=0;

    for(int i = 1; i<=num;i++){
        fat[a]=i;
        a++;  
    }
    a = a-1;

    for(int k = 0; k<a;k++){
        fat[a]=fat[a]*fat[k];
    }
    
    printf("FATORACAO |%d| = |%d|\n",num,fat[a]);


}


//MAIOR FATOR PRIMO
int fat_primo(int n){

    printf("DIGITE UM NUMERO:\t");
    scanf("%d",&n);

    int n1[n];
    

    for(int i = 1; i<=n; i++){
        n1[i] = i;
        printf("N1 = |%d|\n",n1[i]);
    }


    int d,verifica=1,maior_primo,limite;
    
    for(int t = 1; t<=n;t++ ){
        if(n1[t]>1){
            d = 2;
            verifica = 1;
            limite = sqrt(n1[t]);
            
            while(verifica && d<=limite){
                if(n1[t]%d==0){
                    verifica = 0;
                }
                d++;
            }
        
            if(verifica){
                maior_primo = n1[t];
            }
          
        }
        
    }
   printf("MAIOR VALOR PRIMO = |%d|\n",maior_primo);
}


//EXPONENCIAÇÃO
float expo(float x , float z){
    printf("DIGITE O VALOR DE X E Z:\n");
    scanf("%f %f",&x,&z);

    float exp = x;

    for(int i = 2 ; i<=z;i++){
        exp = exp*x;
    }

    printf("|%.2f|^|%.2f| = |%.2f|\n",x,z,exp);
}


//SOMA NUMEROS COM LIMITE
int soma_lim(int n1,int n2){
    printf("DIGITE O LIMITE:\n");
    scanf("%d %d",&n1,&n2);

    int soma = 0;

    for(int i = n1; i<=n2; i++){
        soma = soma + i;
    }

    printf("SOMA NUMEROS ENTRE |%d| e |%d| = |%d|\n",n1,n2,soma);

}




//DESENHAR LINHAS
void desenha_linha(){
    int qtd = 35;
    for(int i = 0; i<=qtd;i++){
        printf("=");
    }
}


//VERIFICAÇÃO TRIANGULO
int triangulo(int a, int b, int c){
    int i = 0;
    do{
        printf("DIGITE VALOR DO LADO 1:\t");
        scanf("%d",&a);
        printf("DIGITE VALOR DO LADO 2:\t");
        scanf("%d",&b);
        printf("DIGITE VALOR DO LADO 3:\t");
        scanf("%d",&c);


        if(a!=0 && b!=0 && c!=0){
            i = 3;
        }else{
            printf("VALORES IGUAIS A ZERO - REPITA!");
        }

    }while(i<=2);


    int ax1 = b + c;
    int ax2 = a + c;
    int ax3 = a + b;

    if(c<ax3 && b<ax2 && a<ax1){

        if(a==c && c==b){
            printf("TRIANGULO EQUILATERO");
        }else if((a==c && c!=b)||(a==b && b!=c)||(b==c && c!=a)){
            printf("TRIANGULO ISOCELES");
        }else if(a!=b && b!=c){
            printf("TRIANGULO ESCALENO");
        }
    }else{
        printf("NÃO EH UM TRIANGULO!");
    }
     





}















//CONSUMO KM/L
float consumo_km(float km, float litros){
    
    float consumo;
    
    printf("DISTANCIA\nDIGITE :\t");
    scanf("%f",&km);

    printf("LITROS CONSUMIDOS\nDIGITE :\t");
    scanf("%f",&litros);

    consumo = km/litros;

    if(consumo < 8){
        printf("CONSUMO = |%.2f|\nVENDA O CARRO!",consumo);
    }else if(consumo >=8 && consumo <=14){
        printf("CONSUMO = |%.2f|\nECONOMICO!",consumo);
    }else if( consumo > 14){
        printf("CONSUMO = |%.2f|\nSUPER ECONOMICO!",consumo);
    }

}


//OPERAÇÕES MATEMATICAS
float op_mat(float n1, float n2){

    float soma,mult,div,sub;
    char op;


    printf("DIGITE 2 NUMEROS:\n");
    scanf("%f %f",&n1,&n2);


    printf("DIGITE O SIMBOLO DA OPERACAO :\t");
    fflush(stdin);
    scanf("%c",&op);


    switch (op){
        case '+':
            soma = n1 + n2;
            printf("|%.2f| + |%.2f| = |%.2f|",n1,n2,soma);
            break;
        case '-':
            sub = n1 - n2;
            printf("|%.2f| - |%.2f| = |%.2f|",n1,n2,sub);
            break;
        case '*':
            mult = n1 * n2;
            printf("|%.2f| - |%.2f| = |%.2f|",n1,n2,mult);
            break;
        case '/':
            div = n1 / n2;
            printf("|%.2f| - |%.2f| = |%.2f|",n1,n2,div);
            break;
    }


}



//SOMA ALGARISMOS
int soma_alg(int num){
    printf("DIGITE UM NUMERO:\n");
    scanf("%d",&num);

    if(num>0 && num<10){
        printf("SOMA DOS ALGARISMOS = |%d|\n",num);
    }else if(num>=10 && num <=99){
        int a = num /10;
        int b = num%10;
        printf("SOMA DOS ALGARISMOS |%d|%d| = |%d|",a,b,a+b);
    }else if(num>=100 && num <=999){
        int a = num /100;//2
        int b = num % 100;//52
        int c = b/10;//5
        int d = b%10;//2
        printf("SOMA DOS ALGARISMOS |%d|%d|%d|= |%d|\n",a,c,d,a+c+d);
    }else if(num>=1000 && num <=9999){//2535
        int a = num / 1000;//2
        int b = num %1000;//535
        int c = b /100;//5
        int d = b %100;//35
        int e = d/10;//3
        int f = d%10;//5
        printf("SOMA DOS ALGARIMOS |%d|%d|%d|%d| = |%d|\n",a,c,e,f,a+c+e+f);
    }

}




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