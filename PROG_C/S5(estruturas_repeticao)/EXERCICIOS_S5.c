#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>



//////////////////////////QUESTOES/////////////////////////////////////////

/*MAIN E62
int main(){
    
    for(int i = 1; i<=1000; i++){
        
    }



    return 0;
}
*/


/*MAIN E61
int main(){

    int pal ,a,b,c,d,e,f,g,h,k,l,maior = 10000,n1,n2;

    for(int i = 100; i<=999; i++){
        for(int j = 101; j<=999; j++){
            
            pal = i*j;

            if(pal>=10000 && pal <=99999){
                a = pal/10000;//valor 1;
                b = pal%10000;//valor 2 3 4 5;
                c = b/1000;//valor 2;
                d = b%1000;//valor 3 4 5;
                e = d/100;//valor 3
                f = d%100;//valor 4 e 5;
                h = f/10;//valor 4;
                k = f%10;//valor 5;

                if(a==k && c==h){
                    //printf("Palindromo1 |%d*%d| = |%d|\n",i,j,pal);
                    if(pal>=maior){
                        maior = pal;
                        n1=i;
                        n2=j;
                        //printf("Palindromo1 |%d*%d| = |%d|\n",n1,n2,maior);
                        
                    }
                }

            }else if(pal>=100000 && pal <=999999){
                a = pal/100000;//valor 1;
                b = pal%100000;//valor 2 3 4 5 6
                c = b/10000;//valor 2
                d = b%10000;//valor 3 4 5 6
                e = d/1000;//valor 3
                f = d%1000;//valor 4 5 6
                g = f/100;//valor 4
                h = f%100;//valor 5 e 5
                k = h/10;//valor 5
                l = h%10;//valor 6

                if(a==l && c==k && e==g){
                    //printf("Palindromo2 |%d*%d| = |%d|\n",i,j,pal);
                    if(pal>=maior){
                        maior = pal;
                        n1=i;
                        n2=j;
                        //printf("Palindromo2 |%d*%d| = |%d|\n",n1,n2,maior);
                        
                    }
                }

                
            }
        }

        //printf("Palindromo2 |%d*%d| = |%d|\n",n1,n2,maior);
    }
    printf("MAIOR PALINDROMO |%d*%d| = |%d|\n",n1,n2,maior);

    return 0;
}
*/

/*MAIN E60
int main(){

    int num,soma,med=0,qtd=1,num_M,num_m,p1 = 0,p2 = 0;
    float div;

        printf("Digite Um numero:\n");
        scanf("%d",&num);
        num_M = num;
        num_m = num;

        if(num%2==0){
            p1 = p1+num;
            p2++;
        }
        soma = num;


    while(num!=0){

        printf("Digite Um numero:\n");
        scanf("%d",&num);
        if(num==0) break;

        //maior menor
        if(num>=num_M){
            num_M = num;
        }else if(num<num_m){
            num_m = num;
        }
        //media num pares
        if(num%2==0){
            p1 = p1 + num;
            p2++;
        }

        //soma dos numeros
        soma = soma + num;
        //quanidade de numeros
        qtd++;
    }

    printf("\nSOMA = |%d|\n",soma);
    printf("\nQUANTIDADE DE NUMEROS = |%d|\n",qtd);

    med = soma/qtd;
    printf("\nMEDIA DOS NUMEROS = |%d|\n",med);

    printf("\nMAIOR NUMERO = |%d|\n ",num_M);
    printf("\nMENOR NUMERO = |%d|\n ",num_m);

    med = p1/p2;

    printf("MEDIA NUMEROS PARES = |%d|\n",med);

    return 0;
}
*/

