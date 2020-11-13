#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

//////////////////////////QUESTOES/////////////////////////////////////////


//MAIN E41
int main(){

    float r1,r2;

    printf("R1 =\t");
    scanf("%f",&r2);

    printf("R2 =\t");
    scanf("%f",&r1);
    
    

    while(r1>0 && r2>0){

        float rp = (r1*r2)/(r1+r2);

        printf("RESISTENCIA PARALELA = %.2f Ohms\n",rp);

        printf("R1 =\t");
        scanf("%f",&r2);
        if(r1==0) break;

        printf("R2 =\t");
        scanf("%f",&r1);
        if(r2==0) break;

    }


    return 0;
}




/*MAIN E40
int main(){

    int num,a1,a2;

    printf("Digite um valor:\n");
    scanf("%d",&num);
    a1 = num;
    a2 = num;

    while(num>0){

        if(num>a1){
            a1=num;
        }else if(num<a2){
            a2=num;
        }

        printf("Digite um valor:\n");
        scanf("%d",&num);

    }

    printf("MAIOR NUMERO = |%d|\nMENOR NUMERO = |%d|\n",a1,a2);

    return 0;
}
*/


/*MAIN E39
int main(){


    int h=1,b=1;

    while(h > 0 || b>0){

        printf("H =\t");
        scanf("%d",&h);
        if(h==0) break;

        printf("B =\t");
        scanf("%d",&b);
        if(b==0) break;

        float area = (float)(b*h)/2;

        printf("AREA = |%.2f|\n",area);
    }
    return 0;
}
*/

/*MAIN E38
int main(){

    int a,b,c=1000,d;
    
    //d = (a*a) + (b*b);

    for(int i = 1; i<=100;i++){
        for(int j = 2; j<=100;j++){
            a=i;
            b=j;
            d = (a*a) + (b*b);
            //printf("A = %d| B = %d| D = %d|\n",a,b,d);

            if(d==c){
            printf("\nA = %d|B = %d| C = %.2f|\n",a,b,(float)sqrt(c));
            i=100;
            j=100;
            }
        }
        
    }       
    return 0;
}
*/


/*MAIN E37
int main(){

    int num,a,b,soma;

    for(int i = 1000 ; i<=9999; i++){
        a = i/100;//30
        b = i%100;//25
        soma = (a + b)*(a+b);

        if(soma == i){
            printf("PROPRIEDADE NUMERO = |%d|\n",i);
        }
    }
    return 0;
}
*/

/*MAIN E36
int main(){

    int dif,s_q = 0,q_s = 0,a = 0,b = 0;

    for(int i = 1; i <=100; i++){
        a = i*i;
        s_q = s_q + a;
        b = b + i;
    }
    q_s = b*b;

    printf(" SQ = |%d|\n",s_q);
    printf(" QS = |%d|\n",q_s);

    if(s_q>q_s){
        dif = s_q - q_s;
        printf("DIFERENÇA1 = |%d|\n",dif);
    }else{
        dif = q_s - s_q;
        printf("DIFERENÇA2 = |%d|\n",dif);
    }
    return 0;
}
*/

/*MAIN E35
int main(){

    int i1,i2,soma = 0;

    printf("DIGITE INICIO E FIM DO INTERVALO :\n");
    scanf("%d %d",&i1, &i2);

    if(i1<i2){
        for(int i = i1; i<=i2; i++){
            if(i%2!=0){
                soma = soma + i;
            }
        }
        printf("SOMA DOS IMPARES ENTRE %d-%d = |%d|",i1,i2,soma);
    }else{
        printf("\nINTERVALO INVALIDO!\n");
    }
    return 0;
}
*/

/*MAIN E34
int main(){

    int n=1,i=1,a=1;

    while(a<=20){
        if(n%i!=0){
            //printf("N1 = |%d|\n",n);
            n++;
            a=0;
            i=1;
            //printf("N2 = |%d|\n ",n);
        }else{
            //printf("N3 = |%d|\n",n);
            a=i;
            i++;
            //printf("A = |%d|\n I = |%d|\n",a,i);
        }
    }
    printf("MENOR DIVISOR COMUM 1..20 = |%d|\n",n);
    return 0;
}
*/

