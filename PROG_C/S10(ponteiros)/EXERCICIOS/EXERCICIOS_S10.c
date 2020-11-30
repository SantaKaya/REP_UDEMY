#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include "help.h"

//////////////////////////////////////QUESTOES//////////////////////////////////////////



//MAIN E10
int main(){

    int n[5],*pn;

    for(int i = 0; i<=4;i++){
        printf("N[%d| = \t",i);
        scanf("%d",&n[i]);
    }

    for(int j = 1; j<=5; j++){
        printf("n[%d]=|%d|\n",j,n[5]*2);
    }

    return 0;
}





/*MAIN E09
int main(){

    float n[3][3];

    for(int i = 0; i<=2;i++){
        for(int j = 0; j<=2; j++){
            printf("&n[%d][%d] = |%d|\n",i,j,&n[i][j]);
        }
    }
    return 0;
}
*/
/*MAIN E08
int main(){

    float n1[10];

    for(int i = 0; i<= 9; i++){
        printf("n1[%d]\t &n1[%d] = |%d|\n",i,i,&n1[i]);
    }
    return 0;
}
*/

/*MAIN E07
int main(){

    int a,b;
    printf("DIGITE 2 VALORES:\n");
    scanf("%d %d",&a,&b);

    soma_2(&a,&b);

    printf("A = |%d|\tB = |%d|\n",a,b);


    return 0;
}
*/

/*MAIN E06
int main(){

    int a,b;
    printf("DIGITE 2 VALORES:\n");
    scanf("%d %d",&a,&b);

    soma_d(a,b);

    return 0;
}
*/

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