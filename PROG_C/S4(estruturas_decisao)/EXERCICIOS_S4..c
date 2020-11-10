#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>



//////////////////////////QUESTOES/////////////////////////////////////////

/*MAIN E41
int main(){

    float alt,peso;

    printf("Digite sua altura e peso:\n");
    scanf("%f%f",&alt,&peso);

    float IMC = peso/(alt*alt);

    if(IMC < 18.5){
        printf("ABAIXO DO PESO!\nIMC = %.2f",IMC);
    }else if(IMC >=18.6 && IMC <=24.9){
        printf("SAUDAVEL!\nIMC = %2.f",IMC);
    }else if(IMC >=25 && IMC <=29.9){
        printf("PESO EM EXCESSO!\nIMC = %2.f",IMC);
    }else if(IMC >=30 && IMC <=34.9){
        printf("OBESIDADE GRAU 1!\nIMC = %.2f",IMC);
    }else if(IMC >=35 && IMC <= 39.9){
        printf("OBSEDIDADE GRAU 2! (SEVERA)\nIMC = %2.f",IMC);
    }else if(IMC >= 40){
        printf("OBESIDADE GRAU 3! (MORBIDA)\nIMC = %.2f",IMC);
    }
    
    return 0;
}
*/

/*MAIN E40
int main(){

    float ct_f;

    printf("Digite o custo de fabrica:\n");
    scanf("%f",&ct_f);

    if(ct_f <=12000){
        float ct_c = ct_f + (ct_f*0.05);
        printf("\nCUSTO FABRICA R$ = %.2f\n",ct_f);
        printf("\nCUSTO CONSUMIDOR R$ = %.2f\n",ct_c);
    }else if(ct_f >12000 && ct_f <25000){
        float ct_c = ct_f + (ct_f*0.1) + (ct_f*0.15);
        printf("\nCUSTO FABRICA R$ = %.2f\n",ct_f);
        printf("CUSTO CONSUMIDOR R$ = %.2f\n",ct_c);
    }else if(ct_f >=25000){
        float ct_c = ct_f + (ct_f *0.15) + (ct_f * 0.2);
        printf("\nCUSTO FABRICA R$ = %.2f\n",ct_f);
        printf("CUSTO CONSUMIDOR R$ = %.2f\n",ct_c);
    }

    return 0;
}
*/


/*MAINE39
int main(){

    float val_s,temp_s;

    printf("Digite o salario atual e o tempo de servico:\n");
    scanf("%f %f",&val_s,&temp_s);

    if(val_s <=500 && temp_s < 1){
        float val_f = val_s + (val_s*0.25);
        printf("\nSALARIO ANTIGO R$ = %.2f\n",val_s);
        printf("\nSALARIO NOVO R$ = %.2f\n",val_f);
    }else if(val_s > 500 && val_s <=1000){
        if(temp_s>1 && temp_s <=3){
            float val_f = val_s + (val_s*0.2) + 100;
            printf("\nSALARIO ANTIGO R$ = %.2f\n",val_s);
            printf("\nSALARIO NOVO R$ = %.2f\n",val_f);
        }
    }else if(val_s > 1000 && val_s <= 1500){
        if(temp_s > 3 && temp_s <=6){
            float val_f = val_s + (val_s * 0.15) + 200;
            printf("\nSALARIO ANTIGO R$ = %.2f\n",val_s);
            printf("\nSALARIO NOVO R$ = %.2f\n",val_f);
        }
    }else if(val_s > 1500 && val_s <=2000){
        if(temp_s > 6 && temp_s <= 10){
            float val_f = val_s + (val_s*0.10) + 300;
            printf("\nSALARIO ANTIGO R$ = %.2f\n",val_s);
            printf("\nSALARIO NOVO R$ = %.2f\n",val_f);
        }
    }else if(val_s > 2000){
        if(temp_s > 10){
            float val_f = val_s + 500;
            printf("\nSALARIO ANTIGO R$ = %.2f\n",val_s);
            printf("\nSALARIO NOVO R$ = %.2f\n",val_f);
        }
    }

    return 0;
}
*/


