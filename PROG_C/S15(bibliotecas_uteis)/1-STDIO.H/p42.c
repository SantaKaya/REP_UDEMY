#include <stdio.h>



int main(){

    int num1, num2, soma;

    printf("Informe o numero 1:\n");
    fflush(stdout);
    scanf("%d",&num1);

    printf("Informe o numero 2:\n");
    fflush(stdout);
    scanf("%d",&num2);

    soma = num1 + num2;

    printf("A soma eh: %d\n", soma);

    return 0;
}