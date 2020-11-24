#include <stdio.h>
#include <stdlib.H>
#include <math.h>


///////////////////////QUESTOÕES VETORES////////////////////////////

//MAIN E37
int main(){

     int v[11],pivo,pp,a=0,aux=0;

    for(int i=0; i<=10; i++){
        printf("VETOR |%d| DIGITE : \t",i);
        scanf("%d",&v[i]);
        pivo=v[i];
        pp=i;
    }
    
    for(int g=0; g<=10; g++){
        printf("\nV1|%d|\n",v[g]);
    }
    
    return 0;
}



/*MAIN E36
int main(){

    int v[10],pivo,pp,a=0,aux=0;

    for(int i=0; i<=9; i++){
        printf("VETOR |%d| DIGITE : \t",i);
        scanf("%d",&v[i]);
        pivo=v[i];
        pp=i;
    }
    for(int k=0; k<=pp; k++){
        if(v[k]<=pivo){
            aux=v[k];
            v[k]=v[a];
            v[a]=aux;
            a++;
        }
    }
    a = a-1;//posição do pivor1

    pivo = v[a-1];//posição pivo 2
    int b =0;

    for(int t=0; t<=a; t++){
       if(v[t]<=pivo){
           aux = v[t];
           v[t]=v[b];
           v[b]=aux;
           b++;
       }
    }

    pivo = v[9];
    int aux2=a+1;

    for(int r = a+1; r<=9;r++){
        if(v[r]<=pivo){
            aux = v[r];
            v[r]= v[aux2];
            v[aux2]=aux;
            aux2++;
        }
    }

    pivo = v[9];
    int aux3 = aux2;

    for(int rs = aux2; rs<=9; rs++){
        if(v[rs]<=pivo){
            aux = v[rs];
            v[rs]=v[aux3];
            v[aux3]=aux;
            aux3++;
        }
    }

    for(int g=0; g<=9; g++){
        printf("\nV1|%d|\n",v[g]);
    }
    return 0;
}
*/


/*MAIN 35
int main(){

    int a,b,ax;

    printf("VALOR A\nDIGITE :\t");
    scanf("%d",&a);

    printf("VALOR B\nDIGITE :\t");
    scanf("%d",&b);

    int a1[5],b1[5],a2=0,b2=0;

    
    if(a<10){
        a1[a2]=a;
        a2++;
        a1[a2]=0;
        a2++;
        a1[a2]=0;
        a2++;
        a1[a2]=0;
        
    }else if(a>=10 && a<=99){
        int c = a/10;
        int d = a%10;
        a1[a2]=d;
        a2++;
        a1[a2]=c;
        a2++;
        a1[a2]=0;
        a2++;
        a1[a2]=0;
        
            
    }else if(a>=100 && a<1000){
        int c = a/100;//+
        int d = a%100;
        int e = d/10;
        int f = d%10;//-

        a1[a2]=f;
        a2++;
        a1[a2]=e;
        a2++;
        a1[a2]=c;
        a2++;
        a1[a2]=0;

    }else if(a>=1000 && a<=9999){//1323
        int c = a/1000;//1
        int d = a%1000;//323
        int e = d/100;//3
        int f = d%100;//23
        int g = f/10;//2
        int h = f%10;//3

        a1[a2]=h;
        a2++;
        a1[a2]=g;
        a2++;
        a1[a2]=e;
        a2++;
        a1[a2]=c;
        
    }

    if(b<10){
        b1[b2]=b;
        b2++;
        b1[b2]=0;
        b2++;
        b1[b2]=0;
        b2++;
        b1[b2]=0;
    }else if(b>=10 && b<=99){
        int c = b/10;
        int d = b%10;
        b1[b2]=d;
        b2++;
        b1[b2]=c;
        b2++;
        b1[b2]=0;
        b2++;
        b1[b2]=0;
            
    }else if(b>=100 && b<1000){
        int c = b/100;//+
        int d = b%100;
        int e = d/10;
        int f = d%10;//-

        b1[b2]=f;
        b2++;
        b1[b2]=e;
        b2++;
        b1[b2]=c;
        b2++;
        b1[b2]=0;


    }else if(b>=1000 && b<=9999){//1323
        int c = b/1000;//1
        int d = b%1000;//323
        int e = d/100;//3
        int f = d%100;//23
        int g = f/10;//2
        int h = f%10;//3

        b1[b2]=h;
        b2++;
        b1[b2]=g;
        b2++;
        b1[b2]=e;
        b2++;
        b1[b2]=c;

    }

    for(int t = 0; t<a2;t++){
        
        if(a<10){
            a2=1;
            printf("\nVETOR A = |%d|\n",a1[t]);
        }else if(a>=10 && a<=99){
            a2=2;
            printf("\nVETOR A = |%d|\n",a1[t]);
        }else if(a<=100 && a>=999){
            a2 = 3;
            printf("\nVETOR A = |%d|\n",a1[t]);
        }else if(a>=1000 && a<=9999){
            a2=4;
            printf("\nVETOR A = |%d|\n",a1[t]);
        }

    }
    for(int o = 0; o<b2;o++){
        if(b<10){
            b2=1;
            printf("\nVETOR B = |%d|\n",b1[o]);
        }else if(b>=10 && b<=99){
            b2=2;
            printf("\nVETOR B = |%d|\n",b1[o]);
        }else if(b<=100 && b>=999){
            b2 = 3;
            printf("\nVETOR B = |%d|\n",b1[o]);
        }else if(b>=1000 && b<=9999){
            b2=4;
            printf("\nVETOR b = |%d|\n",b1[o]);
        }
    }

    
    for(int r = 0; r<=a2;r++){
        ax = a1[r]+b1[r];

        if(ax<=9){
            a1[r]=ax;
        }else{
            ax = ax - 10;
            a1[r]=ax;
            a1[r+1] = a1[r+1]+1;
        }
    }

    for(int z = 0; z<=a2;z++){
        if(a1[z]!= 0){
            printf("\nVETOR SOMA = |%d|\n",a1[z]);
        }
    }

    return 0;
}
*/