/*MAINE38
int main(){

    #define AT 2008

    int d,m,a;

    printf("Digite o DIA MES ANO:\n");
    scanf("%d %d %d",&d,&m,&a);

    int div = a % 4;
    printf("\ndiv = %d\n",div);
    int div2 = a % 100;
    printf("\ndiv2 = %d\n",div2);

    if(a<=AT){
        if(m>=1 && m <13){
            
            if(m==2 && d<=29){
                if(div2!=0 && d<=28){//NB
                    printf("\n|%d|%d|%d| - DATA VALIDA1!\n",d,m,a);
                }else if(div==0 && d<30){//bis
                    printf("\n|%d|%d|%d| - DATA VALIDA2!\n",d,m,a);
                }else if(div==div2 && div>0){
                    printf("|%d|%d|%d| - DATA INVALIDAs!X\n",d,m,a);
                }else{
                    printf("|%d|%d|%d| - DATA INVALIDA!\n");
                }
                    
                
            }else if(m==4 || m==6 || m==9 || m==11){
                if(d<=30){
                printf("|%d|%d|%d| - DATA VALIDA3!\n",d,m,a);
                }else{
                    printf("\n|%d|%d|%d| - DATA INVALIDA1!\n",d,m,a);
                }

            }else if(m==1 || m==3 || m==5 || m==7 || m==8 || m==10 ||m==12){
                if(d<=31){
                    printf("\n|%d|%d|%d| - DATA VALIDA4!\n",d,m,a);
                }else{
                    printf("\n|%d|%d|%d| - DATA INVALIDA2!\n",d,m,a);
                }
            }
            
        }
    }else{
        printf("|%d|%d|%d| - DATA INVALIDA!\n",d,m,a);
    }
    
    return 0;
}
*/


/*MAIN E37
int main(){

    int hc,mc,hp,mp,DIA,hora_t;
    float val;

    printf("Digite a hora da chegada:\n");
    scanf("%d %d",&hc,&mc);

    printf("Digite a hora da partida:\n");
    scanf("%d %d",&hp,&mp);

    int hora_c = (hc*60) + mc;
    printf("Hora chegada = %d\n\n",hora_c);
    int hora_p = (hp*60) + mp;
    printf("Hora chegada = %d\n\n",hora_p);


    hora_t = hora_p - hora_c;//120

    if(hora_c < hora_p){
        if(hora_t <= 60){
                val = 1;//1hora
                printf("\n***CHEGADA - |%d|%d|\n**PARTIDA - |%d|%d|\n*VALOR TOTAL1 R$ = %.2f\n",hc,mc,hp,mp,val);
            }else if(hora_t > 60 && hora_t <=120){
                val = (2*1);//2horas
                printf("\n***CHEGADA - |%d|%d|\n**PARTIDA - |%d|%d|\n*VALOR TOTAL2 R$ = %.2f\n",hc,mc,hp,mp,val);
            }else if(hora_t > 120 && hora_t <=180){
                val = (3*(1.4));//3horas
                printf("\n***CHEGADA - |%d|%d|\n**PARTIDA - |%d|%d|\n*VALOR TOTAL3 R$ = %.2f\n",hc,mc,hp,mp,val);
            }else if(hora_t >180 && hora_t <=240){
                val = (4*(1.4));//4horas
                printf("\n***CHEGADA - |%d|%d|\n**PARTIDA - |%d|%d|\n*VALOR TOTAL4 R$ = %.2f\n",hc,mc,hp,mp,val);
            }else if(hora_t >240 && hora_t <= 300){
                val = (5*2);
                printf("\n***CHEGADA - |%d|%d|\n**PARTIDA - |%d|%d|\n*VALOR TOTAL5 R$ = %.2f\n",hc,mc,hp,mp,val);
            }else if(hora_t > 300 && hora_t <= 1380){//23h
                
                float ver = hora_t%60;
                printf("\n\nverificação = %.2f\n",ver);

                if(ver == 0){//valor inteiro
                    val = (hora_t/60)*2;
                    printf("\n***CHEGADA - |%d|%d|\n**PARTIDA - |%d|%d|\n*VALOR TOTAL6 R$ = %.2f\n",hc,mc,hp,mp,val);
                }else if(ver !=0){//valor aproximado
                    val = ((hora_t/60)+1)*2;
                    printf("\n***CHEGADA - |%d|%d|\n**PARTIDA - |%d|%d|\n*VALOR TOTAL7 R$ = %.2f\n",hc,mc,hp,mp,val);
                }
            }
    }else if(hora_c > hora_p){
        DIA = (1440 - hora_c) + hora_p;
        printf("DIA = %d\n\n",DIA);
        float ver = DIA%60;

        if(ver==0){
            val = (DIA/60)*2;
            printf("\n***CHEGADA - |%d|%d|\n**PARTIDA - |%d|%d|\n*VALOR TOTAL6 R$ = %.2f\n",hc,mc,hp,mp,val);
        }else if(ver!=0){
            val = ((DIA/60)+1)*2;
            printf("\n***CHEGADA - |%d|%d|\n**PARTIDA - |%d|%d|\n*VALOR TOTAL7 R$ = %.2f\n",hc,mc,hp,mp,val);
        }
    }   
    

    return 0;
}
*/