/*MAIN E33
int main(){

    int num,i,j;
    printf("Digite num,i,j:\n");
    scanf("%d %d %d",&num,&i,&j);

    printf("NUM = |%d|\ni = |%d|\nj = |%d|\n",num,i,j);
    num = num + 1;

    for(int x = 0; x <=num+1 ; x++){
        printf("x = |%d|\n",x);
        if(x%i==0 || x%j==0){
            printf("MULTIPLOES = |%d|\n",x);
        }
    }

    return 0;
}
*/

/*MAIN E32
int main(){

    int num,d1=0,d2=0;

    printf("Digite o numero de lancamentos:\n");
    scanf("%d",&num);
    srand((unsigned)time(NULL));


    for(int i = 1; i <=num;i++){
        printf("LANÇAMENTO %d\n\n",i);
        //srand((unsigned)time(NULL));
        d1 = 1 + (rand()%6);
        d2 = 1 + (rand()%6);
        printf("\nDADO 1 = |%d|\nDADO 2 = |%d|\n",d1,d2);
        if(d1>d2){
            printf("\n%d > %d\n",d1,d2);
        }else if(d2>d1){
            printf("\n%d > %d\n",d2,d1);
        }else{
            printf("\n%d == %d\n",d1,d2);
        }

    }
    return 0;
}
*/

/*MAIN E31
int main(){

    int num = 99;
    float a=1,b=1,soma =0,c;

    for(int i = 1 ;i<=99 ;i++){
        c = a/b;
        soma = soma + c;
        a = a+2;
        b = b + 1;
    }
    printf("S = |%.2f|",soma);
    return 0;
}
*/

/*MAIN E30
int main(){

    int num = 10,soma = 0,a=1,b=2,c;

    for(int i = 1; i <=num; i++){
        soma = soma + i;
        //printf("\nSOMA = |%d|\n",soma);
    }

    printf("SEQUENCIA 1 = |%d|\n\n",soma);
    

    for(int j = 1; j <= 5;j++){
       // printf("=================i = |%d|===============\n",j);
        c = a - b;
        //printf("\n\n|%d| - |%d| = |%d|\n",a,b,c);
        b++;
        //printf("\nB =|%d|\n",b);
        a = c + b;
        ///printf("\n\n|%d| + |%d| = |%d|\n",c,b,a);
        b++;
        //printf("\nB =|%d|\n\n\n\n",b);

    }
    printf("SEQUENCIA 2 = |%d|\n\n",a);
    soma = 0;
    
    for(int x = 1 ; x <=4; x++ ){
        c = (2*x) -1;
        soma = soma + c;
    }
    printf("SEQUENCIA 3 =|%d|\n",soma);
    return 0;
}
*/



/*MAIN E29
int main(){

    int num = 5;
    float soma = 0,c = 0,e,soma1;

    for(int i = 1; i<=num; i++){
        c = (float)(2*(i));//2
        printf("C = |%.2f|\n\n",c);
        soma1 = 0;
        for(int j = 1; j <= c; j++){
            soma1 = soma1 + (float)(j);
            printf("\n\nSOMA1_total = |%.2f|\n\n",soma1);

        }

        printf("\n\nSOMA1_total = |%.2f|\n\n",soma1);

        e = (float)(i)/soma1;
        printf("E = |%.2f|\n\n",e);

        soma = soma + e;
        printf("SOMA = |%.2f|\n\n",soma);
    }

    printf("SOMA_total = |%.2f|\n",soma);

    return 0;
}
*/


/*MAIN E28
int main(){

    int num,b=0;
    float e,soma,c;

    soma = 1;

    printf("Digite um valor:\n");
    scanf("%d",&num);

    if(num>0){

        for(int i = 1; i<=num; i++){
            b = b + i;
            printf("B = |%d|\n",b);

            e = 1/(float)b;
            printf("E = |%.2f|\n",e);

            soma = soma + e;
        

        }

    printf("Soma = |%.2f|\n",soma);
    }else{
        printf("NUMERO INVALIDO!\n");
    }
    return 0;
}
*/

/*MAIN E27
int main(){

    int num;

    printf("Digite um numero:\n");
    scanf("%d",&num);
    
    float harm,soma;
    soma = 0;

    for(int i = 1; i<=num; i++){
        harm = 1/(float)i;
        soma = soma + harm;
        //printf("harm %d = |%.2f|\n",i,harm);
        printf("|1/%d|",i);
    }

    printf("\n\nh(n) = |%.2f|\n",soma);
    return 0;
}
*/

