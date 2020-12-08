#include <stdio.h>
#include <stdlib.H>
#include <math.h>
#include "ajuda.h"
#include <string.h>



///////////////////// QUESTOES /////////////////







/*MAIN E10
int main(){

    int qtd;
    double *p,a;

    printf("QUATIDADE DE ELEMENTOS DO VETOR\nDIGITE :\t");
    scanf("%d",&qtd);
    if(qtd<10){
        printf("TAMANHO VETOR MAIOR OU IGUAL A 10!\t REPITA!");
        
        printf("QUATIDADE DE ELEMENTOS DO VETOR\nDIGITE :\t");
        scanf("%d",&qtd);
    }

    p = malloc(qtd*sizeof(double));

    srand( (unsigned)time(NULL) );

    for(int i = 0; i<10;i++){
        a = rand() % 101 ;
        
        p[i] = a;
        printf("p[%d] = |%.4lf|\n",i,p[i]);
    }

    free(p);
    p = NULL;
    return 0;
}
*/


/*MAIN E09
int main(){

    int qtd = 0, *p,num;

    printf("NUMEROS\nDIGITE :\t");
    scanf("%d",&num);
    qtd++;
    
    p = malloc(qtd*sizeof(int));

    if(p){
        do{

        p[qtd-1]=num;

        printf("NUMEROS\nDIGITE :\t");
        scanf("%d",&num);
        qtd++;

        p = realloc(p,qtd * sizeof(int));

        if(p){
            do{
                p[qtd-1]=num;

                printf("NUMEROS\nDIGITE :\t");
                scanf("%d",&num);
                qtd++;

                p = realloc(p,qtd * sizeof(int));
            }while(num>0);
        }

        }while(num>0);

    }else{
        printf("\nErro: Memoria insuficiente!!!\n");
    }

    for(int j = 0; j<qtd-1;j++){
        printf("p[%d] = |%d|\n",j,p[j]);
    }

    free(p);
    p = NULL;
    return 0;
}
*/





/*MAIN E 08
int main(){

    int num = 1500,cont = 0;
    int *n;

    n = calloc(num,sizeof(int));

    for(int i = 0; i<num;i++){
        if(n[i]==0){
            cont++;
        }
    }
    printf("CONT = |%d|\n",cont);

    for (int j = 0; j < num; j++){
        n[j]=j;
    }
    
    for (int t = 0; t < 10; t++)
    {
        printf("n[%d] = |%d|\n",t,n[t]);
    }
    for (int v = num-10; v <num; v++)
    {
        printf("n[%d] = |%d|\n",v,n[v]);
    }

    free(n);
    n = NULL;
    return 0;
}
*/




/*MAIN E07
int main(){

    int num_lot[6],num_bil[6],qtd=0;
    int *p;

    for(int i = 0; i<=5;i++){
        printf("NUMERO LOTERIA |%d|\nDIGITE :\t",i);
        scanf("%d",&num_lot[i]);
    }

    for(int j = 0; j<=5;j++){
        printf("NUMERO BILHETE |%d|\nDIGITE :\t",j);
        scanf("%d",&num_bil[j]);
        for(int k = 0; k<=5;k++){
            if(num_bil[j]==num_lot[k]){
                qtd++;
            }
        }
    }

    p = malloc(qtd*sizeof(int));
               
    for(int f = 0; f<=5;f++){
        for(int g = 0; g<=5;g++){
            if(num_bil[f]==num_lot[g]){
                p[f]= num_lot[g];
            }
        }
    }


    printf("\n\n[===== |SORTEADOR E ACERTOS| =====]\n\n");

    printf("NUMEROS LOT -> ");
    for(int X = 0; X<=5;X++){
        printf("|%d|\t",num_lot[X]);
    }   

    printf("\n");
    printf("NUMEROS SORT -> ");
    for(int t = 0; t<qtd;t++){
        printf("|%d|\t",p[t]);
    }


    free(p);
    p = NULL;
    return 0;
}
*/




