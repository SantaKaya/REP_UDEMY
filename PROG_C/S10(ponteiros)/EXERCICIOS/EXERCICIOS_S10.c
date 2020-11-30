#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include "help.h"

//////////////////////////////////////QUESTOES//////////////////////////////////////////




//MAIN E06
int main(){

    int a,b;
    printf("DIGITE 2 VALORES:\n");
    scanf("%d %d",&a,&b);

    soma_d(a,b);

    return 0;
}

/*MAIN 05
int main(){

    int a,b;
    printf("DIGITE 2 VALORES:\n");
    scanf("%d %d",&a,&b);

    pass_maior(a,b);

    return 0;
}
*/

/*MAIN E04
int main(){

    int a,b;
    printf("digite 2 valores:\n");
    scanf("%d %d",&a,&b);

    passando_2_variaveis(a,b);

    return 0;
}
*/

/*MAIN 03
int main(){

    int n1,n2;

    printf("Digite 2 numeros:\n");
    scanf("%d %d",&n1,&n2);

    if(&n1>&n2){
        printf("n1|%d|\n",n1);
    }else{
        printf("n2|%d|\n",n2);
    }

    return 0;
}
*/

/*MAIN 02
int main(){

    int n1,n2;

    if(&n1>&n2){
        printf("n1|%d| - & = |%d|\n",n1,&n1);
    }else{
        printf("n2|%d| - & = |%d|\n",n2,&n2);
    }

    return 0;
}
*/

/*MAIN 01
int main(){
    int a,*pa;
    char b, *pb;
    float c, *pc;

    a = 1;
    b = 'b';
    c = 3.4;

    printf("\n==========ANTES=============\n");

    printf("A = |%d|\nB = |%c|\nC = |%.2f|\n",a,b,c);
    printf("&A = |%d|\n&B = |%d|\n&C = |%d|\n",&a,&b,&c);
    
    printf("PA = |%d|\n PB = |%d|\nPC = |%d|\n",pa,pb,pc);
    printf("&PA = |%d|\n &PB = |%d|\n&PC = |%d|\n",&pa,&pb,&pc);

    pa = &a;
    pb = &b;
    pc = &c;

    *pa = 2;
    *pb = 'c';
    *pc = 3.77;

    printf("\n==========DEPOIS=============\n");

    printf("A = |%d|\nB = |%c|\nC = |%.2f|\n",a,b,c);
    printf("&A = |%d|\n&B = |%d|\n&C = |%d|\n",&a,&b,&c);

    printf("PA = |%d|\nPB = |%d|\nPC = |%d|\n",pa,pb,pc);
    printf("&PA = |%d|\n &PB = |%d|\n&PC = |%d|\n",&pa,&pb,&pc);

    return 0;
}
*/