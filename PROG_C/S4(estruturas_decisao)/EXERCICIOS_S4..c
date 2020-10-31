#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>



//////////////////////////QUESTOES/////////////////////////////////////////

//MAIN E25
int main(){
    printf("\n*******************************************************\n");





    printf("\n*******************************************************\n");
    return 0;
}



/*MAIN E24
int main(){
    printf("\n*******************************************************\n");

    float val_prod, total;
    int est;

    printf("Digite o valor e o estado do produto:\n");
    printf("1 - MG:\n");
    printf("2 - SP:\n");
    printf("3 - RJ:\n");
    printf("4 - MS:\n");
    scanf("%f %d", &val_prod, &est);

    switch(est){
        case 1:
            total = val_prod + (val_prod * 0.07); 
            printf("Valor Total = %.2f",total);
            break;
        case 2:
            total = val_prod + (val_prod * 0.12);
            printf("Valor Total = %.2f", total);
            break;
        case 3:
            total = val_prod + (val_prod * 0.15);
            printf("Valor Total = %.2f", total);
            break;
        case 4:
            total = val_prod + (val_prod * 0.08);
            printf("Valor Total = %.2f",total);
            break;
        default:
            printf("Estado Invalido!\n");
    }
    printf("\n*******************************************************\n");
    return 0;
}
*/

/*MAIN E23
int main(){
    printf("\n*******************************************************\n");

    int ano;
    printf("Digite um ano:\n");
    scanf("%d", &ano);

    int div = ano % 4;
    int div2 = ano % 100;

    if(div2 == 0){
        printf("Ano não bissexto");
    }else if(div == 0){
        printf("Ano Bissexto!");
    }else{
        printf("Ano nao bissexto!");
    }

    printf("\n*******************************************************\n");
    return 0;
}
*/

/*MAIN E22
int main(){
    printf("\n*******************************************************\n");

    int id, temp_serv;

    printf("Digite sua idade e tempo de servico:\n");
    scanf("%d %d", &id, &temp_serv);

    if(id >= 65){
        printf("Apto para Aposentadoria!\n");
    }else if(temp_serv >= 30){
        printf("Apto para Aposentadoria!\n");
    }else if(id >= 60 && temp_serv >= 25){
        printf("Apto para Aposentadoria!\n");
    }else{
        printf("Nao Apto para Aposentadoria!\n");
    }

    printf("\n*******************************************************\n");
    return 0;
}
*/

/*MAIN E21
int main(){
    printf("\n*******************************************************\n");

    int op;
    int n1, n2;


    printf("1 - Soma de 2 numeros:\n");
    printf("2 - Diferenca entre 2 numeros (maior pelo menor):\n ");
    printf("3 - Produto entre 2 numeros:\n");
    printf("4 - Divisao entre 2 numeros:\n");
    printf("Opcao:\n");
    scanf("%d",&op);

    switch(op){
        case 1:
            
            printf("Digite 2 numeros:\n");
            scanf("%d %d", &n1, &n2);
            int soma = n1 + n2;
            printf("%d + %d = %d", n1, n2, soma);
            break;

        case 2:
            
            printf("Digite dois numeros:\n");
            scanf("%d %d", &n1, &n2);
            if(n1 > n2){
                int dif = n1 - n2;
                printf("%d - %d = %d", n1, n2, dif);
            }else{
                int dif = n2 - n1;
                printf("%d - %d = %d",n2, n1, dif);
            }
            break;
        case 3:
            
            printf("Digite 2 numeros:\n");
            scanf("%d %d", &n1, &n2);
            int prod = n1 *n2;
            printf("%d * %d = %d", n1, n2, prod);
            break;

        case 4:
            
            printf("Digite 2 numeros:\n");
            scanf("%d %d", &n1, &n2);

            if(n2 == 0){
                printf("Opcao invalida\n");
            }else{
                float div = n1/n2;
                printf("%d / %d = %.2f\n", n1, n2, div);

            }
            break;
        default:
            printf("\nOpcao invalida");
    }

    printf("\n*******************************************************\n");
    return 0;
}
*/