/*MAIN E34
int main(){

    int v[10],vd[10],c=0,i=0;

    do{
        printf("VETOR 1\nDIGITE :\t");
        scanf("%d",&v[i]);
        vd[c]=v[i];
       
        

        for(int j = 0; j<=c;j++){
            if(v[i]==vd[j] && j!=i){
                printf("VETOR 1\nDIGITE :\t");
                scanf("%d",&v[i]);
                vd[c] = v[i];
            }
        }
        c++;
        i++;

    }while(i<10);

    for(int k = 0; k<i;k++){
        printf("\nVETOR FINAL = |%d|\n",v[k]);
    }
    
    return 0;
}
*/


/*MAIN E33
int main(){

    int v[15],a=14,b=0;

    for(int i = 0; i<=a;i++){
        printf("VETOR |%d|\nDIGITE :\t",i);
        scanf("%d",&v[i]);
    }

    for(int j = 0; j<=a;j++){
        if(v[j]==0){
            for(int k = j+1; k<=a;k++){
                v[k-1] = v[k];
                b++;
            }
            a--;
        }
    }

    for(int t = 0; t<=a;t++){
        printf("VETOR COMPAC |%d| = |%d|\n",t,v[t]);
    }

    return 0;
}
*/


/*MAIN E32
int main(){

    int x[5],y[5],soma = 0,mult,dif=0,inter[5],dify[5],e=0,uni[10],un=0;

    for(int i = 0; i<=4;i++){
        printf("VETOR 1\nDIGITE :\t");
        scanf("%d",&x[i]);
        uni[i]=x[i];
        un++;
        
    }
    for(int j = 0; j<=4;j++){
        printf("VETOR 2\nDIGITE :\t");
        scanf("%d",&y[j]);
        dify[j] = y[j];
    }


    for(int k = 0; k<=4;k++){
        soma = x[k] + y[k];
        printf("SOMA x[%d] = |%d| + y[%d] =|%d| =>=> |%d|\n\n",k,x[k],k,y[k],soma);
        mult = x[k] * y[k];
        printf("MULTIPLICACAO x[%d] = |%d| * y[%d] =|%d| =>=> |%d|\n\n",k,x[k],k,y[k],mult);
        printf("\n\n");
    }

    for(int p=0; p<=4;p++){
        for(int o = 0; o<=4;o++){
            if(x[p]==y[o]){
                inter[e]=x[p];
                e++;
                dify[o]=0;
                y[o]=0;
                x[p]=0;
            }
        }
    }
    e=e-1;

    for(int t = 0; t<=4;t++){
        for(int r = 0; r<=4;r++){
            if(x[t]!=0 && dify[r]!=0){
            dif = x[t]-dify[r];
            printf("DIFERECA x[%d] = |%d| - y[%d] = |%d| =>=> |%d|\n\n",t,x[t],r,y[r],dif);
            //break;
            x[t]=0;
            dify[r]=0;
            }
        }
    }

    for(int w=0;w<=e;w++){
        printf("INTERSECAO = |%d|\n\n",inter[w]);
    }

    for(int a = 0 ;a<=4;a++){
        if(y[a]!=0){
            uni[un]=y[a];
            un++;
        }
    }
    un = un-1;

    for(int s=0;s<=un;s++){
        printf("UNIAO = |%d|\n\n",uni[s]);
    }
    return 0;
}
*/