/*MAIN R59
int main(){

    int num_hab,cod,c1=0,c2=0,c3=0,a=1,b=1;
    float val_kwh,cons,cons_M,cons_m,use,cons_h = 0,cons_c1=0,cons_c2 = 0,cons_c3 = 0,h;

    printf("\n1 - NUMERO DE HABITANTES:\nDigite:\t");
    scanf("%d",&num_hab);

    printf("\n2 - valor DE kwh:\nDigite:\t");
    scanf("%f",&val_kwh);

    printf("\n*HABITANTE |1|*\n");
    printf("3 - CONSUMO DO MES:\nDigite:\t");
    scanf("%f",&cons);
    cons_M = cons;
    cons_m = cons;
    
    use = cons * val_kwh;
    cons_h = cons_h + use;
    printf("\nUSE = |%.2f|\n",use);
    printf("\ncons_h = |%.2f|\n",cons_h);

    printf("4 - CODIGO DO CONSUMIDOR:\n");
    scanf("%d",&cod);

    if(cod==1){
        c1++;
        cons_c1 = cons_c1 + use;
        printf("1 - cons_c1 = |%.2f|\n",cons_c1);
    }else if(cod==2){
        c2++;
        cons_c2 = cons_c2 + use;
        printf("2 - cons_c1 = |%.2f|\n",cons_c1);
    }else if(cod==3){
        c3++;
        cons_c3 = cons_c3 + use;
        printf("3 - cons_c1 = |%.2f|\n",cons_c1);
    }

    for(int i = 2; i<=num_hab; i++){
        printf("\n*HABITANTE |%d|*\n",i);
        printf("3 - CONSUMO DO MES:\nDigite:\t");
        scanf("%f",&cons);

        if(cons>=cons_M){
            cons_M = cons;
            a=i;
        }else if(cons<=cons_m){
            cons_m = cons;
            b=i;
        }

        use = cons * val_kwh;
        cons_h = cons_h + use;
        printf("\nUSE = |%.2f|\n",use);
        printf("cons_h = |%.2f|\n",cons_h);

        printf("4 - CODIGO DO CONSUMIDOR:\nDigite:\t");
        scanf("%d",&cod);

        if(cod==1){
            c1++;
            cons_c1 = cons_c1 + use;
            printf("cons_c1 = |%.2f|\n",cons_c1);
        }else if(cod==2){
            c2++;
            cons_c2 = cons_c2 + use;
            printf("\ncons_c2 = |%.2f|\n",cons_c2);
        }else if(cod==3){
            c3++;
            cons_c3 = cons_c3 + use;
            printf("\ncons_c3 = |%.2f|\n",cons_c3);
        }
    }

    printf("MAIOR CONSUMO HABITANTE %d = |%.2f|\n",a,cons_M);
    printf("MENOR CONSUMO HABITANTE %d = |%.2f|\n",b,cons_m);
    
    h = cons_h/((float)(num_hab));
    printf("MEDIA CONSUMO P/ HABITANTE = |%.2f|\n",h);
    
    cons_c1 = cons_c1/c1;
    printf("1 - RESIDENCIAL:\nCT = |%.2f|\n",cons_c1);

    cons_c2 = cons_c2/c2;
    printf("1 - RESIDENCIAL:\nCT = |%.2f|\n",cons_c2);

    cons_c3 = cons_c3/c3;
    printf("1 - RESIDENCIAL:\nCT = |%.2f|\n",cons_c3);

    return 0;
}
*/




/*MAIN E58
int main(){

    int n,a,b,c=0,soma = 0;

    printf("Digite os valores de a e b:\n");
    scanf("%d %d",&a,&b);

    for(int i = a; i<=b; i++)  {
        for(int j = 1; j <=i; j++){
            n = i%j;

            if(n==0){
                c++;
            }
        }
        if(c==2){
            soma = soma + i;
            c=0;
        }else{
            c=0;
        }
    }
    printf("SOMA DE |%d -> %d| = |%d|",a,b,soma);
    return 0;
}
*/

/*MAIN E57
int main(){

    int n,a,b,c=0,d=0;

    printf("Digite os valores de a e b:\n");
    scanf("%d %d",&a,&b);

    for(int i = a; i<= b; i++){
        for(int j = 1; j<=i; j++){
            n = i%j;
            if(n==0){
                c++;
            }
        }
        if(c==2){
            d++;
            c=0;
        }else{
            c=0;
        }
    }

    printf(" |%d -> %d| = |%d| Valores Primos!\n",a,b,d);
    return 0;
}
*/




/*MAIN E56
int main(){

        int num = 2000000,b=2,c=0,soma=0;
        
        for(int i = 2; i<num;i++){
            for(int j = 1; j<=i; j++){
                int a = b%j;

                if(a==0){
                    c++;
                }
            }
            if(c==2){
                soma = soma + b;
                printf("B = |%d|\nSOMANDO = |%d|\n",b,soma);
                b++;
                c=0;
            }else{
                b++;
                c=0;
            }
        }
        printf("SOMA TOTAL = |%d|\n",soma);


    return 0;
}
*/


/*MAIN E55
int main(){

    int num,b = 2,c=0,soma;
    float a;

    printf("Digite um valor:\n");
    scanf("%d",&num);

    for(int i = 2; i<=num; i++){
        for(int j = 1; j<=i; j++){
            
            a = b%j;
            if(a==0){
                c++;
                
            }
        }
        if(c==2){
            soma = soma + b;
            b++;
            c=0;
            
        }else{
            b++;
            c=0;
            
        }
    }

    printf("SOMA = |%d|\n",soma);

    return 0;
}
*/

