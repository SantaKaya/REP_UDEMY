#include <stdio.h>
#include <math.h>


int main(){
    printf("\n");

    double a = 4.67891;

    printf("O valor %lf arredondado(cima) eh : %lf\n", a, ceil(a));

    printf("O valor %lf arredondado(baixo) eh : %lf\n", a, floor(a));


    printf("\n");
    printf("\n");
    return 0;
}