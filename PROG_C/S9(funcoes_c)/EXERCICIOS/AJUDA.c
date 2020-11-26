#include <stdio.h>
#include <stdlib.H>
#include <math.h>



////////////////////////// FUNÇÕES////////////////////////////////////

//DATA POR EXTENSO

int data(int d, int m, int a){
    printf("\nDIGITE A DATA:\t");
    scanf("%d",&d);
    printf("\nDIGITE A MES:\t");
    scanf("%d",&m);
    printf("\nDIGITE A ANO:\t");
    scanf("%d",&a);

    switch (m){
        case 1:
            printf("\n|%d| DE JANEIRO DE |%d|\n ",d,a);
            break;
        case 2:
            printf("\n|%d| DE FEVEREIRO DE |%d|\n ",d,a);
            break;
        case 3:
            printf("\n|%d| DE MARCO DE |%d|\n ",d,a);
            break;
        case 4:
            printf("\n|%d| DE ABRIL DE |%d|\n ",d,a);
            break;
        case 5:
            printf("\n|%d| DE MAIO DE |%d|\n ",d,a);
            break;
        case 6:
            printf("\n|%d| DE JUNHO DE |%d|\n ",d,a);
            break;
        case 7:
            printf("\n|%d| DE JULHO DE |%d|\n ",d,a);
            break;
        case 8:
            printf("\n|%d| DE AGOSTO DE |%d|\n ",d,a);
            break;
        case 9:
            printf("\n|%d| DE SETEMBRO DE |%d|\n ",d,a);
            break;
        case 10:
            printf("\n|%d| DE OUTUBRO DE |%d|\n ",d,a);
            break;
        case 11:
            printf("\n|%d| DE NOVEMBRO DE |%d|\n ",d,a);
            break;
        case 12:
            printf("\n|%d| DE DEZEMBRO DE |%d|\n ",d,a);
            break;
    }

}


//DOBRO DO NUMERO
int dobro(int num){
    int dob = num*num;
    return dob;
}