/*MAIN E36
int main(){

    float val, com;

    printf("Digite o valor da venda:\n");
    scanf("%f",&val);

    if(val >= 100000){
        com = 700 + (val*0.16);
        printf("Comissao R$ = %.2f",com);

    }else if( val < 100000 && val >=80000){
        com = 650 + (val*0.14);
        printf("Commisao R$ = %.2f",com);

    }else if(val < 80000 && val >= 60000){
        
        com = 600 + (val *0.14);
        printf("Comissao R$ = %.2f",com);

    }else if(val <60000 && val >= 40000){
        
        com = 550 + (val *0.14);
        printf("Comissao R$ = %.2f",com);

    }else if(val < 40000 && val >= 20000){
        
        com = 500 +(val*0.14);
        printf("Comissao R$ = %.2f",com);

    }else if( val <20000){
        
        com = 400 + (val * 0.14);
        printf("Comissao R$ = %.2f",com);
    }
    return 0;
}
*/

/*MAIN E35
int main(){

    int d,m,a;

    printf("Digite dia/mes/ano:\n");
    scanf("%d %d %d",&d,&m,&a);


    int div = a % 4;
    int div2 = a % 100;

    if(m >= 1 && m <= 12){
        if(d<=30){
            if(m==2 && d<30){
                if(div2 == 0 && d < 29){//nao bi
                    printf("|%d|%d|%d| - DATA VALIDA1!\n",d,m,a);
                }else if(div ==0 && d<=29){//ano bi
                    printf("|%d|%d|%d| - DATA VALIDA2!",d,m,a);
                }else{//nao bi
                    printf("|%d|%d|%d| - DATA VALIDA3!\n",d,m,a);
                }
            }else{
                printf("|%d|%d|%d| - DATA VALIDA4!\n",d,m,a);
            }
        }else{
            printf("|%d|%d|%d| - DATA INVALIDA1!\n",d,m,a);
        }
        
    }else{
        printf("|%d|%d|%d| - DATA INVALIDA2!\n",d,m,a);
    }

    return 0;
}
*/

/*MAIN E34
int main(){

    int num_f;
    float nota;

    printf("Digite a nota e o numero de faltas:\n");
    scanf("%f %d",&nota,&num_f);


    if(nota >= 9 && nota <=10 && num_f <= 20){
        printf("CONCEITO A!\n");
    }else if(nota >= 9 && nota <=10 && num_f > 20){
        printf("CONCEITO B!\n");
    }else if(nota >=7.5 && nota <=8.9 && num_f <=20){
        printf("CONCEITO B!\n");
    }else if(nota >=7.5 && nota <=8.9 && num_f > 20){
        printf("CONCEITO C!");
    }else if(nota >= 5 && nota <=7.5 && num_f <=20){
        printf("CONCEITO C!\n");
    }else if(nota >= 5 && nota <=7.5 && num_f > 20){
        printf("CONCEITO D!\n");
    }else if(nota >= 4 && nota <= 4.9 && num_f <= 20){
        printf("CONCEITO D!\n");
    }else if(nota >= 4 && nota <= 4.9 && num_f > 20){
        printf("CONCEITO E1!");
    }else if(nota >= 0 && nota < 4 && num_f <=20){
        printf("CONCEITO E2!\n");
    }else if(nota >= 0 && nota < 4 && num_f > 20){
        printf("CONCEITO E3!\n");
    }
    return 0;
}
*/

/*MAIN E33
int main(){

    float p,val;

    printf("Digite o preco antigo:\n");
    scanf("%f",&p);

    if(p < 50){
        val = p + (p * 0.05);
        printf("\nValor Novo = %.2f\n",val);
        printf("\nDesconto = 5%%\n");
    }else if(p >= 50 && p < 100){
        val = p + (p*0.1);
        printf("\nValor Novo = %.2f\n",val);
        printf("\nDesconto = 10%%\n");
    }else if(p >=100){
        val = p + (p * 0.15);
        printf("\nValor Novo = %.2f\n",val);
        printf("\nDesconto = 15%%\n");
    }

    if(val < 80){
        printf("\nBARATO!\n\n");
    }else if(val >= 80 && val <=120 ){
        printf("\nNORMAL!\n");
    }else if(val > 120 && val <= 200){
        printf("\nCaro!\n");
    }else if(val > 200){
        printf("\nMUITO CARO!");
    }
    return 0;
}
*/

/*MAIN E32
int main(){

    int cod,qtd;
    float val = 0,ped;

    printf("100 - CACHORRO QUENTE\n");
    printf("101 - BAURO SIMPLES\n");
    printf("102 - BAURU COM OVO\n");
    printf("103 - HAMBUERGUER\n");
    printf("104 - CHEESEBURGUER\n");
    printf("105 - SUCO\n");
    printf("106 - REFRIGERANTE\n");
    printf("0 - Finalizar pedido.\n");

    printf("\nDigite o Codigo do produto e a Quantidade:\n");
    scanf("%d %d", &cod, &qtd);

    while(cod != 0){

        switch (cod){
        
            case 100:
                ped = qtd * 1.20;
                val = val + ped;
                break;
            case 101:
                ped = qtd * 1.30;
                val = val + ped;
                break;
            case 102:
                ped = qtd * 1.50;
                val = val + ped;
                break;
            case 103:
                ped = qtd * 1.20;
                val = val + ped;
                break;
            case 104:
                ped = qtd * 1.70;
                val = val + ped;
                break;
            case 105:
                ped = qtd * 2.20;
                val = val + ped;
                break;
            case 106:
                ped = qtd * 1.00;
                val = val + ped;
                break;
            default:
                //printf("\n Valor total = %.2f\n", val);
                break;
        }

        printf("Valor total = %.2f",val);

        printf("\nDigite o Codigo do produto e a Quantidade:\n");
        scanf("%d %d", &cod, &qtd);
        

    }

    printf("Valor total = %.2f",val);
    return 0;
}
*/






