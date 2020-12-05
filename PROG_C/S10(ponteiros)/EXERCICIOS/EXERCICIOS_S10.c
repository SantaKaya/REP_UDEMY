#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include "help.h"

//////////////////////////////////////QUESTOES//////////////////////////////////////////


//MAIN E25
int main(){




    return 0;
}




/*MAIN E24
int main(){

    int v,min = 999999, max = 1;
    printf("digite o tamanho do array:\t");
    scanf("%d",&v);

    int array[v+1];
    array[0] = v;


    for(int i = 1; i<v+1;i++ ){
        printf("ARRAY VALOR |%d|\nDIGITE:\t ",i);
        scanf("%d",&array[i]);
    }

    min_max(array,&min,&max);
    
    printf("VALOR MINIMO = |%d|\tVALOR MAXIMO = |%d|\n",min,max);

    return 0;
}
*/

/*MAIN E23
int main(){

    int n;
    printf("Digite o tamanho do array:\t");
    scanf("%d",&n);

    int array[n+1];
    array[0] = n;

    for(int i = 1; i<n+1;i++){
        printf("ARRAY VALOR |%d|\nDIGITE:\t",i);
        scanf("%d",&array[i]);
        printf("\n");
    }

    int k;

    printf("DIGITE O VALOR DE K:\t");
    scanf("%d",&k);

    int aux = n;
    int u = 1;

    while(aux>0){
        //printf("aux = |%d|\tu = |%d|\n",aux,u);
        for(int r = 1; r<=n;r++){
            for(int p = 0; p<k;p++){

                printf("array[%d] = |%d|\t",u,array[u]);
                u++;
                aux--;
                if(u%2==0 && u==n){
                    aux = 0;
                    r = n;
                }
            }
            if(u%2!=0 && u==n){
                    printf("\narray[%d] = |%d|\t",u,array[u]);
                    aux = 0;
                    r=n;
            }
            
            printf("\n");
        }
    }

    maior1_array(array);

    printf("MAIOR VALOR DO ARRAY = |%d|\n",array[0]);

    return 0;
}
*/



/*MAIN E22
int main(){

    int n1,n2;

    printf("DIGITE O TAMANHO DO 1 ARRAY :\t");
    scanf("%d",&n1);
    printf("DIGITE O TAMANHO DO 2 ARRAY :\t");
    scanf("%d",&n2);

    int array[n1+1];//5=6

    array[0] = n1;//5

    for(int i = 1; i<n1+1;i++){
        printf("DIGITE O 1 ARRAY:\n");
        scanf("%d",&array[i]);
    }

    int array2[n2+1];
    array2[0] = n2;

    for(int t = 1; t<n2+1;t++){
        printf("DIGITE O 2 ARRAY:\n");
        scanf("%d",&array2[t]);
    }

    soma_2a(array,array2);


    return 0;
}
*/



/*MAIN E21
int main(){

    int array[5],*p;
    p = &array;
    
    for(int i = 0; i<=4;i++){
        array[i]= i+1;
    }
    for(int j = 0; j<=4;j++){
        *p = *p +1;
        p++;
    }
    for(int k = 0; k<=4;k++){
        printf("array [%d] = |%d|\n",k,array[k]);
    }
    return 0;
}
*/



/*MAIN E20
int main(){

    int n;

    printf("Digite o tamanho do array:\t");
    scanf("%d",&n);

    float array[n+1];

    array[0] = n;

    for(int i = 0; i<n;i++){
        printf("DIGITE O ARRAY:\t");
        scanf("%d",&array[i]);
        printf("\n");
    }
    
    negativos(array,n);

    printf("NEGATIVOS = %.0f",array[0]);

    return 0;
}
*/





/*MAIN E19
int main(){

    int n;
    printf("Digite o tamanho do array:\t");
    scanf("%d",&n);

    int array[n+1];

    array[0]=n;

    for(int i = 1; i<n+1;i++){
        printf("Digite o array:\n");
        scanf("%d",&array[i]);
    }
    maior_array(array,&n);

    printf("MAIOR NUMERO = |%d|\tQTD = |%d|\n",array[0],n);

    return 0;
}
*/





/*MAIN E18
int main(){

    float r,area,volume;

    printf("digite o raio:\t");
    scanf("%f",&r);

    calc_esfera(r,&area,&volume);

    printf("AREA = |%.2f|\tVOLUME = |%.2f|\n",area,volume);
    
    return 0;
}
*/

/*MAIN E17
int main(){

    float num,fac;
    int inteiro;

    printf("DIGITE O VALOR REAL:\t");
    scanf("%f",&num);
    frac(num,&inteiro,&fac);

    printf("INTEIRO = |%d|\tFRACAO = |%.2f|\n",inteiro,fac);
    return 0;
}
*/

/*MAIN E16
int main(){

    int a,*b,**c,***d;

    printf("valor a:\t");
    scanf("%d",&a);

    b = &a;
    c = &b;
    d = &c;

    printf("ponteiro b = |%d|\n",(*b)*2);
    printf("ponteiro c = |%d|\n",(**c)*3);
    printf("ponteiro d = |%d|\n",(***d)*4);

    return 0;
}
*/

/*MAIN E15
int main(){

	int n;

	printf("Digite o tamanho do vetor: ");
	scanf("%d", &n);

	int vet[n+1];
	
	vet[0]=n;
    

	for(int i=1 ; i<n+1 ;i++){
        printf("DIGITE O VETOR:\n");
		scanf("%d", &vet[i]);
	}
	printArray(vet);
}
*/


