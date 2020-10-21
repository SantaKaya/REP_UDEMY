#include <stdio.h>
#include <stdlib.h>
#include <math.h>



//////////////////////////QUESTOES/////////////////////////////////////////

//MAIN E04
int main(){
    printf("\n*******************************************************\n");

    int num;

    printf("Digite um numero:\n");
    scanf("%d",&num);

    if(num % 2 == 0){
        printf("O numero %d ao quadrado = %d\n", num, num*num);
        
    }else{
        printf("A raiz quadrada do numero %d = %.2f",num, sqrt(num));
    }



    printf("\n*******************************************************\n");
    return 0;
}


/*MAIN E03
int main(){
    printf("\n*******************************************************\n");

    float n1;

    printf("Digite um numero real:\n");
    scanf("%f",&n1);

    if( n1 / 2 >= 0){
        printf("Raiz Quadrada = %.2f",sqrt(n1));
    }else{
        printf("Numero %.2f ao Quadrado = %.2f", n1, n1*n1);
    }

    printf("\n*******************************************************\n");
    return 0;
}
*/



/*MAIN E02
int main(){
    printf("\n*******************************************************\n");

    int n1;

    printf("Digite um numero:\n");
    scanf("%d",&n1);

    if( n1 / 2  >= 0){
        printf("%.2f",sqrt(n1));
    }else{
        printf("\nNumero invalido.\n");
    }
    printf("\n*******************************************************\n");
    return 0;
}
*/

/*MAIN E01
int main(){
    printf("\n*******************************************************\n");

    int n1,n2;

    printf("Digite 2 numeros:\n");
    scanf("%d %d", &n1, &n2);

    if(n1 > n2){
        printf("Numero %d maior.", n1);
    }else{
        printf("Numero %d maior.",n2);
    }
    printf("\n*******************************************************\n");
    return 0;
}
*/