/*MAIN E31
int main(){

    int a = 0, p = 0;
    float alt, pes;

    printf("Digite sua altura e peso:\n");
    scanf("%f %f",&alt,&pes);

    if(alt < 1.20){
        a = 1;
    }else if(alt >= 1.20 && alt < 1.70){
        a = 2;
    }else if( alt >= 1.70){
        a = 3;
    }

    if(pes <= 60){
        p = 1;
    }else if(pes > 60 && pes <= 90 ){
        p = 2;
    }else if(pes > 90){
        p = 3;
    }

    printf("a = %d\n",a);
    printf("p = %d\n",p);

    if(a == 1 && p==1){
        printf("\nCategoria A");
    }else if(a==1 && p==2){
        printf("\nCategoria D");
    }else if(a==1 && p==3){
        printf("\nCategoria G");
    }else if(a==2 && p==1){
        printf("\nCategoria B");
    }else if(a==2 && p==2){
        printf("\nCategoria E");
    }else if(a==2 && p==3){
        printf("\nCategoria H");
    }else if(a==3 && p==1){
        printf("\nCategoria C");
    }else if(a==3 && p==2){
        printf("\nCategoria F");
    }else if(a==3 && p==3){
        printf("\nCategoria I");
    }
    return 0;
}
*/





/*MAIN E30
int main(){

    int n1, n2, n3;

    printf("Digite 3 numeros:\n");
    scanf("%d %d %d", &n1, &n2, &n3);

    if(n1 < n2 && n2 < n3){
        printf("%d %d %d\n", n1, n2, n3);
    }else if(n1 < n2 && n2 > n3 && n1 < n3){
        printf("%d %d %d\n", n1, n3, n2);
    }else if(n2 < n1 && n1 < n3){
        printf("%d %d %d\n", n2, n1, n3);
    }else if(n2 < n1 && n1 > n3 && n2 < n3){
        printf("%d %d %d\n",n2,n3,n1);
    }else if(n3 < n1 && n1 < n2){
        printf("%d %d %d\n", n3,n1,n2);
    }else if(n3 < n1 && n1 > n2){
        printf("%d %d %d\n", n3, n2, n1);
    }    
    return 0;
}
*/

/*MAIN E29
int main(){

    srand((unsigned)(time(NULL)));
    int acertos = 0, err = 0;
    float a,b,soma,resp;

    for(int i = 0; i < 5; i++){
        a = (rand()%100) + 1;
        b = (rand()%100) + 1;

        soma = a + b;
        resp = soma;


        printf("Qual eh a soma de %.0f + %.0f?\n",a,b);
        scanf("%f",&resp);

        if(resp != soma){
            err++;
            //printf("Resposta Errada!\nResposta Certa = %.0f\n",soma);
        }else{
            acertos++;
            printf("Resposta Correta!\n%.0f + %.0f = %.0f\n",a,b,resp);
        }
    
    }
    printf("Acertos: %d\nErros: %d\n",acertos,err);
    return 0;
}
*/

/*MAIN E28
int main(){
    printf("\n*******************************************************\n");

    int n1,n2,n3,op;

    printf("Digite os numeros:\n");
    scanf("%d %d %d", &n1, &n2, &n3);

    printf("\nDigite a opçcao:\n");
    printf("1 - Geometrica:\n");
    printf("2 - Ponderada:\n");
    printf("3 - Harmonica:\n");
    printf("4 - Aritimetica:\n");
    scanf("%d",&op);

    switch(op){
        case 1: 
            printf("media geometrica = %.2f", pow(n1*n2*n3,1.0/3.0));
            break;

        case 2:
            printf("Media Ponderada = %d",(n1 + (2*n2) + (3*n3)) / 6);
            break;

        case 3:
            printf("Media Harmonica = %d",(1 / ((1/n1) + (1/n2)+ (1/n3))));
            break;

        case 4:
            printf("Media Aritmetica = %d",(n1 + n2 + n3)/3);
            break;
    }
    printf("\n*******************************************************\n");
    return 0;
}
*/