/*MAIN E54
int main(){

    int num,a,b = 1;

    printf("Digite um numero:\n");
    scanf("%d",&num);

    for(int i = 2; i<=num; i++){
        a = num%i;
        if(a==0){
            b++;
        }
    }
    if(b==2){
        printf("NUMERO PRIMO!\n");
    }else{
        printf("O NUMERO NAO EH PRIMO!\n");
    }

    return 0;
}
*/

/*MAIN E53
int main(){

    int n,n1,a=0;
    printf("Digite um valor:\n");
    scanf("%d",&n);

    for(int i = 1; i<=n;i++){//pula a linha
        for(int j = 1; j<=i;j++){//colunas
            a++;
            printf("|%d|",a);
        }
        printf("\n");
    }
    return 0;
}
*/


/*MAIN E52
int main(){

    int saq,n100=0,n50=0,n20=0,n10=0,n5=0,n2=0,n1=0,tt = 0;

    printf("Digite o valor do saque:\n");
    scanf("%d",&saq);

    while(saq>0){
        if(saq>=100){
            saq = saq - 100;
            n100++;
        }else if(saq<100 && saq >= 50){
            saq = saq - 50;
            n50++;
        }else if(saq<50 && saq >= 20){
            saq = saq - 20;
            n20++;
        }else if(saq < 20 && saq >= 10){
            saq = saq - 10;
            n10++;
        }else if( saq < 10 && saq >= 5){
            saq = saq -  5;
            n5++;
        }else if(saq < 5 && saq >=2){
            saq = saq - 2;
            n2++;
        }else if(saq < 2 ){
            saq = saq - 1;
            n1++;
        }
    }

    printf("NOTA 100 = |%d|\nNOTA 50 =  |%d|\nNOTA 20 = |%d|\nNOTA 10 = |%d|\nNOTA 5 = |%d|\nNOTA 2 = |%d|\nNOTA 1 = |%d|\n",n100,n50,n20,n10,n5,n2,n1);

    return 0;
}
*/



/*MAIN E51
int main(){

    float sal_fun = 2000;
    float ano = 1995;
    float tx = 0.015;

    while(ano<=2000){
        sal_fun = sal_fun + (sal_fun*tx);
        ano++;
        if(ano >= 1997){
            tx = tx*2;
            sal_fun = sal_fun + (sal_fun*tx);
            ano++;
        }
    }
    printf("SALARIO R$ = |%.2f|\n PERCENTUAL AUMENTO = |%.2f|\n",sal_fun,tx);

    return 0;
}
*/


/*MAIN E50
int main(){

    float alt_c = 1.5,alt_z = 1.10;
    int a=1;

    while(alt_z<alt_c){
        alt_c = alt_c + 2;
        alt_z = alt_z + 3;
        a++;

    }
    printf("ALTURA ZE = |%.2f|\n",alt_z);
    printf("ALTURA CHICO = |%.2f|\n",alt_c);
    printf("ANOS = |%d|\n",a);


    return 0;
}
*/



/*MAIN E49
int main(){

    float sal_c,sal_j;
    int mc=1,mj=1;

    printf("Digite o valor do salario:\n");
    scanf("%f",&sal_c);
    sal_j = sal_c/3;

    while(sal_c>=sal_j){
        sal_c = sal_c + (sal_c*0.02);
        sal_j = sal_j + (sal_j*0.05);
        mc++;
        mj++;

    }
    printf("SAL.CARLOS  R$ = |%.2f|\nMESES = |%d|\n",sal_c,mc);
    printf("SAL.JOAO  R$ = |%.2f|\nMESES = |%d|\n",sal_j,mj);

    return 0;
}
*/

/*MAIN 48
int main(){

    int fb1=1,fb2=1,soma=0,fb;

    while(soma<4000000){
        fb = fb1 + fb2;
        printf("FB = |%d|\n",fb);
        printf("SOMA = |%d|\n",soma);

        if(fb%2==0){
            soma = soma + fb;
            fb1 = fb2;
            fb2 = fb;
            printf("SOMA = |%d|\n",soma);
            printf("fb1 = |%d|\n",fb1);
            printf("fb2 = |%d|\n",fb2);
        }else{
            fb1 = fb2;
            fb2 = fb;
        }
        
    }
    printf("SOMA = |%d|\n FB = |%d|",soma,fb);
}
*/

