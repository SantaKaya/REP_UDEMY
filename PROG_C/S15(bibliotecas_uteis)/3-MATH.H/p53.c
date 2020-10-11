#include <stdio.h>
#include <math.h>


int main(){
    printf("\n");

    int angulo = 45;

    float res = cosh(angulo);
    printf("O cosseno hiperbolico de %d eh %f\n", angulo, res);

    float res1 = sinh(angulo);
    printf("O seno hiperbolico de %d eh %f\n", angulo, res1);

    float res2 = tanh(angulo);
    printf("A tangente hiperbolica de %d eh %f\n", angulo, res2);
    
    printf("\n");
    printf("\n");
    return 0;
}