/*MAIN E27
int main(){
    printf("\n*******************************************************\n");

    int id;

    printf("Digite sua idade:\n");
    scanf("%d",&id);

    if(id >= 5 && id <= 7){
        printf("Infantil A\n");
    }else if( id >= 8 && id <= 10){
        printf("Infatil B\n");
    }else if(id >= 11 && id <= 13){
        printf("Juvenil A\n");
    }else if( id >= 14 && id <= 17){
        printf("Juvenil B\n");
    }else if(id >= 18){
        printf("Senior\n");
    }
    printf("\n*******************************************************\n");
    return 0;
}
*/


/*MAIN E26
int main(){
    printf("\n*******************************************************\n");

    float km, lt_perc;
    printf("Digite os Quilometros rodados e QTD.Gasolina gasta:\n");
    scanf("%f %f",&km,&lt_perc);

    float consumo = km / lt_perc;

    if(consumo < 8){
        printf("Venda o Carro!\n");
    }else if(consumo >= 8 && consumo < 12){
        printf("Economico!\n");
    }else if(consumo > 12){
        printf("Super Economico!\n");
    }
    printf("\n*******************************************************\n");
    return 0;
}
*/

/*MAIN E25
int main(){
    printf("\n*******************************************************\n");

    int a, b, c;

    printf("Digite os valores de a, b e c:\n");
    scanf("%d %d %d", &a, &b, &c);

    int delt = (b*b) - (4*a*c);

    int x1 = (-b + sqrt(delt))/(2*a);
    int x2 = (-b - sqrt(delt))/(2*a);
    //printf("X1 = %d\n",x1);
    //printf("X2 = %d\n",x2);

    if(a == 0){
        printf("Nao eh equacao de 2 grau!\n");
    }

    if ( delt < 0){
        printf("Raiz nao existe!\n");
    }else if(delt == 0){
        if( x1 < 0){
            printf("Raiz unica = %d",x2);
        }else{
            printf("Raiz unica = %d",x1);
        }

    }else if(delt >= 0){
        printf("Duas raizes reais:\nx1 = %d\nx2= %d",x1,x2);
    }
    printf("\n*******************************************************\n");
    return 0;
}
*/


/*MAIN E24
int main(){
    printf("\n*******************************************************\n");

    float val_prod, total;
    int est;

    printf("Digite o valor e o estado do produto:\n");
    printf("1 - MG:\n");
    printf("2 - SP:\n");
    printf("3 - RJ:\n");
    printf("4 - MS:\n");
    scanf("%f %d", &val_prod, &est);

    switch(est){
        case 1:
            total = val_prod + (val_prod * 0.07); 
            printf("Valor Total = %.2f",total);
            break;
        case 2:
            total = val_prod + (val_prod * 0.12);
            printf("Valor Total = %.2f", total);
            break;
        case 3:
            total = val_prod + (val_prod * 0.15);
            printf("Valor Total = %.2f", total);
            break;
        case 4:
            total = val_prod + (val_prod * 0.08);
            printf("Valor Total = %.2f",total);
            break;
        default:
            printf("Estado Invalido!\n");
    }
    printf("\n*******************************************************\n");
    return 0;
}
*/

/*MAIN E23
int main(){
    printf("\n*******************************************************\n");

    int ano;
    printf("Digite um ano:\n");
    scanf("%d", &ano);

    int div = ano % 4;
    int div2 = ano % 100;

    if(div2 == 0){
        printf("Ano não bissexto");
    }else if(div == 0){
        printf("Ano Bissexto!");
    }else{
        printf("Ano nao bissexto!");
    }

    printf("\n*******************************************************\n");
    return 0;
}
*/

/*MAIN E22
int main(){
    printf("\n*******************************************************\n");

    int id, temp_serv;

    printf("Digite sua idade e tempo de servico:\n");
    scanf("%d %d", &id, &temp_serv);

    if(id >= 65){
        printf("Apto para Aposentadoria!\n");
    }else if(temp_serv >= 30){
        printf("Apto para Aposentadoria!\n");
    }else if(id >= 60 && temp_serv >= 25){
        printf("Apto para Aposentadoria!\n");
    }else{
        printf("Nao Apto para Aposentadoria!\n");
    }

    printf("\n*******************************************************\n");
    return 0;
}
*/

/*MAIN E21
int main(){
    printf("\n*******************************************************\n");

    int op;
    int n1, n2;


    printf("1 - Soma de 2 numeros:\n");
    printf("2 - Diferenca entre 2 numeros (maior pelo menor):\n ");
    printf("3 - Produto entre 2 numeros:\n");
    printf("4 - Divisao entre 2 numeros:\n");
    printf("Opcao:\n");
    scanf("%d",&op);

    switch(op){
        case 1:
            
            printf("Digite 2 numeros:\n");
            scanf("%d %d", &n1, &n2);
            int soma = n1 + n2;
            printf("%d + %d = %d", n1, n2, soma);
            break;

        case 2:
            
            printf("Digite dois numeros:\n");
            scanf("%d %d", &n1, &n2);
            if(n1 > n2){
                int dif = n1 - n2;
                printf("%d - %d = %d", n1, n2, dif);
            }else{
                int dif = n2 - n1;
                printf("%d - %d = %d",n2, n1, dif);
            }
            break;
        case 3:
            
            printf("Digite 2 numeros:\n");
            scanf("%d %d", &n1, &n2);
            int prod = n1 *n2;
            printf("%d * %d = %d", n1, n2, prod);
            break;

        case 4:
            
            printf("Digite 2 numeros:\n");
            scanf("%d %d", &n1, &n2);

            if(n2 == 0){
                printf("Opcao invalida\n");
            }else{
                float div = n1/n2;
                printf("%d / %d = %.2f\n", n1, n2, div);

            }
            break;
        default:
            printf("\nOpcao invalida");
    }

    printf("\n*******************************************************\n");
    return 0;
}
*/