/*MAIN E31
int main(){
    int v1[10],v2[10],vi[20],a=0,c=0;

    for(int i = 0; i<=9;i++){
        printf("VETOR 1\nDIGITE :\t");
        scanf("%d",&v1[i]);
        vi[a]=v1[i];
        a++;
    }
    printf("A = |%d|\n",a);
    c=a;

    for(int j = 0; j<=9;j++){
        printf("VETOR 2\nDIGITE :\t");
        scanf("%d",&v2[j]);
        vi[c]=v2[j];
        c++;
        
    }
    printf("c = |%d|\n",c);

    for(int n = 0; n<=c;n++){
        printf("VETOR INTER1 = |%d|\n",vi[n]);
        
    }
    c = c-1;

    for(int z = 0; z <= c; z++){
        for(int x = 0; x<=a;x++){
            if(vi[z]==vi[x] && z!=x){
                vi[x]=0;
            }
        }
    }

    for(int n = 0; n<=c;n++){
        if(vi[n]!=0){
            printf("VETOR INTER = |%d|\n",vi[n]);
        }
    }

    return 0;
}
*/



/*MAIN E30
int main(){


    int v1[10],v2[10],vi[10],a=0,c=0;

    for(int i = 0; i<=9;i++){
        printf("VETOR 1\nDIGITE :\t");
        scanf("%d",&v1[i]);
        
    }
    for(int j = 0; j<=9;j++){
        printf("VETOR 2\nDIGITE :\t");
        scanf("%d",&v2[j]);
    }

    for (int k = 0; k <=9; k++){
        for(int m = 0; m<= 9; m++){
            if(v1[k]==v2[m]){
                vi[a]=v1[k];
                a++;
                printf("A = |%d|\n",a);
            }
        }
    }
    a = a-1;

    for(int z = 0; z <= a; z++){
        for(int x = 0; x<=a;x++){
            if(vi[z]==vi[x] && z!=x){
                vi[x]=0;
            }
        }
    }
    
    for(int n = 0; n<=a;n++){
        if(vi[n]!=0){
            printf("VETOR INTER = |%d|\n",vi[n]);
        }
    }
    return 0;
}
*/




/*MAIN E29
int main(){

    int num[6],p[6],imp[6],a=0,soma = 0,b=0;

    for(int i = 0; i<= 5;i++){
        printf("|VETOR|POSICAO %d|\nDIGITE :\t",i+1);
        scanf("%d",&num[i]);

        if(num[i]%2==0){
            p[a] = num[i];
            a++;
            soma = soma + num[i];
        }else{
            imp[b]= num[i];
            b++;
        }
    }
    a = a-1;
    b=b-1;

    for(int j = 0; j<=a;j++){
        printf("NUMEROS PARES |%d|\n",p[j]);
    }

    printf("SOMA DOS PARES =|%d|\n",soma);
    
    for(int k = 0; k<=b;k++){
        printf("NUMEROS IMPARES |%d|\n",imp[k]);
    }
    b++;
    printf("QUANTIDADE DE NUMEROS IMPARES = |%d|\n",b);
    return 0;
}
*/


/*MAIN E28
int main(){

    int v[10],v1[10],v2[10],a=0,b=0;

    for(int i = 0; i<=9;i++){
        printf("|VETOR|POSICAO %d|\nDIGITE :\t",i);
        scanf("%d",&v[i]);

        if(v[i]%2==0){
            v2[a]=v[i];
            a++;
        }else{
            v1[b]=v[i];
            b++;
        }
    }
    a=a-1;
    b=b-1;

    for(int j = 0; j<=a;j++){
        printf("V2|%d| = |%d|\n",j,v2[j]);
    }

    for(int k = 0; k<=b;k++){
        printf("V1|%d| = |%d|\n",k,v1[k]);
    }


    return 0;
}
*/


