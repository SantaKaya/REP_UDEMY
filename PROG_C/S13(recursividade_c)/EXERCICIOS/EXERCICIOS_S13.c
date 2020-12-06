#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include "funcao.h"


///////////////////////// QUESTOES//////////////////////////////////////








/*MAIN E10
int main(){

    int n,r;
    printf("digite n:\t");
    scanf("%d",&n);

    if(n%2!=0){
        printf("digite um numero par:\t");
        scanf("%d",&n);
        
    }


    for(int i = n; i>=0;i--){
        r = par_ord_d(i);
        if(r!=0){
            printf("|%d|\n",r);
        }
        
    }
    return 0;
}
*/

/*MAIN E09
int main(){

    int n,r;
    printf("digite n:\t");
    scanf("%d",&n);

    if(n%2!=0){
        printf("digite um numero par:\t");
        scanf("%d",&n);
        
    }

    for(int i = 0; i<=n;i++){
        r = par_ord_d(i);
        if(r!=0){
            printf("|%d|\n",r);
        }
        
    }
    return 0;
}
*/

/*MAIN E08
int main(){


    int n = 6,r;

    for(int i = n; i>=0;i--){
        r = ord_decres(i);
        printf("|%d|\n",r);
    }
    return 0;
}
*/

/*MAIN E07
int main(){


    int n = 6,r;

    for(int i = 0; i<=n;i++){
        r = ord_cres(i);
        printf("|%d|\n",r);
    }
    return 0;
}
*/

/*MAIN E06
int main(){

    int n1,n2;

    printf("DIGITE 2 NUMEROS[N1XN2]:\t");
    scanf("%d %d",&n1,&n2);

    int r = multip_rec(n1,n2);

    printf("SOMA MULT [ %d x %d] = |%d|\n",n1,n2,r);

    return 0;
}
*/


/*MAIN E05
int main(){

    int n = 12;

    for(int i = 0; i<=n;i++){
        printf("|%d|\n",fibbo(i));
        
    }
    return 0;
}
*/


/*MAIN E04
int main(){

    int k = 3,n = 4;

    int r = exponencial_kn(k,n);

    printf("|%d|^|%d| = |%d|\n",k,n,r);
    return 0;
}
*/

/*MAIN E03
int main(){

    int n, r;

    printf("DIGITE UM NUMERO:\t");
    scanf("%d",&n);

    for(int i = 1; i<=n;i++){
        r = soma_n(i);
    }

    printf("SOMA |%d| = |%d|\n",n,r);

    return 0;
}
*/

/*MAIN E02
int main(){

    int n, r;

    printf("DIGITE UM NUMERO:\t");
    scanf("%d",&n);

    for(int i = 1; i<=n;i++){
        r = fat(i);
    }
    printf("FATORIAL |%d| = |%d|\n",n,r);


    return 0;
}
*/



/*MAIN E01
int main(){

    int n,r;

    printf("DIGITE UM NUMERO:\t");
    scanf("%d",&n);

    for(int i = 1; i<=n;i++){
        r = soma(i);
    }
    printf("SOMA = |%d|\n",r);

    return 0;
}
*/