/*MAIN E26
int main(){

    int num;

    printf("Digite um numero:\n");
    scanf("%d",&num);


    for(int i = num+1; i < num+1000; i++){
        printf("i =|%d|\n",i);
        float a = i%11;
        float b = i%13;
        float c = i%17;

        if(a==0 || b==0 || c == 0){
            if(a == 0){
                printf("Multiplo 11 = |%d|\n",i);
                i = num + 1000;
            }else if(b==0){
                printf("Multiplo 13 = |%d|\n",i);
                i = num + 1000;
            }else if(c==0){
                printf("Multiplo 17 = |%d|\n",i);
                i = num + 1000;
            }
        }

    }
    return 0;
}
*/

/*MAIN E25
int main(){

    int num = 1000,soma = 0;

    for(int i = 0; i<num;i++){
        if(i%3==0 || i%5==0){
            //printf("NUMERO = |%d|\n",i);
            soma = soma + i;
            //printf("\nSOMA = |%d|\n",soma);
        }
        
    }
    printf("\n\nSOMA NUM 3 OU 5 = |%d|\n\n",soma);

    return 0;
}
*/

/*MAIN E24
int main(){
☺☻

    int num,soma=0;

    printf("Digite um numero:\n");
    scanf("%d",&num);

    if(num > 0){
        for(int i =1; i<num;i++){
            if(num%i==0){
                soma = soma + i;
            }
        }
        printf("SOMA DOS DIVISORES = |%d|\n",soma);
    }else{
        printf("NUMERO INVALIDO!\n");
    }

    return 0;
}
*/

/*MAIN E23
int main(){

    int num;

    printf("Digite um numero:\n");
    scanf("%d",&num);

    if(num > 0){
        for(int i = 1; i<num; i++ ){
            
            if(num%i==0){
                printf("DIVISORES = |%d|\n",i);
            }
        }
    }else{
        printf("NUMERO NEGATIVO!\n");
    }
    return 0;
}
*/

/*MAIN E22
int main(){

    int a=0;
    float nota,soma,med;

    printf("Digite uma nota:\n");
    scanf("%f",&nota);
    a++;
    soma = 0;
    soma = (float)soma + (float)nota;

    while(nota >9 && nota <= 20){
        printf("Digite uma nota:\n");
        scanf("%f",&nota);
        a++;
        soma = (float)soma + (float)nota;
        printf("Soma = |%.2f|\n",soma);

    }
    soma = soma -1;
    a = a -1;
    med = soma/a;
    
    printf("MEDIA ARITIMETICA = |%.2f|\n",med);

    return 0;
}
*/

/*MAIN E21
int main(){

    int num1,num2,soma,mult;

    printf("DIGITE 2 VALORES:\n");
    scanf("%d %d",&num1, &num2);

    soma = num1 + num2;
    mult = num1 * num2;

    if(num1>num2){
        int a = num1-num2;
        a = a -1;

        for(int i = num2+1; i<num1; i++){
            if(i%2==0){
                soma = soma + i;
                //printf("\nSOMA = |%d|\n",soma);
            }else{
                mult = mult*i;
            }
        }
    }else{
        int a = num2-num1;
        a = a-1;

        for(int i = num1+1; i<num2;i++){

            if(i%2==0){
                soma = soma + i;
                //printf("\nSOMA = |%d|\n",soma);
            }else{
                mult = mult*i;
            }
        }
    }

    printf("SOMA = |%d|\nMULTIPLICAÇÃO = |%d|\n",soma,mult);

    return 0;
}
*/

/*MAIN E20
int main(){

    int a = 0,c = 0,p=0;

    while(a!=1000){
        printf("DIGITE UM VALOR :\n");
        scanf("%d",&a);
        c++;

        if(a%2==0){
            p++;
        }
    }
    printf("NUMERO DE DADOS = |%d|\nNUMERO DE VALORES PARES = |%d|\n",c-1,p-1);

    return 0;
}
*/

/*MAIN E19
int main(){

    int num;

    printf("Digite um numero:\n");
    scanf("%d",&num);


    if(num>= 100 && num<=999){
        int a = num / 100;//8
        int b = num % 100;//52
        int c = b / 10;//5
        int d = b % 10;//2

        printf("CENTENA = |%d|\n",a);
        printf("DEZENA = |%d|\n",c);
        printf("UNIDADE = |%d|\n",d);
    }
    return 0;
}
*/

