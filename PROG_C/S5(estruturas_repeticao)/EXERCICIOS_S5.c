#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

//////////////////////////QUESTOES/////////////////////////////////////////


//MAIN E13
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
                //printf("I = %d\n",i);
                //printf("\nB=%d",b);
                //printf("\nA=%d\n",a);
                b = b - 2;//4
                a = a - 2;
                //printf("\nB1=%d",b);
                //printf("\nA1=%d\n",a);
                
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