/*MAIN E06
int main(){

    int qtd,op,pos,val;
    int *p = NULL;

    printf("QUANTIDADE DE ELEMENTOS\nDIGITE :\t");
    scanf("%d",&qtd);

    p = vetor_alocado2(qtd);

    do{
        printf("\n\t[===== [MENU] =====]\t\n");
        printf("\n[1] - INSERIR VALOR EM POSICAO\n\n[2] - CONSULTAR VALOR EM POSICAO\n\n[0] - SAIR\n\nDIGITE :\t");
        scanf("%d",&op);
        
        printf("\n\n=============================================\n\n");
        switch (op){
            case 1:
                printf("VET -> ");
                for(int i = 0; i<qtd; i++){
                    printf("[%d]\t",p[i]);
                }
                printf("\n");

                printf("POS -> ");
                for(int J = 0; J<qtd; J++){
                    printf("[%d]\t",J);
                }
                printf("\n");

                printf("DIGITE A POSICAO E O VALOR :\n");
                scanf("%d %d",&pos,&val);
                p[pos]=val;

                printf("VET -> ");
                for(int L = 0; L<qtd; L++){
                    printf("[%d]\t",p[L]);
                }
                printf("\n");

                printf("POS -> ");
                for(int O = 0; O<qtd; O++){
                    printf("[%d]\t",O);
                }
                printf("\n");


                break;
            case 2:
                printf("\n|CONSULTA DE VALOR|\n");
                printf("DIGITE A POSICAO:\n");
                scanf("%d",&pos);
                printf("P[%d] = |%d|\n",pos,p[pos]);
                break;
        }
    }while(op!=0);
    printf("\n[===== |PROGAMA ENCERRADO| =====]\n");

    free(p);
    p = NULL;
    return 0;
}
*/




/*MAIN E05
int main(){

    int qtd,x,mult = 0;
    int *p = NULL;

    printf("QUANTIDADE DE ELEMENTOS\nDIGITE :\t");
    scanf("%d",&qtd);

    p = vetor_alocado_dig(qtd);
    
    printf("DIGITE UM NUMERO:\n");
    scanf("%d",&x);


    for (int k = 0; k < qtd; k++){

        if(p[k]%x==0){
            mult++;
            printf("p[%d]= |%d|\n",k,p[k]);
        }
    }
   printf("QTD MULTIPLOS = |%d|",mult);
        


    free(p);
    p = NULL;
    return 0;
}
*/

/*MAIN E04
int main(){

    int qtd;
    char *p = NULL;

    printf("QUANTIDADE DE ELEMENTOS\nDIGITE :\t");
    scanf("%d",&qtd);

    p = alocacao(qtd);
    
    if(p){
        printf("INFORME A STRING :\n");
        scanf(" %[^\n]s",p);
    }


    for (int i = 0; i < qtd && p[i]!='\0'; i++)
    {
        
        if(p[i] != 'a' && p[i]!='e' && p[i]!='i' && p[i]!='o' && p[i]!='u'){
            printf("%c",p[i]);
        }
    }

    free(p);
    p = NULL;
    return 0;
}
*/


/*MAIN E03
int main(){

    int qtd, *p;
    qtd_PI r;

    printf("QUANTIDADE DE ELEMENTOS\nDIGITE :\t");
    scanf("%d",&qtd);

    r.par=0;
    r.im =0;

    p = (int*)malloc(qtd*sizeof(int));

    if(p){
        for(int i = 0; i<qtd;i++){
            printf("Informe o valor para a posicao %d do vetor:\t",i);
            scanf("%d",&p[i]);
            printf("\n");
            
            if(p[i]%2==0){
                r.par++;
            }else{
                r.im++;
            }
            
        }
    }
    

    printf("MEMORIA TOTAL p[]= |%d| BYTES\n",qtd*sizeof(int));

    printf("QTD PAR = |%d|\nQTD IMPAR = |%d|\n",r.par,r.im);

    free(p);
    p = NULL;
    return 0;
}
*/



/*MAIN E02
int main(){


    int qtd, *p;

    printf("QUANTIDADE DE ELEMENTOS\nDIGITE :\t");
    scanf("%d",&qtd);

    p = (int*)malloc(qtd*sizeof(int));

    if(p){
        for(int i = 0; i<qtd;i++){
            printf("Informe o valor para a posicao %d do vetor:\t",i);
            scanf("%d",&p[i]);
            printf("\n");
        }
    }

    for (int j = 0; j < qtd; j++){
        printf("P[%d] = |%d|\t TM = |%d| BYTES\n",j,p[j],sizeof(p[j]));
    }
    printf("MEMORIA TOTAL p[]= |%ld| BYTES\n",qtd*sizeof(int));



    free(p);
    p = NULL;
    return 0;
}
*/


/*MAIN E01
int main(){

    int qtd=5, *p;

    p = (int*)malloc(qtd*sizeof(int));
    
    if(p){
        for(int i = 0; i<qtd;i++){
            printf("Informe o valor para a posicao %d do vetor:\t",i);
            scanf("%d",&p[i]);
            printf("\n");
        }
    }

    for (int j = 0; j < qtd; j++){
        printf("P[%d] = |%d|\t TM = |%d| BYTES\n",j,p[j],sizeof(p[j]));
    }
    printf("MEMORIA TOTAL p[]= |%ld| BYTES\n",qtd*sizeof(int));

    free(p);
    p=NULL;
    return 0;
}
*/