/*MAIN E20
int main(){
    printf("\n*******************************************************\n");
    int l1,l2,l3;

    printf("Digite os possiveis lados do triangulo:\n");
    scanf("%d %d %d", &l1, &l2, &l3);

    int somal1 = l2 + l3;
    int somal2 = l1 + l3;
    int somal3 = l1 + l2;

    //verificação lado
    if (l1 > somal1){
        printf("l1 nao eh um lado do triangulo.");
    }else if(l2 > somal2){
        printf("l2 nao eh um lado do triangulo");
    }else if(l3 > somal3){
        printf("l3 nap eh um lado do triangulo");
    }
    
    //verificação equilatero

    if(l1 == l2){
        if(l2 == l3){
            printf("Triangulo Equilatero!\n");
        }
    }

    // verificação isoceles
    if( l1 == l2 && l1 != l3){
        printf("Triangulo Isoceles!\n");
    }else if(l2 == l3 && l2 != l1){
        printf("Triangulo Isoceles!\n");
    }

    //verificação escaleno
    if(l1 != l2 && l2 !=l3){
        printf("triangulo Escaleno");
    }

    printf("\n*******************************************************\n");
    return 0;
}
*/

/*MAIN E19
int main(){
    printf("\n*******************************************************\n");

    int num;

    printf("Digite um numero:\n");
    scanf("%d",&num);

    if(num < 99){
        int a = num / 10;//valor1 
        int b = num % 10;//valor 2
        int soma = a + b;
        //printf("soma = %d\n",soma);
        int div_3 = soma % 3;
        //printf("div_3 = %d\n",div_3);

        if(b == 0 || b == 5){
            if(div_3 == 0){
                printf("\nNumero divisivel por 3 e 5.");
            }else{
                printf("\nNumero divisivel por 5!\n");
            }
        }else if(div_3 == 0){
            printf("\nNumero divisivel por 3!\n");
        }else{
            printf("\nNao divide nem por 3 nem por 5");
        }
    }

    if(num >= 100 && num < 999){
        int a = num / 100;//valor1 
        int b = num % 100;//valor 2 e 3
        int c = b / 10; // valor 2
        int d = b % 10; // valor 3
        int soma = a + c + d;
        //printf("soma = %d\n",soma);
        int div_3 = soma % 3;
        //printf("div_3 = %d\n",div_3);

        if(d == 0 || d == 5){
            if(div_3 == 0){
                printf("\nNumero divisivel por 3 e 5.");
            }else{
                printf("\nNumero divisivel por 5!\n");
            }
        }else if(div_3 == 0){
            printf("\nNumero divisivel por 3!\n");
        }else{
            printf("\nNao divide nem por 3 nem por 5");
        }
    }

    if(num >= 1000 && num < 9999){
        int a = num / 1000;//valor1 
        int b = num % 1000;//valor 2 3 4
        int c = b / 100; // valor 2
        int d = b % 100; // valor 3 4
        int e = d / 10;//valor 3
        int f = d % 10; //valor 4
        int soma = a + c + e + f;
        //printf("soma = %d",soma);
        int div_3 = soma % 3;
        //printf("div_3 = %d\n",div_3);
        if(f == 0 || f == 5){
            if(div_3 == 0){
                printf("\nNUmero divisivel por 3 e 5.");
            }else{
                printf("\nNUmero divisivel por 5!\n");
            }
        }else if(div_3 == 0){
            printf("\nNumero divisivel por 3!\n");
        }else{
            printf("\nNao divide nem por 3 nem por 5");
        }
    }

    

    printf("\n*******************************************************\n");
    return 0;
}
*/

