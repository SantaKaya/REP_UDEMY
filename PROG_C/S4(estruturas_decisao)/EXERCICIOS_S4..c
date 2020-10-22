#include <stdio.h>
#include <stdlib.h>
#include <math.h>



//////////////////////////QUESTOES/////////////////////////////////////////

/*MAIN E09
int main(){

    float sal_t, val_emp;

    printf("Digite o salario do trabalhador e o valor da prestação de um emprestimo:\n");
    scanf("%f %f", &sal_t, &val_emp);

    int a = sal_t*0.2;

    if ( val_emp > a){
        printf("Emprestimo nao concedido.\n");
    }else{
        printf("Emprestimmo Concedido.\n");
    }
    return 0;
}
*/


/*MAIN E08
int main(){
    printf("\n*******************************************************\n");

    float n1, n2;

    printf("Digite as notas:\n");
    scanf("%f %f", &n1, &n2);

    if(n1 >= 0.0 && n1 <= 10.0){
        printf("Media = %.2f",(n1+n2)/2);
    }else{
        printf("Nota Nao possui valor valido!\n");
    }

    printf("\n*******************************************************\n");
    return 0;
}
*/


/*MAIN E07
int main(){
    printf("\n*******************************************************\n");

    int n1, n2;

    printf("Digite dois numeros:\n");
    scanf("%d %d", &n1, &n2);

    if(n1 == n2){
        printf("Numeros Iguais.\n");
    }else if(n1 > n2){
        printf("MAIOR %d", n1);
    }else{
        printf("MAIOR %d", n2);
    }

    printf("\n*******************************************************\n");
    return 0;
}
*/

/*MAINE 06
int main(){
    printf("\n*******************************************************\n");

    int n1, n2;

    printf("Digite dois numeros:\n");
    scanf("%d %d", &n1, &n2);

    if(n1 > n2){
        printf("MAIOR %d\nDiferenca = %d\n", n1, n1-n2);
    }else{
        printf("MAIOR %d\nDiferenca = %d\n", n2, n2-n1);
    }

    printf("\n*******************************************************\n");
    return 0;
}
*/

/*MAIN E05
int main(){
    printf("\n*******************************************************\n");

    int num;

    printf("Digite um numero inteiro:\n");
    scanf("%d",&num);

    if(num % 2 == 0){
        printf("Numero PAR!");
    }else{
        printf("Numero IMPAR!");
    }


    printf("\n*******************************************************\n");

}
*/

/*MAIN E04
int main(){
    printf("\n*******************************************************\n");

    int num;

    printf("Digite um numero:\n");
    scanf("%d",&num);

    int a = num / 2;
    printf("%d",a);

    if(num / 2 > 0){
        printf("O numero %d ao quadrado = %d\n", num, num*num);
        
    }else{
        printf("A raiz quadrada do numero %d = %.2f",num, sqrt(num));
    }



    printf("\n*******************************************************\n");
    return 0;
}
*/

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