/*MAIN E27
int main(){

    int num[10],m=1,c,b=0;

    for(int i = 0; i<= 9; i++){
        printf("VETOR |%d|\nDIGITE : \t",i+1);
        scanf("%d",&num[i]);


        if(num[i]>m){
            m = num[i];
        }

    }

    for(int j = 0; j<=9;j++){
        for(int k = 1; k<=m;k++){
            c = num[j]%k;
            if(c==0){
                b++;
                //a++;
            }
        }
        if(b==2){
                printf("|PRIMO|POSICAO %d|VALOR %d|\n",j,num[j]);
                b=0;
        }else{
            b=0;
        }
    }
    return 0;
}
*/

/*MAIN E26
int main(){

    float v[10],media, soma = 0, dp,a,soma_dp=0;
    
    for(int i = 1; i<=10; i++){
        printf("VALOR VETOR |%d|\nDIGITE :\t",i);
        scanf("%f",&v[i]);
        soma = soma + v[i];
        printf("Soma = |%.2f|\n",soma);
    }

    media = soma / 10;

    printf("media = |%.2f|\n",media);

    for(int j = 1; j<=10;j++){
        soma_dp = soma_dp + ((v[j] - media)*(v[j] - media));
        printf("SOMA DP = |%.2f|\n ",soma_dp);
    }

    dp = soma_dp/10;

    printf("DESVIO PADRÃO = |%.2f|\n",dp);

    return 0;
}
*/

/*MAIN E25
int main(){

    int num[100],a,b,c=0;


    for(int i = 1; i<=100;i++){
    
        a = (i)%7;
        b = (i)%10;

        if(!(a==0 || b==7)){
            num[c] = i;
            c++;
        }
    }
    c = c -1;

    for(int j=0; j<=c;j++){
        printf("NUM[%d] = |%d|\n",j,num[j]);
    }
    return 0;
}
*/

/*MAIN E24
int main(){

    int a[10],pM,pm;
    float alt[10],alt_M=1,alt_m=3;

    
    for(int i = 1; i<=10; i++){
        printf("VETOR ALUNO |%d|\nDIGITE :\t",i);
        scanf("%d",&a[i]);
    }

    for(int j = 1; j<=10;j++){
        printf("VETOR ALTURA |%d|\nDIGITE :\t",j);
        scanf("%f",&alt[j]);

        if(alt[j]>=alt_M){
            alt_M = alt[j];
            pM = j;
        }else if(alt[j]<=alt_m){
            alt_m = alt[j];
            pm = j;
        }
    }

    printf(" ALUNO %d +ALT = |%.2f|\n ",pM,alt_M);
    printf(" ALUNO %d +ALT = |%.2f|\n ",pm,alt_m);
    return 0;
}
*/







/*MAIN E23
int main(){

    float a[5],b[5],p[5],soma= 0;

    for(int i = 0; i<=4; i++){
        printf("VETOR A\nDIGITE :\t");
        scanf("%f",&a[i]);
    }
    for(int m = 0; m<=4;m++){
        printf("VETOR B\nDIGITE :\t");
        scanf("%f",&b[m]);
    }

    
    for(int c = 0; c<= 4;c++){
        p[c] = a[c]*b[c];
        soma = soma + p[c];
    }
    
    for(int k = 0; k<=4; k++){
        printf("VETOR A[%d] = |%.2f|\n",k+1,a[k]);
        
    }
    for(int l = 0; l<=4;l++){
        printf("VETOR B[%d] = |%.2f|\n",l+1,b[l]);
        
    }
    for(int v = 0; v<=4;v++){
        printf("VETOR PRODUTO [%d] = |%.2f|\n",v+1,p[v]);
    }
    return 0;
}
*/