/*MAIN E18
int main(){
    printf("\n*******************************************************\n");

    int num, n1, n2;

    printf("1 - SOMA:\n");
    printf("2 - subtração\n");
    printf("3 - multiplicação\n");
    printf("4 - divisao\n");

    scanf("%d",&num);

    switch(num){

        case 1:
            printf("Digite 2 valores:\n");
            scanf("%d %d", &n1, &n2);

            int soma = (n1 + n2);
            printf("%d + %d = %d", n1, n2, soma);
            break;

        case 2 :
            printf("Digite 2 valores:\n");
            scanf("%d %d", &n1, &n2);

            int sub = (n1 - n2);

            printf("%d - %d = %d", n1, n2, sub);
            break;
        case 3 :
            printf("Digite 2 valores:\n");
            scanf("%d %d", &n1, &n2);

            int mult = (n1 * n2);

            printf("%d * %d = %d", n1, n2, mult);
            break;
        case 4 :
            printf("Digite 2 valores:\n");
            scanf("%d %d", &n1, &n2);

            float div = ((float)n1 / (float)n2);
            
            printf("%d / %d = %.2f\n", n1, n2, div);
            break;
    }

    printf("\n*******************************************************\n");
    return 0;
}
*/

/* MAIN E17

int main(){
    printf("\n*******************************************************\n");

    float b_M, b_m, alt;

    printf("Digite a Base Maior, Base Menor e a Altura:\n");
    scanf("%f %f %f", &b_M, &b_m, &alt);

    while(b_M > 0 && b_m > 0){
        float area = ((b_M + b_m)*alt)/2;
        printf("Area do trapezio = %.2f", area);
        break;
    }

    printf("\n*******************************************************\n");
    return 0;
}
*/

/*MAIN E16

int main(){
    printf("\n*******************************************************\n");

    int num;

    printf("Digite um numero:\n");
    scanf("%d",&num);
    
    switch(num){
        case 1:
            printf("Janeiro!\n");
            break;
        case 2:
            printf("Fevereiro!\n");
            break;
        case 3:
            printf("Marco!\n");
            break;
        case 4:
            printf("Abril!\n");
            break;
        case 5:
            printf("Maio!\n ");
            break;
        case 6:
            printf("Junho!\n");
            break;
        case 7:
            printf("Julho!\n");
            break;
        case 8:
            printf("Agosto!\n");
            break;
        case 9:
            printf("Setembro!\n");
            break;
        case 10:
            printf("Outubro!\n");
            break;
        case 11:
            printf("Novembro!\n");
            break;
        case 12:
            printf("Dezembro!\n");
            break;
    }

    printf("\n*******************************************************\n");

    return 0;
}
*/

/*MAIN E15
int main(){
    printf("\n*******************************************************\n");

    int num;

    printf("Digite um numero inteiro:\n");
    scanf("%d",&num);

    switch (num)
    {
    case 1:
        printf("Domingo!\n");
        break;
    case 2:
        printf("Segunda!");
        break;
    case 3:
        printf("Terca!\n");
        break;
    case 4:
        printf("Quarta!");
        break;
    case 5:
        printf("Quinta!\n");
        break;
    case 6:
        printf("Sexta!\n");
        break;
    case 7:
        printf("Sabado!\n");
        break;
    }
    printf("\n*******************************************************\n");
    return 0;
}
*/

/*MAIN E14
int main(){
    printf("\n*******************************************************\n");

    float n1, n2, n3;

    printf("Digite as notas:\n");
    scanf("%f %f %f", &n1, &n2, &n3);

    float med_p = (((n1* 2) + (n2 * 3) + (n3 * 5)) / 10);

    if(med_p < 2.9){
        printf("Aluno reprovado\nMedia = %.2f", med_p);
    }else if(med_p <= 4.99){
        printf("Aluno na Recuperacao!\nMedia = %.2f",med_p);
    }else if(med_p > 4.9){
        printf("Aluno aprovado!\nMedia = %.2f", med_p);
    }

    printf("\n*******************************************************\n");
    return 0;
}
*/

/*MAIN E13
int main(){
    printf("\n*******************************************************\n");

    float n1,n2,n3;

    printf("Digite as notas:\n");
    scanf("%f %f %f", &n1, &n2, &n3);

    float med_p = ((n1 * 1) + (n2 * 1) + (n3 * 2))/(1+1+2);

    if(med_p < 60){
        printf("Media = %.2f\nREPROVADO",med_p);
    }else{
        printf("Media = %.2f\n Aprovado",med_p);
    }

    printf("\n*******************************************************\n");
    return 0;
}
*/

/*MAIN E12
int main(){
    printf("\n*******************************************************\n");

    int num;

    printf("Digite um numero:\n");
    scanf("%d",&num);

    double x = log(num);

    if( num < 0){
        printf("Numero invalido!\n");
    }else{
        printf("Logaritmo natural de %d = %lf", num, x);
    }

    printf("\n*******************************************************\n");
    return 0;
}
*/

