#include <stdio.h>
#include <stdlib.h>



//MAIN E02
int main(){

    int cont = 1,cont2 = 1;

    for(int i=1; i<=100; i++){
        printf("PRINTANDO COM FOR -> %d\n",i);
    }

    while(cont <= 100){
        printf("PRINTANDO COM WHILE -> %d\n",cont);
        cont++;
    }

    do{
        printf("PRINTANDO DO..WHILE -> %d\n",cont2);
        cont2++;
    }while(cont2 <=100);    


    return 0;
}