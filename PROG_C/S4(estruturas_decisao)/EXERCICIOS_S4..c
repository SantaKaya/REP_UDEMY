#include <stdio.h>
#include <stdlib.h>
#include <math.h>



//////////////////////////QUESTOES/////////////////////////////////////////

// MAIN E11
int main(){
    printf("\n*******************************************************\n");

    int num;

    printf("Digite um numero inteiro:\n");
    scanf("%d",&num);

    if(num > 0){
        if(num > 10){//12
            int a = num / 10;//1
            printf("a = %d\n",a);
            int b = num % 10;//2
            printf("b = %d\n",b);
            printf("Soma = %d", a + b);

        }else if(num >= 100 && num < 999){//234
            int a = num/1000;//2
            printf("a = %d\n",a);
            int b = num % 100;//34
            printf("b = %d\n",b);
            int c = b / 10;//3
            printf("c = %d\n",c);
            int d = b % 10;//4
            printf("d = %d\n",d);

            printf("Soma = %d",a + c + d);
        }else if(num > 1000){//1234

            int a = num / 1000;//1
            printf("a = %d\n",a);
            int b = num % 1000;//234
            printf("b = %d\n",b); 
            int c = b / 100;//2
            printf("c = %d\n",c);
            int d = b % 100;//34
            printf("d = %d\n",d);
            int e = d / 10;//3
            printf("e = %d\n",e);
            int f = d % 10;//4
            printf("d = %d\n",d);

            printf("Soma = %d", a + c + e + f);
        }
    }else{
        printf("Numero invalido");
    }

    printf("\n*******************************************************\n");
    return 0;
}







/*MAIN E10
int main(){
    printf("\n*******************************************************\n");
    
    float alt;
    char sexo;


    printf("Digite a altura e o sexo:(-1 para sair)\n");
    scanf("%f %c", &alt, &sexo);

    switch (sexo)
    {
    case 'f':
        printf("Peso ideal = %.2f", ((62.1 * alt) - 44.7));
        break;
    case 'm':
        printf("Peso ideal = %.2f",((72.7 * alt ) - 58));
        break;
    
    default:
        printf("Valor invalido!\n");
        break;
    }
    printf("\n*******************************************************\n");
    return 0;
}
*/


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