/*MAIN E18
int main(){

    int qtd_num,num,aux1=0,c=1;

    printf("Forneca a quantidade de numeros:\n");
    scanf("%d",&qtd_num);

    while(qtd_num >0){
        printf("Digite um numero:\n");
        scanf("%d",&num);
        qtd_num--;

        if(num>aux1){
            aux1 = num;
            //printf("\nAUX1 = %d\n",aux1);
        }else if(num == aux1){
                c++;
                //printf("\nc = |%d|\n",c);
            }
    }
    printf("\nMAIOR = |%d|\nQTD AP = |%d|\n",aux1,c);
    return 0;
}
*/

/*MAIN E17
int main(){

    int num,soma=0;

    printf("Digite um numero:\n");
    scanf("%d",&num);

    int a = num;
    //10
    printf("NUMBER - |%d|\n",num);

    while(a>0){
        int b = num;
        for(int i = 0; i<num ;i++){
            soma = soma + b;
            b = b - 1;
            a--;
            //printf("\nSOMA = %d\n",soma);
        }
        printf("\nADD = %d\n",soma);
    }
    return 0;
}
*/

/*MAIN E16
int main(){

    int num,a,b,c;


    printf("Digite um numero:\n");
    scanf("%d",&num);

    a = num;
    b = num-2;
    c = a/2;
    if(a%2==0){//PAR

        printf("NUMERO PAR!\n");
    }else{//IMPAR
        for(int i = 0; i < c;i++){

            printf("IMPAR %d = |%d|\n",i+1,b);
            b = b - 2;
            a = a -2;

            if(a==2){
                printf("IMPAR %d = |%d|\n",i+2,b);
                a = 0;
                break;
            }
        }
    }
    return 0;
}
*/



/*MAIN E15
int main(){

    int num,a,b,c;


    printf("Digite um numero:\n");
    scanf("%d",&num);

    a = num;
    b = 1;
    c = a/2;
    if(a%2==0){//PAR

        printf("NUMERO PAR!\n");
    }else{//IMPAR
        for(int i = 0; i < c;i++){
            printf("IMPAR %d = |%d|\n",i+1,b);
            b = b + 2;
            a = a -2;

            if(a==2){
                printf("IMPAR %d = |%d|\n",i+2,b);
                a = 0;
                break;
            }
        }
    }
    return 0;
}
*/

/*MAIN E14
int main(){

    int num,a,b,c;


    printf("Digite um numero:\n");
    scanf("%d",&num);

    a = num;
    b = num -2;
    if(a%2==0){//10

        while(a>0){//10
            c = (a/2);
            printf("C = %d\n\n",c);
            for(int i = 0; i < c; i++){//0....4
                printf("PAR %d = |%d|\n",i+1,b);
                
                b = b - 2;//4
                a = a - 2;
                
                
                if(a == 2){
                   printf("PAR %d = |%d|\n",i+2,b) ;
                   a = 0;
                   break;
                }
                
            }
        }
    }else{
        printf("NUMERO IMPAR!\n");
    }

    return 0;
}
*/

/*MAIN E13
int main(){

    int num,a,b,c;


    printf("Digite um numero:\n");
    scanf("%d",&num);

    a = num;
    b = 0;
    if(a%2==0){//10

        while(a>0){//10
            c = (a/2);
            printf("C = %d\n\n",c);
            for(int i = 0; i < c; i++){//0....4
                printf("PAR %d = |%d|\n",i+1,b);
                
                b = b +2;
                a = a - 2;
                
                
                if(a == 2){
                   printf("PAR %d = |%d|\n",i+2,b) ;
                   a = 0;
                   break;
                }
                
            }
        }
    }else{
        printf("NUMERO IMPAR!\n");
    }
    return 0;
}
*/

/*MAIN E12
int main(){

    int num;

    printf("Digite um numero:\n");
    scanf("%d",&num);
    int a = num;
    printf("|%d|\n",num);

    while(a>0){
        
        for(int i = 0; i < num;i++){
            printf("|%d|\n",num--);
            a--;
        }
    }
    return 0;
}
*/

/*MAIN E11
int main(){

    int num;

    printf("Digite um numero:\n");
    scanf("%d",&num);
    int a = num;
    printf("|%d|\n",num);

    while(a>0){
        for(int i = 0; i <= num; i++){
            printf("|%d|\n",i);
            a--;
        }
    }

    return 0;
}
*/