/*MAIN E22
int main(){

    int a[10],b[10],c[10];

    for(int i = 1; i<=10; i++){
        printf("VETOR A\nDIGITE :\t");
        scanf("%d",&a[i]);
    }
    for(int m = 1; m<=10;m++){
        printf("VETOR B\nDIGITE :\t");
        scanf("%d",&b[m]);
    }

    for(int j = 1; j<=10; j++){

        if(j%2==0){
            c[j]=a[j];
        }else{
            c[j]=b[j];
        }

    }
    
    for(int k = 1; k<=10; k++){
        printf("VETOR A[%d] = |%d|\n",k,a[k]);
        
    }
    for(int p = 1; p<=10;p++){
        printf("VETOR B[%d] = |%d|\n",p,b[p]);
        
    }
    for(int v = 1; v<=10;v++){
        printf("VETOR C[%d] = |%d|\n",v,c[v]);
        
    }

    return 0;
}
*/

/*MAIN E21
int main(){

    int a[10],b[10],c[10];

    for(int i = 0; i<=9; i++){
        printf("VETOR A\nDIGITE :\t");
        scanf("%d",&a[i]);
    }
    for(int m = 0; m<=9;m++){
        printf("VETOR B\nDIGITE :\t");
        scanf("%d",&b[m]);
    }
    
    for(int j = 0; j<=9; j++){
        c[j] = a[j] - b[j];
        printf("VETOR A = |%d|\n",a[j]);
        printf("VETOR B = |%d|\n",b[j]);
        printf("VETOR C = |%d|\n",c[j]);
    }
    return 0;
}
*/

/*MAIN E20
int main(){

    int n1[10],n2[10],a,c=0;

    for(int i = 0; i<= 9; i++){

        printf("VALOR VETOR |%d|\nDIGITE :\t",i+1);
        scanf("%d",&a);

        if(a>=0 || a<=50){
            n1[i]=a;
        }else{
            printf("Numero fora do intervalo!\n");
        }

        if(a%2!=0){
            n2[c]=a;
            c++;
            printf("C = |%d|\n",c);
        }
        //printf("V1 |%d| = |%d|\n",i+1,n1[i]);
    }

    //printf("C = |%d|\n",c);

    a = c-1;

    for(int j = 0; j<=a; j++){
        //printf("V1 |%d| = |%d|\n",j+1,n1[j]);
        printf("V2 IMPARES -  |%d| = |%d|\n",j,n2[j]);
    }
    return 0;
}
*/

/*MAIN E19
int main(){
    float num[50];

    for(int i=0; i<=49;i++){
        num[i] = (i+(5*i))%(i+1);
    }

    for(int j=0; j<=49;j++){
        printf("Vetor |%d| = |%.2f|\n",j,num[j]);
    }

    return 0;
}
*/



/*MAIN E18
int main(){

    int num[10],x;

    for(int i = 0; i<=9;i++){
        printf("Vetor |%d|\nDIGITE :\t",i+1);
        scanf("%d",&num[i]);
    }

    printf("\nVALOR X DIGITE :\t");
    scanf("%d",&x);

    for(int j = 0; j<=9;j++){
        if(num[j]%x==0){
            printf("MULTIPLO |%d| = |%d|\n",x,num[j]);
        }
    }
    return 0;
}
*/

/*MAIN E17
int main(){

    int num[10];

    for(int i = 0; i<=9; i++){
        printf("\nVALOR |%d|\nDIGITE:\t",i+1);
        scanf("%d",&num[i]);
        
    }

    for(int k = 0; k<=9; k++){
        printf("\nVETOR |%d|\n\n",num[k]);
    }
    
    
    printf("***SAIDA***\n");
    for(int j = 0; j<=9;j++){
        if(num[j]<0){
            num[j]=0;
        }
        printf("VETOR = |%d|\n",num[j]);
    }
    return 0;
}
*/

/*MAIN E16
int main(){

    float num[5];
    int cod;

    for(int i = 0; i<=4; i++){
        printf("\nVALOR |%d|\nDIGITE:\t",i+1);
        scanf("%f",&num[i]);
    }

    printf("\nCODIGO|Digite:\t");
    scanf("%d",&cod);
    if(cod!=1 && cod!=2 && cod !=0){
        printf("CODIGO INVALIDO!\n");
    }
    switch (cod){
        case 1:
            for(int j = 0; j<=4;j++){
                printf("VETOR = |%.1f|\n",num[j]);
            }
        break;

        case 2:
            for(int j = 4; j>=0;j--){
                printf("VETOR INVERSO = |%.1f|\n",num[j]);
            }
            break;
    
        case 0:
            printf("Progama FINALIZADO!\n");
        break;
        }

    return 0;
}
*/