/*MAIN E20
int main(){
    printf("\n*******************************************************\n");
    int l1,l2,l3;

    printf("Digite os possiveis lados do triangulo:\n");
    scanf("%d %d %d", &l1, &l2, &l3);

    int somal1 = l2 + l3;
    int somal2 = l1 + l3;
    int somal3 = l1 + l2;

    //verificação lado
    if (l1 > somal1){
        printf("l1 nao eh um lado do triangulo.");
    }else if(l2 > somal2){
        printf("l2 nao eh um lado do triangulo");
    }else if(l3 > somal3){
        printf("l3 nap eh um lado do triangulo");
    }
    
    //verificação equilatero

    if(l1 == l2){
        if(l2 == l3){
            printf("Triangulo Equilatero!\n");
        }
    }

    // verificação isoceles
    if( l1 == l2 && l1 != l3){
        printf("Triangulo Isoceles!\n");
    }else if(l2 == l3 && l2 != l1){
        printf("Triangulo Isoceles!\n");
    }

    //verificação escaleno
    if(l1 != l2 && l2 !=l3){
        printf("triangulo Escaleno");
    }

    printf("\n*******************************************************\n");
    return 0;
}
*/

/*MAIN E19
int main(){
    printf("\n*******************************************************\n");

    int num;

    printf("Digite um numero:\n");
    scanf("%d",&num);

    if(num < 99){
        int a = num / 10;//valor1 
        int b = num % 10;//valor 2
        int soma = a + b;
        //printf("soma = %d\n",soma);
        int div_3 = soma % 3;
        //printf("div_3 = %d\n",div_3);

        if(b == 0 || b == 5){
            if(div_3 == 0){
                printf("\nNumero divisivel por 3 e 5.");
            }else{
                printf("\nNumero divisivel por 5!\n");
            }
        }else if(div_3 == 0){
            printf("\nNumero divisivel por 3!\n");
        }else{
            printf("\nNao divide nem por 3 nem por 5");
        }
    }

    if(num >= 100 && num < 999){
        int a = num / 100;//valor1 
        int b = num % 100;//valor 2 e 3
        int c = b / 10; // valor 2
        int d = b % 10; // valor 3
        int soma = a + c + d;
        //printf("soma = %d\n",soma);
        int div_3 = soma % 3;
        //printf("div_3 = %d\n",div_3);

        if(d == 0 || d == 5){
            if(div_3 == 0){
                printf("\nNumero divisivel por 3 e 5.");
            }else{
                printf("\nNumero divisivel por 5!\n");
            }
        }else if(div_3 == 0){
            printf("\nNumero divisivel por 3!\n");
        }else{
            printf("\nNao divide nem por 3 nem por 5");
        }
    }

    if(num >= 1000 && num < 9999){
        int a = num / 1000;//valor1 
        int b = num % 1000;//valor 2 3 4
        int c = b / 100; // valor 2
        int d = b % 100; // valor 3 4
        int e = d / 10;//valor 3
        int f = d % 10; //valor 4
        int soma = a + c + e + f;
        //printf("soma = %d",soma);
        int div_3 = soma % 3;
        //printf("div_3 = %d\n",div_3);
        if(f == 0 || f == 5){
            if(div_3 == 0){
                printf("\nNUmero divisivel por 3 e 5.");
            }else{
                printf("\nNUmero divisivel por 5!\n");
            }
        }else if(div_3 == 0){
            printf("\nNumero divisivel por 3!\n");
        }else{
            printf("\nNao divide nem por 3 nem por 5");
        }
    }

    

    printf("\n*******************************************************\n");
    return 0;
}
*/

/*MAIN E18
int main(){
    printf("\n*******************************************************\n");

    int num, n1, n2;

    printf("1 - SOMA:\n");
    printf("2 - subtração\n");
    printf("3 - multiplicação\n");
    printf("4 - divisao\n");

    scanf("%d",&num);

    switch(num){

        case 1:
            printf("Digite 2 valores:\n");
            scanf("%d %d", &n1, &n2);

            int soma = (n1 + n2);
            printf("%d + %d = %d", n1, n2, soma);
            break;

        case 2 :
            printf("Digite 2 valores:\n");
            scanf("%d %d", &n1, &n2);

            int sub = (n1 - n2);

            printf("%d - %d = %d", n1, n2, sub);
            break;
        case 3 :
            printf("Digite 2 valores:\n");
            scanf("%d %d", &n1, &n2);

            int mult = (n1 * n2);

            printf("%d * %d = %d", n1, n2, mult);
            break;
        case 4 :
            printf("Digite 2 valores:\n");
            scanf("%d %d", &n1, &n2);

            float div = ((float)n1 / (float)n2);
            
            printf("%d / %d = %.2f\n", n1, n2, div);
            break;
    }

    printf("\n*******************************************************\n");
    return 0;
}
*/

