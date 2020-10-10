#include <stdio.h>

union numeros{
    int num1, num2, num3, num4, num5;//20 bytes
}n;



int main(){

    int soma = 0;

    n.num1 = 1;
    soma = soma + n.num1;
    printf("\nO valor de num1 eh : %d\n",n.num1);

    n.num2 = 3;
    soma = soma + n.num2;
    printf("\nO valor de num2 eh : %d\n",n.num2);

    n.num3 = 5;
    soma = soma + n.num3;
    printf("\nO valor de num3 eh : %d\n",n.num3);

    n.num4 = 7;
    soma = soma + n.num4;
    printf("\nO valor de num4 eh : %d\n",n.num4);

    n.num5 = 9;
    soma = soma + n.num5;
    printf("\nO valor de num5 eh : %d\n",n.num5);

    printf("\nO valor de num1 eh : %d\n",n.num1);
    printf("\nO valor de num2 eh : %d\n",n.num2);
    printf("\nO valor de num3 eh : %d\n",n.num3);
    printf("\nO valor de num4 eh : %d\n",n.num4);
    printf("\nO valor de num5 eh : %d\n",n.num5);

    printf("\n'n' esta ocupando %ld bytes de memoria.\n",sizeof(n));
    printf("\n'soma' esta ocupando %ld bytes de memoria.\n",sizeof(soma));

    printf("\nSoma = %d\n",soma);

    printf("\nMemoria total ocupada %ld\n",(sizeof(n) + sizeof(soma)));


    printf("\n");
    printf("\n");
    return 0;
}