/*MAIN E15
int main(){

    int num[20],b[20];

    for(int i = 0; i<=19; i++){
        printf("\nVALOR |%d|\nDIGITE:\t",i+1);
        scanf("%d",&num[i]);
        b[i] = num[i];
    }
    for(int j = 0; j<=19; j++){
        for(int k = 0; k<=19; k++){

            if(num[j]==num[k] && j!=k){
                b[j]=0;
                b[k]=0;
                
                
            }
        }
        if(b[j]>0){
            printf("\nVETOR= |%d|\n",b[j]);
        }    
    }
    return 0;
}
*/

/*MAIN E14
int main(){

    int num[10],b[10],a=0,c;

    for(int i = 0; i<=9; i++){
        printf("\nVALOR |%d|\nDIGITE:\t",i+1);
        scanf("%d",&num[i]);
        b[i] = num[i];
    }


    for(int j = 0; j<=9; j++){
        for(int k = 0; k<=9; k++){
            c = 0;

            if(num[j]==num[k] && j!=k){
                for(int w = 0; w<=9; w++){
                    if(b[w]==num[j]){
                        c = 1;
                    }
                    if(c == 0){
                        b[a]=num[j];
                        a++;
                    }
                }
            }
        }
    }

    for(int m = 0; m<a ;m++){
        for(int n = 0; n<=m;n++){
            if(b[m]==b[n]&& m!=n){
                b[m]=0;
            }
        }
        if(b[m]>0){
            printf("VALOR IGUAL - |%d|\n",b[m]);
        }
    }
    printf("\n");
    
    return 0;
}
*/


/*MAIN E13
int main(){

    int n[5],M=1,m=1,p_M,p_m;

    for(int i = 0; i<=4; i++){
        printf("VALOR %d.\nDIGITE :\t",i+1);
        scanf("%d",&n[i]);

        if(n[i]>M){
            M=n[i];
            p_M = i;
        }else if(n[i]<=m){
            m = n[i];
            p_m = i;
        }

    }
    printf("MAIOR[%d] = |%d|\nMENOR[%d] = |%d|\n",p_M,M,p_m,m);

    return 0;
}
*/

/*MAIN E12
int main(){

    int n[5],M=1,m=1;

    for(int i = 0; i<=4; i++){
        printf("VALOR %d.\nDIGITE :\t",i+1);
        scanf("%d",&n[i]);

        if(n[i]>M){
            M=n[i];
        }else if(n[i]<=m){
            m=n[i];
        }

    }

    float soma = 0;

    for(int j = 0; j <= 4; j++){
        soma = soma + n[j];
    }

    float med = soma / 5;
    printf("MAIOR = |%d|\nMENOR = |%d|\nMEDIA = |%.2f|",M,m,med);
    return 0;
}
*/


/*MAIN E11
int main(){

    float a[10],neg = 0,pos=0;
    int p=0;

    for(int i = 0; i<=9; i++){
        printf("Valor Real |%d|\nDigite :\t",i+1);
        scanf("%f",&a[i]);

        if(a[i]<0){
            neg = neg + a[i];
            p++;
        }else if(a[i]>0){
            pos = pos + a[i];
        }
    }
    printf("Soma + = |%.2f|\n",pos);
    printf("SOMA NEGATIVOS = |%.2f|\tQTD = |%d|\n",neg,p);
    return 0;
}
*/



/*MAIN E10
int main(){

    float nota[15];

    for(int i = 0; i<=14; i++){
        printf("ALUNO %d NOTA.\nDIGITE :\t",i+1);
        scanf("%f",&nota[i]);

    }

    int soma = 0;

    for(int j = 0; j<=14;j++){
        soma = soma + nota[j];
        printf("soma = |%d|\n\n",soma);
    }

    float media = (soma / 15);

    printf("MEDIA = |%.2f|\n",media);
    return 0;
}
*/

/*MAIN E09
int main(){

    int n[6],b[6],i=0;

    do{
        
        printf("Valor inteiro %d.\nDigite :\t",i+1);
        scanf("%d",&n[i]);
        if(n[i]%2==0){
            b[i]= n[i];
            i++;
        }

    }while(i<=6);



    for(int j = 0; j<=5; j++){
        printf("Valor PAR %d = |%d|\n",j+1,b[j]);
    }
    
    printf("\n");
    return 0;
}
*/