/*MAIN E14
int main(){


    int array[5],val=0;

    for(int i = 0;i<=4;i++){
        printf("DIGITE O %d VALOR DO ARRAY:\t",i);
        scanf("%d",&array[i]);
        val++;
    }

    preenc_array(array,val);

    for(int j = 0;j<=4;j++){
        printf("\narray[%d] = |%d|\n",j,array[j]);
    }
    

    return 0;
}
*/

/*MAIN E13
int main(){
    char string1[100],string2[100];
    printf("DIGITE A PRIMEIRA STRING:\n");
    fgets(string1,100,stdin);
    printf("DIGITE A SEGUNDA STRING:\n");
    fgets(string2,100,stdin);

    int retorno = verifica(string1,string2);
    if(retorno == 1){
        printf("A segunda string esta contida  na primeira string!\n");
    }else{
        printf("A segunda string NAO esta contida na primeira string!\n");
    }

    return 0;
}
*/


/*MAIN E12
int main(){

    int a, b, c;

    printf("DIGITE 3 VALORES:\n");
    scanf("%d %d %d",&a,&b,&c);

    ord_3val(&a,&b,&c);

    printf("\nA = |%d|\t B = |%d|\t C = |%d|\t",a,b,c);

    return 0;
}
*/

/*MAIN E11
int main(){

    int n[5];

    for(int i = 0; i<=4;i++){
        printf("n[%d] = \t",i);
        scanf("%d",&n[i]);
    }

    for(int j = 0; j<=4;j++){
        if(n[j]%2==0){
            printf("&n[%d] = |%d|\n",j,&n[j]);
        }
    }
    return 0;
}
*/

/*MAIN E10
int main(){

    int n[5],*pn;

    for(int i = 0; i<=4;i++){
        printf("N[%d| = \t",i);
        scanf("%d",&n[i]);
    }

    for(int j = 1; j<=5; j++){
        printf("n[%d]=|%d|\n",j,n[5]*2);
    }

    return 0;
}
*/


/*MAIN E09
int main(){

    float n[3][3];

    for(int i = 0; i<=2;i++){
        for(int j = 0; j<=2; j++){
            printf("&n[%d][%d] = |%d|\n",i,j,&n[i][j]);
        }
    }
    return 0;
}
*/
/*MAIN E08
int main(){

    float n1[10];

    for(int i = 0; i<= 9; i++){
        printf("n1[%d]\t &n1[%d] = |%d|\n",i,i,&n1[i]);
    }
    return 0;
}
*/

/*MAIN E07
int main(){

    int a,b;
    printf("DIGITE 2 VALORES:\n");
    scanf("%d %d",&a,&b);

    soma_2(&a,&b);

    printf("A = |%d|\tB = |%d|\n",a,b);


    return 0;
}
*/

/*MAIN E06
int main(){

    int a,b;
    printf("DIGITE 2 VALORES:\n");
    scanf("%d %d",&a,&b);

    soma_d(a,b);

    return 0;
}
*/

/*MAIN 05
int main(){

    int a,b;
    printf("DIGITE 2 VALORES:\n");
    scanf("%d %d",&a,&b);

    pass_maior(a,b);

    return 0;
}
*/

/*MAIN E04
int main(){

    int a,b;
    printf("digite 2 valores:\n");
    scanf("%d %d",&a,&b);

    passando_2_variaveis(a,b);

    return 0;
}
*/

/*MAIN 03
int main(){

    int n1,n2;

    printf("Digite 2 numeros:\n");
    scanf("%d %d",&n1,&n2);

    if(&n1>&n2){
        printf("n1|%d|\n",n1);
    }else{
        printf("n2|%d|\n",n2);
    }

    return 0;
}
*/

/*MAIN 02
int main(){

    int n1,n2;

    if(&n1>&n2){
        printf("n1|%d| - & = |%d|\n",n1,&n1);
    }else{
        printf("n2|%d| - & = |%d|\n",n2,&n2);
    }

    return 0;
}
*/

/*MAIN 01
int main(){
    int a,*pa;
    char b, *pb;
    float c, *pc;

    a = 1;
    b = 'b';
    c = 3.4;

    printf("\n==========ANTES=============\n");

    printf("A = |%d|\nB = |%c|\nC = |%.2f|\n",a,b,c);
    printf("&A = |%d|\n&B = |%d|\n&C = |%d|\n",&a,&b,&c);
    
    printf("PA = |%d|\n PB = |%d|\nPC = |%d|\n",pa,pb,pc);
    printf("&PA = |%d|\n &PB = |%d|\n&PC = |%d|\n",&pa,&pb,&pc);

    pa = &a;
    pb = &b;
    pc = &c;

    *pa = 2;
    *pb = 'c';
    *pc = 3.77;

    printf("\n==========DEPOIS=============\n");

    printf("A = |%d|\nB = |%c|\nC = |%.2f|\n",a,b,c);
    printf("&A = |%d|\n&B = |%d|\n&C = |%d|\n",&a,&b,&c);

    printf("PA = |%d|\nPB = |%d|\nPC = |%d|\n",pa,pb,pc);
    printf("&PA = |%d|\n &PB = |%d|\n&PC = |%d|\n",&pa,&pb,&pc);

    return 0;
}
*/