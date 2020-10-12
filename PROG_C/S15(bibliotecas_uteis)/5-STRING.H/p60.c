#include <stdio.h>
#include <string.h>



int main(){

    char str1[20], str2[20];

    strcpy(str1, "Laranja");
    strcpy(str2, "laranja");


    if(strcmp(str1, str2)){
        printf("Nao sao iguais");// se for diferente.
    }else{
        printf("Sao iguais.");
    }

    

    

    return 0;
}