/*MAIN E11

int main(){
    printf("\n*******************************************************\n");

    int num, soma;

    printf("Digite um numero inteiro:\n");
    scanf("%d",&num);


    if(num > 0){

        if( num <= 99){
            soma = (num / 10) + (num % 10);
            printf("Soma = %d", soma);
        }

        if( num >= 100 && num <= 999){

            soma = (num / 100) + ((num%100)/10) + ((num % 100) % 10);
            printf("Soma = %d", soma);

        }

        if(num > 999){
            soma = (num / 1000) + ((num%1000)/100) + (((num % 1000) % 100) / 10) + (((num % 1000) % 100) % 10);

            printf("Soma = %d", soma);
            

        }

    }else{
        printf("Numero invalido.");
    }

    printf("\n*******************************************************\n");
    return 0;
}

*/

/*MAIN E10
int main(){
    printf("\n*******************************************************\n");
    
    float alt;
    char sexo;


    printf("Digite a altura e o sexo:(-1 para sair)\n");
    scanf("%f %c", &alt, &sexo);

    switch (sexo)
    {
    case 'f':
        printf("Peso ideal = %.2f", ((62.1 * alt) - 44.7));
        break;
    case 'm':
        printf("Peso ideal = %.2f",((72.7 * alt ) - 58));
        break;
    
    default:
        printf("Valor invalido!\n");
        break;
    }
    printf("\n*******************************************************\n");
    return 0;
}
*/


/*MAIN E09
int main(){

    float sal_t, val_emp;

    printf("Digite o salario do trabalhador e o valor da prestação de um emprestimo:\n");
    scanf("%f %f", &sal_t, &val_emp);

    int a = sal_t*0.2;

    if ( val_emp > a){
        printf("Emprestimo nao concedido.\n");
    }else{
        printf("Emprestimmo Concedido.\n");
    }
    return 0;
}
*/


/*MAIN E08
int main(){
    printf("\n*******************************************************\n");

    float n1, n2;

    printf("Digite as notas:\n");
    scanf("%f %f", &n1, &n2);

    if(n1 >= 0.0 && n1 <= 10.0){
        printf("Media = %.2f",(n1+n2)/2);
    }else{
        printf("Nota Nao possui valor valido!\n");
    }

    printf("\n*******************************************************\n");
    return 0;
}
*/


/*MAIN E07
int main(){
    printf("\n*******************************************************\n");

    int n1, n2;

    printf("Digite dois numeros:\n");
    scanf("%d %d", &n1, &n2);

    if(n1 == n2){
        printf("Numeros Iguais.\n");
    }else if(n1 > n2){
        printf("MAIOR %d", n1);
    }else{
        printf("MAIOR %d", n2);
    }

    printf("\n*******************************************************\n");
    return 0;
}
*/

/*MAINE 06
int main(){
    printf("\n*******************************************************\n");

    int n1, n2;

    printf("Digite dois numeros:\n");
    scanf("%d %d", &n1, &n2);

    if(n1 > n2){
        printf("MAIOR %d\nDiferenca = %d\n", n1, n1-n2);
    }else{
        printf("MAIOR %d\nDiferenca = %d\n", n2, n2-n1);
    }

    printf("\n*******************************************************\n");
    return 0;
}
*/

/*MAIN E05
int main(){
    printf("\n*******************************************************\n");

    int num;

    printf("Digite um numero inteiro:\n");
    scanf("%d",&num);

    if(num % 2 == 0){
        printf("Numero PAR!");
    }else{
        printf("Numero IMPAR!");
    }


    printf("\n*******************************************************\n");

}
*/

/*MAIN E04
int main(){
    printf("\n*******************************************************\n");

    int num;

    printf("Digite um numero:\n");
    scanf("%d",&num);

    int a = num / 2;
    printf("%d",a);

    if(num / 2 > 0){
        printf("O numero %d ao quadrado = %d\n", num, num*num);
        
    }else{
        printf("A raiz quadrada do numero %d = %.2f",num, sqrt(num));
    }



    printf("\n*******************************************************\n");
    return 0;
}
*/

/*MAIN E03
int main(){
    printf("\n*******************************************************\n");

    float n1;

    printf("Digite um numero real:\n");
    scanf("%f",&n1);

    if( n1 / 2 >= 0){
        printf("Raiz Quadrada = %.2f",sqrt(n1));
    }else{
        printf("Numero %.2f ao Quadrado = %.2f", n1, n1*n1);
    }

    printf("\n*******************************************************\n");
    return 0;
}
*/

/*MAIN E02
int main(){
    printf("\n*******************************************************\n");

    int n1;

    printf("Digite um numero:\n");
    scanf("%d",&n1);

    if( n1 / 2  >= 0){
        printf("%.2f",sqrt(n1));
    }else{
        printf("\nNumero invalido.\n");
    }
    printf("\n*******************************************************\n");
    return 0;
}
*/

/*MAIN E01
int main(){
    printf("\n*******************************************************\n");

    int n1,n2;

    printf("Digite 2 numeros:\n");
    scanf("%d %d", &n1, &n2);

    if(n1 > n2){
        printf("Numero %d maior.", n1);
    }else{
        printf("Numero %d maior.",n2);
    }
    printf("\n*******************************************************\n");
    return 0;
}
*/