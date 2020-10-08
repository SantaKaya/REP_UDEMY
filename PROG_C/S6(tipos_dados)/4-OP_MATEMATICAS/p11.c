/*  OPERAÇÕES MATEMATICAS

    SOMAR +
    SUBTRAIR -
    MULTIPLICAR *
    DIVIDIR /
    ELEVAR AO QUADRADO X ** 2 ou x*x
    módulo (resto da divisão de x por y - par/impar) % 

*/

#include <stdio.h>
#include <stdio.h>

int main(){

    //declarando_variaveis
    int num1 = 3, num2 = 7;
    float res;

    //entrada_dados
    printf("num1 = %d\nnum2 = %d\n",num1,num2);

    //processamento_dados
    
    //Soma
    res = num2 + num1;
    printf("num2 + num1 =  %d\n",(int)res);

    //Subtrair
    res = num2 - num1;
    printf("num2 - num1 =  %d\n",(int)res);

    //Multiplicar
    res = num2 * num1;
    printf("num2 * num1 =  %d\n",(int)res);

    //Dividir 
    res = num2 / num1;
    printf("num2 / num1 =  %f\n",res);

    //Dividir 
    res = num1 / num2;
    printf("num1 / num2 =  %f\n",res);

    //Dividir numeros inteiros - CAST
    res = (float)num1 / (float)num2;
    printf("num1 / num2: %f\n",res);




    //Elevar ao Quadrado
    res = num1 ** &num1;
    printf("num1 ** &num1 = %d\n",(int)res);

    //Elevar ao quadrado
    res = num1 * num1;
    printf("num1 * num1 =  %d\n",(int)res);

    //Modulo - 3/2 = 1 && 3%2= 1(o que sobrou)
    res = num2 % num1;
    printf("num2 modulo num1 = %f\n",res);
    
    //Modulo - Verificação PAR ou IMPAR
    if(num1 % 2 == 0){
        printf("num1 = %d eh PAR\n",num1);
    }else{
        printf("num1 = %d eh impar\n",num1);
    }
     if(num2 % 2 == 0){
        printf("num2 = %d eh PAR\n",num2);
    }else{
        printf("num2 = %d eh impar\n",num2);
    }

    //saida_dados



    return 0;
}