/*MAIN E08
int main(){

    int n[6];

    for(int i = 0; i<=5; i++){
        printf("Valores Inteiros:\nDigite :\t");
        scanf("%d",&n[i]);
    }
    
    for(int j = 5; j>=0; j--){
        printf("Valores Inteiros (-1) = %d\n",n[j]);
    }

    printf("\n");
    return 0;
}
*/

/*MAIN E07
int main(){

    int a[10],M,p;

    for(int i = 0; i<=9; i++){
        printf("Valor %d do vetor.\nDigite :\t",i+1);
        scanf("%d",&a[i]);
    }
    M = 1;
    

    for(int j = 0; j<= 9; j++){
        if(a[j] >= M){
                M = a[j];
                p = j;
                printf("\nA[%d] = %d\n\n",j,a[j],j+1,a[j+1]);
                printf("M = |%d|\n",M);
            }
    }
    printf("\n\n***Maior = |%d|\n***POSICAO =  |%d|\n",M,p);
    return 0;
}
*/


/*MAIN E06
int main(){

    int a[10],M,m;

    for(int i = 0; i<=9; i++){
        printf("Valor %d do vetor.\nDigite :\t",i+1);
        scanf("%d",&a[i]);
    }
    M = 1;
    m = 1;

    for(int j = 0; j<= 9; j++){
        if(a[j] > M){
                M = a[j];
                printf("\nA[%d] = %d\nA[%d] = |%d|\n",j,a[j],j+1,a[j+1]);
                printf("M1 = |%d|\n",M);
                printf("m1 = |%d|\n",m);
            }else if(a[j]<=m){
                m = a[j];
            }
    }
    printf("\nMaior = |%d|\nMenor = |%d|\n",M,m);

    return 0;
}
*/

/*MAIN E05
int main(){

    int a[10],b[10],p=0;

    for(int i = 0; i<=9; i++){
        printf("Valor %d do vetor.\nDigite :\t",i);
        scanf("%d",&a[i]);

        if(a[i]%2==0){
            p++;
            b[i] = a[i];
        }else{
            b[i] = 0;
        }
    }

    printf("\nQTD_NUM_PAR = |%d|\n\n",p);
    printf("\n***NUMEROS***\n");

    for(int j = 0; j<=9; j++){
        if(b[j]>0){
            printf("Par %d = |%d|\n",j+1,b[j]);
        }
    }

    return 0;
}
*/

/*MAIN E04
int main(){

    int num[8],x,y;

    for(int i = 0; i<=7;i++){
        printf("Valor %d do veto =\t",i+1);
        scanf("%d",&num[i]);
    }

    printf("Digite duas posições:\n");
    scanf("%d %d",&x,&y);

    int soma = num[x-1]+num[y-1];
    printf("Soma %d + %d = |%d|",x,y,soma);
    return 0;
}
*/


/*MAIN E03
int main(){

    float a[10],b[10],c,d;
    
    
    for(int i = 0; i<=9; i++){
        
        printf("Digite um valor:\t");
        scanf("%f",&a[i]);

        c = a[i]*a[i];
        b[i] = c;
    }

    for(int j = 1; j<=10; j++){
        printf("\n\nA[%d] = |%.1f|\tB[%d] = |%.1f| \n",j,a[j-1],j,b[j-1]);
    }

    printf("A[9] = %.0f",a[9]);
    return 0;
}
*/

/*MAIN E02

int main(){

    int n[5];

    for(int i = 0; i<=5;i++){
        printf("Digite um valor:\t");
        scanf("%d",&n[i]);
        printf("n[%d]:|%d|\n",i,n[i]);

    }
    for (int j = 1; j <=6; j++){
        printf("VALOR %d = |%d|\n",j,n[j-1]);
    }
   
    return 0;
}
*/


/*MAIN E01
int main(){

    int A[5];

    A[0] = 1;
    A[1] = 0;
    A[2] = 5;
    A[3] = -2;
    A[4] = -5;
    A[5] = 7;
    

    int a = A[0];
    int b = A[1];
    int c = A[5];
    

    int soma = a+b+c;

    printf("Soma -> |%d| + |%d| + |%d| = |%d|\n",a,b,c,soma);

    A[4] = 100;

    for(int i = 0; i<=5;i++){
        printf("A|%d| = |%d|\n",i,A[i]);
    }

    return 0;
}
*/