/* MAIN E17

int main(){
    printf("\n*******************************************************\n");

    float b_M, b_m, alt;

    printf("Digite a Base Maior, Base Menor e a Altura:\n");
    scanf("%f %f %f", &b_M, &b_m, &alt);

    while(b_M > 0 && b_m > 0){
        float area = ((b_M + b_m)*alt)/2;
        printf("Area do trapezio = %.2f", area);
        break;
    }

    printf("\n*******************************************************\n");
    return 0;
}
*/

/*MAIN E16

int main(){
    printf("\n*******************************************************\n");

    int num;

    printf("Digite um numero:\n");
    scanf("%d",&num);
    
    switch(num){
        case 1:
            printf("Janeiro!\n");
            break;
        case 2:
            printf("Fevereiro!\n");
            break;
        case 3:
            printf("Marco!\n");
            break;
        case 4:
            printf("Abril!\n");
            break;
        case 5:
            printf("Maio!\n ");
            break;
        case 6:
            printf("Junho!\n");
            break;
        case 7:
            printf("Julho!\n");
            break;
        case 8:
            printf("Agosto!\n");
            break;
        case 9:
            printf("Setembro!\n");
            break;
        case 10:
            printf("Outubro!\n");
            break;
        case 11:
            printf("Novembro!\n");
            break;
        case 12:
            printf("Dezembro!\n");
            break;
    }

    printf("\n*******************************************************\n");

    return 0;
}
*/

/*MAIN E15
int main(){
    printf("\n*******************************************************\n");

    int num;

    printf("Digite um numero inteiro:\n");
    scanf("%d",&num);

    switch (num)
    {
    case 1:
        printf("Domingo!\n");
        break;
    case 2:
        printf("Segunda!");
        break;
    case 3:
        printf("Terca!\n");
        break;
    case 4:
        printf("Quarta!");
        break;
    case 5:
        printf("Quinta!\n");
        break;
    case 6:
        printf("Sexta!\n");
        break;
    case 7:
        printf("Sabado!\n");
        break;
    }
    printf("\n*******************************************************\n");
    return 0;
}
*/

/*MAIN E14
int main(){
    printf("\n*******************************************************\n");

    float n1, n2, n3;

    printf("Digite as notas:\n");
    scanf("%f %f %f", &n1, &n2, &n3);

    float med_p = (((n1* 2) + (n2 * 3) + (n3 * 5)) / 10);

    if(med_p < 2.9){
        printf("Aluno reprovado\nMedia = %.2f", med_p);
    }else if(med_p <= 4.99){
        printf("Aluno na Recuperacao!\nMedia = %.2f",med_p);
    }else if(med_p > 4.9){
        printf("Aluno aprovado!\nMedia = %.2f", med_p);
    }

    printf("\n*******************************************************\n");
    return 0;
}
*/

/*MAIN E13
int main(){
    printf("\n*******************************************************\n");

    float n1,n2,n3;

    printf("Digite as notas:\n");
    scanf("%f %f %f", &n1, &n2, &n3);

    float med_p = ((n1 * 1) + (n2 * 1) + (n3 * 2))/(1+1+2);

    if(med_p < 60){
        printf("Media = %.2f\nREPROVADO",med_p);
    }else{
        printf("Media = %.2f\n Aprovado",med_p);
    }

    printf("\n*******************************************************\n");
    return 0;
}
*/

/*MAIN E12
int main(){
    printf("\n*******************************************************\n");

    int num;

    printf("Digite um numero:\n");
    scanf("%d",&num);

    double x = log(num);

    if( num < 0){
        printf("Numero invalido!\n");
    }else{
        printf("Logaritmo natural de %d = %lf", num, x);
    }

    printf("\n*******************************************************\n");
    return 0;
}
*/

/*MAIN E11

int main(){
    printf("\n*******************************************************\n");

    int num, soma;

    printf("Digite um numero inteiro:\n");
    scanf("%d",&num);


    if(num > 0){

        if( num <= 99){
            soma = (num / 10) + (num % 10);
            printf("Soma = %d", soma);
        }

        if( num >= 100 && num <= 999){

            soma = (num / 100) + ((num%100)/10) + ((num % 100) % 10);
            printf("Soma = %d", soma);

        }

        if(num > 999){
            soma = (num / 1000) + ((num%1000)/100) + (((num % 1000) % 100) / 10) + (((num % 1000) % 100) % 10);

            printf("Soma = %d", soma);
            

        }

    }else{
        printf("Numero invalido.");
    }

    printf("\n*******************************************************\n");
    return 0;
}

*/

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