/*MAIN E47
int main(){

    int op,n1,n2;;
    float a1,a2;

    do{
        printf("1 - |+|:\n");
        printf("2 - |-|:\n");
        printf("3 - |*|:\n");
        printf("4 - |/|:\n");
        printf("5 - |SAIDA|:\n");
        scanf("%d",&op);

        switch (op){
            case 1:
                
                printf("\nDigite 2 numeros:\n\n");
                scanf("%d %d",&n1,&n2);
                int soma = n1 + n2;
                printf("\n|%d + %d| = |%d|\n\n",n1,n2,soma);
                break;
            case 2:
                
                printf("Digite 2 numeros:\n\n");
                scanf("%d %d",&n1,&n2);
                int sub = n1 -n2;
                printf("\n|%d - %d| = |%d|\n\n",n1,n2,sub);
                break;
            case 3:
                
                printf("Digite 2 numeros:\n\n");
                scanf("%d %d",&n1,&n2);
                int mult = n1*n2;
                printf("\n|%d * %d| = |%d|\n\n",n1,n2,mult);
                break;
            case 4:
                
                printf("Digite 2 numeros:\n\n");
                scanf("%f %f",&a1,&a2);
                float div = (a1/a2);
                printf("\n|%.0f / %.0f| = |%.2f|\n\n",a1,a2,div);
                break;
            case 5:
                printf("\nPROGAMA FINALIZADO!\n\n");
                break;
        }

    }while(op!=5);

    return 0;
}
*/




/*MAIN E46
int main(){

    int num, a,b=0;
    srand(time(NULL));
    a = 1 + (rand()%1000);

    do{
        printf("Digite um numero:\n");
        scanf("%d",&num);
        if(num<a){
            printf("CHUTE MENOR!\n");
            b++;
        }else if(num>a){
            printf("CHUTE MAIOR!\n");
            b++;
        }else if(num==a){
            printf("ACERTOU!\nNUMERO DE TENTATIVAS = %d",b);
            
        }
    }while(num!=a);

    return 0;
}
*/

/*MAIN E45
int main(){

    int a;
    float km_h,ms_s;

    do{

        printf("\n1 - km/h p/ m/s. \n");
        printf("2 - m/s p/ km/h.\n");
        printf("3 - FINALIZAR PROGAMA!\n\nDIGITE OPCAO:\t");
        scanf("%d",&a);

        switch(a){
            case 1:
                printf("DIGITE A VELOCIDADE:\n");
                scanf("%f",&km_h);

                ms_s = km_h/3.6;

                printf("\n\nVELOCIDADE EM M/S = |%.2f|\n",ms_s);
                break;
            case 2:
                printf("DIGITE A VELOCIDADE:\n");
                scanf("%f",&ms_s);

                km_h = ms_s*3.6;

                printf("\n\nVELOCIDADE EM KM/H = |%.2f|\n",km_h);
                break;
            case 3:
                printf("\n\nPROGAMA FINALIZADO!\n");
                break;
        }

    }while(a!=3);

    return 0;
}
*/




/*MAIN E44
int main(){

    int num,soma,fib1,fib2,a;

    do{
        printf("Digite um numero:\n");
        scanf("%d",&num);
        fib1 = 1;
        fib2 = 1;
        if(num==0) break;

        for(int j = 0; j<=1;j++){
            a = (fib1+j) - fib2;
            printf("|%d|\n",a);
        }
        printf("|1|\n");

        for(int i = 3 ; i<=num; i=i+1){
            soma = fib1 + fib2;
            fib1 = fib2;
            fib2 = soma;
            printf("|%d|\n",fib2);
            if(fib2 > num){
                //printf("|%d|",fib2);
                i = num;
            }
        }
        
    }while(num>0);

    printf("FIM DO PROGAMA!\n");

    return 0;
}
*/





/*MAIN E43
int main(){

    int id,a=0;
    float med,soma = 0;

    do{
        printf("DIGITE A IDADE:\n");
        scanf("%d",&id);
        a++;
        printf("A = %d\n",a);
        soma = soma + id;
        printf("Soma = %.2f\n",soma);


    }while(id>0);
    a = a -1;
    med = soma/(float)a;

    printf("MEDIA DAS IDADES = |%.2f|\n",med);

    return 0;
}
*/

/*MAIN E42
int main(){

    float num,a;

    do{
        printf("Digite um valor:\n");
        scanf("%f",&num);

        a = num*num;
        printf("QUADRADO DE %.0f = %.2f\n",num,a);
        a = num*num*num;
        printf("CUBO DE %.0f = %.2f\n",num,a);
        a = sqrt(num);
        printf("RAIZ QUADRADA DE %.0f = %.2f\n",num,a);

    }while(num>0);

    return 0;
}
*/

/*MAIN E41
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
*/

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