/*MAIN E10
int main(){

    int num = 0,a=0,soma;

    while(a<50){
        num = num +2;//1
        printf("VALOR PAR 1 = %d\n",num);
        a++;
        soma = num;
        for(int i = 0; i < 49; i++){
            num = num + 2;//4
            printf("\nVALOR PAR %d = %d\n",i+2,num);
            soma = soma + num;
            printf("\nSOMA %d = %d\n",i+2,soma);
            a++;
        }

    }
    printf("\n\nSOMA 50 PARES = %d\n",soma);
    return 0;
}
*/


/*MAIN E09
int main(){

    int num;

    printf("\nDigite um numero:\n");
    scanf("%d",&num);
    int a = num;
    int ver = num%2;
    printf("VER = %d\n",ver);
    int c = num;


    while(a >0){//14
        if(ver==0){//par
            num = num +1;//15
            printf("\nP - VALOR *IMPAR 1 = %d",num);
            a--;
            printf("\nA = %d\n",a);

            for(int i = 0; i < c-1; i++){
                num = num +2;//17
                printf("\nP - VALOR IMPAR %d = %d\n",i+2,num);
                
                a--;
                printf("\nA = %d\n",a);
            }


        }else if(ver!= 0){//13
            for(int i = 0; i<c; i++){
                num = num + 2;//15
                printf("\nI - VALOR IMPAR %d = %d\n",i+1,num);
                a--;
            }
        }

    }
    return 0;
}
*/




/*MAIN E08
int main(){

    int num,aux1=0,aux2=0,i=0;

    printf("DIGITE O VALOR %d: \t",1);
    scanf("%d",&num);

    aux1 = num;
    aux2 = num;

    while(i<9){
        printf("DIGITE O VALOR %d: \t",i+2);
        scanf("%d",&num);

        if(num > aux1){
            aux1 = num;
            printf("\nAUX1 = %d\n",aux1);
        }else if(num<aux2){
            aux2 = num;
            printf("\nAUX2 = %d\n",aux2);
        }
        i++;
    }

    printf("MAIOR = %d\nMENOR = %d\n",aux1,aux2);
    
    return 0;
}
*/


/*MAIN E07
int main(){

    int num,i=0,soma = 0;

    while(i <10){
        printf("Digite VALOR %d:\t",i+1);
        scanf("%d",&num);
        if(num>0){
            soma = soma + num;
            i++;

        }else if(num<0){
            soma = soma;
        }

    }
    printf("SOMA = %d",soma);

    return 0;
}
*/

/*MAIN E06
int main(){

    int num,i=0,soma = 0;

    while(i<10){
        printf("\nDIGITE VALOR %d: \t",i+1);
        scanf("%d",&num);
        soma = soma + num;
        printf("\nSOMA = %d\n",soma);
        i++;
    }
    printf("\nMEDIA = %.2f\n",(float)(soma/i));

    return 0;
}
*/

/*MAIN E05
int main(){


    int i=0, val,soma=0;

    while(i<10){
        printf("\nDigite valor %d:\n",i+1);
        scanf("%d",&val);
        soma = soma + val;
        i++;
    }
    printf("Soma = %d",soma);


    return 0;
}
*/

/*MAIN E04
int main(){

    int num=0;
    while(num <100000){
        num = num + 1000;
        printf("\nVALOR = %d\n",num);
    }

    return 0;
}
*/

/*MAIN E03
int main(){

    int i = 10;

    while(i>=0){
        printf("\n|%d|\n",i);
        i--;
    }
    printf("\nFIM\n");

    return 0;
}
*/

/*MAIN E02
int main(){

    int cont = 1,cont2 = 1;

    for(int i=1; i<=100; i++){
        printf("PRINTANDO COM FOR -> %d\n",i);
    }

    while(cont <= 100){
        printf("PRINTANDO COM WHILE -> %d\n",cont);
        cont++;
    }

    do{
        printf("PRINTANDO DO..WHILE -> %d\n",cont2);
        cont2++;
    }while(cont2 <=100);    


    return 0;
}
*/

/*MAIN E01
int main(){

    int mult;

    for(int i = 2; i<7;i++){
        mult = 3*(i);
        printf("\n%d MULTIPLO DE 3 = %d\n",(i-1),mult);
    }

    return 0;
}
*/