#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>


/////////////////// FUNÇÕES/////////////////

void soma_struct( num_complex *n1,num_complex *n2){

    float soma_real, soma_imag;

    soma_real = n1->real + n2->real;
    soma_imag = n1->imag + n2->imag;
   
    printf("\nSOMA = |%.0f + %.0fi|\n",soma_real,soma_imag);

}

void sub_struct(num_complex *n1,num_complex *n2){
    float sub_real,sub_imag;
    sub_real = n1->real - n2->real;
    sub_imag = n1->imag - n2->imag;
    printf("\nSUB = |%.0f + %.0fi|\n",sub_real,sub_imag);
}

void prod_struct(num_complex *n1, num_complex *n2){
    float prod_real,prod_imag;
    prod_real = ((n1->real) * (n2->real)) - ((n1->imag) * (n2->imag));
    prod_imag = ((n1->real) * (n2->imag)) + ((n1->imag) * (n2->real));
    printf("\nPROD = |%.0f + %.0fi|\n",prod_real,prod_imag);
}
void mod_struct(num_complex *n1, num_complex *n2){
    float mod_real1,mod_real2,ax1,ax2;

    ax1 = ((n1->real) * (n1->real)) + ((n1->imag) * (n1->imag));
    ax2 = ((n2->real) * (n2->real)) + ((n2->imag) * (n2->imag));
    printf("ax1 = |%.2f|\tax2 = |%.2f|\n",ax1,ax2);
    
    mod_real1 = sqrt(ax1);
    mod_real2 = sqrt(ax2);

    printf("\nMODULO 1 |%.0f + %.0fi|= |%.2f|\n",n1->real,n1->imag,mod_real1);
    printf("\nMODULO 2 |%.0f + %.0fi|= |%.2f|\n",n2->real,n2->imag,mod_real2);
}
