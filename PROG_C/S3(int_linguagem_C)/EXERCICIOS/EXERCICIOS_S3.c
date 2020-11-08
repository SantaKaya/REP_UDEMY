#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <math.h>

#define PI 3.14
///////////////////////////////variaveis//////////////////////////////////

/*MAIN E53
int main(){
    printf("\n*******************************************************\n");

    float cpm, lag, p;

    printf("Digite o tamanha do terreno(comprimento X largura):\n");
    scanf("%f %f", &cpm, &lag);

    printf("\nDigite o preco do metro de tela:\n");
    scanf("%f", &p);

    float ct = (cpm*lag)*p;

    printf("\nCusto para cercar o terreno R$ = %.2f\n", ct);




    printf("\n*******************************************************\n");
    return 0;
}
*/


/*MAIN E52
int main(){
    printf("\n*******************************************************\n");

    float A1,A2,A3;
    float prem;

    printf("Quanto cada apostador investiu? (A1|A2|A3)\n");
    scanf("%f %f %f", &A1, &A2, &A3);

    printf("Digite o valor do PREMIO:\n");
    scanf("%f", &prem);

    printf("***Valor premio = %.1f*****\n",prem);

    float total = A1 + A2 + A3;

    float PA1 = (A1/total);
    float PA2 = (A2/total);
    float PA3 = (A3/total);

    A1 = prem * PA1;
    A2 = prem * PA2;
    A3 = prem * PA3;
    
    printf("\nAmigo 1 = %.1f\nAmigo 2 = %.1f\nAmigo 3 = %.1f\n", A1, A2, A3);



    printf("\n*******************************************************\n");
    return 0;
}
*/

/*MAIN E51
int main(){
    printf("\n*******************************************************\n");

    int x, y, Ox, Oy;
    int a1;

    printf("Digite a quantidade de pontos:\n");
    scanf("%d", &a1);


    while(a1 != 0){
        Ox = 0;
        Oy = 0;
        printf("\nDigite as coordenadas x e y: \n");
        scanf("%d %d", &x, &y);
        Ox = Ox - x;
        Oy = Oy -y;
        printf("\nDistancia da origem (%d,%d)\n", Ox, Oy);
        a1--;

    }
    printf("\n*******************************************************\n");
    return 0;
}
*/

/*MAIN E50
int main(){
    printf("\n*******************************************************\n");

    int idad,ano;

    printf("Digite sua idade e o ano atual:\n");
    scanf("%d %d", &idad, &ano);

    int nasc = ano - idad;

    printf("Ano de Nascimento: %d\n", nasc);

    printf("\n*******************************************************\n");
    return 0;
}
*/

/*MAIN E49
int main(){
    printf("\n*******************************************************\n");

    int h,m,s, dur_s;

    printf("Digite o horario de inicio H|M|S:\n");
    scanf("%d %d %d",&h,&m,&s);
    

    printf("Digite a duração do experimento em segundos:\n");
    scanf("%d",&dur_s);

    //calculo das h m s;
    int a = dur_s/3600;
    printf("ADD horas = %d\n",a);
    dur_s = dur_s - 3600;
    //printf("duracao restante = %d\n",dur_s);

    int b = dur_s/60;
    printf("ADD minutos = %d\n",b);

    dur_s = dur_s - (b*60);
    printf("duracao restante = %d\n",dur_s);
   
    h = h + a;
    m = m + b;
    s = s + dur_s;

    if(m > 60 ){
        m = m - 60;
        h++;
    }
    if( s > 60){
        s = s - 60;
        m++;
        if(m > 60){
            m = m -60;
            h++;
        }
    }

    printf("|%dH:%dM:%dS|",h,m,s );

    printf("\n*******************************************************\n");
    return 0;
}
*/

/*MAIN E48
int main(){
    printf("\n*******************************************************\n");

    int val_s,horas = 0;
    
    printf("Digite um valor em segundos:\n");
    scanf("%d",&val_s);

    int minutos = val_s / 60 ;
    printf("%d\n", minutos);
    if(minutos > 60){
        minutos = minutos - 60;
        printf("\nMinutos = %d\n",minutos);
        horas++;
    }

    int seg = (val_s % 60);
    //printf("%d\n",seg);
    

    printf("%d : %d : %d",horas,minutos,seg);

    printf("\n*******************************************************\n");
    return 0;
}
*/

/*MAIN E47
int main(){
    printf("\n*******************************************************\n");

    int num;

    printf("Digite um numero de 1000 a 9999:\n");
    scanf("%d", &num);///2356
    printf("\n** NUMERO DIGITADO %d**\n",num);

    int mil = num / 1000;//2
    printf("%d",mil);

    int cent = (num % 1000) / 100;
    printf("\n%d",cent);

   int dez = ((num % 1000) % 100) / 10;
   printf("\n%d",dez);
    
    int uni = ((num % 1000) % 100) % 10;
   printf("\n%d",uni);


    printf("\n*******************************************************\n");
    return 0;
}
*/

/*MAIN E46
int main(){
    printf("\n*******************************************************\n");

    int num, cent;

    printf("Digite um numero inteiro de 3 digitos :\n");
    scanf("%d",&num);

    // PRIEMIRO VALOR
    cent = num / 100;
    printf("%d\n",cent);
  
    // SEGUNDO VALOR
    int dez = (num % 100) / 10;
    printf("%d\n",dez);
    dez = dez * 10;
    // TERCEEIRO
    int uni = (num % 100) % 10;
    uni = uni * 100;
    //printf("%d",uni);

    int soma = uni + dez + cent;

    printf("NUMERO = %d\nNUMERO INVERTIDO = %d", num, soma);

    printf("\n*******************************************************\n");
    return 0;
}
*/

/*MAIN E45
int main(){
    printf("\n*******************************************************\n");

    char let_M, let_m;

    printf("Digite uma letra maiuscula:\n");
    scanf("%c",&let_M);

    int a = let_M;
    

    let_m = a + 32;

    printf("A letra digitada %c em minusculo eh : %c", let_M, let_m);



    printf("\n*******************************************************\n");
    return 0;
}
*/

/*MAIN E44
int main(){
    printf("\n*******************************************************\n");

    float alt_deg, alt_usr;

    printf("Digite a altura do degrau e a altura desejada:\n");
    scanf("%f %f", &alt_deg, &alt_usr);

    float alt_t = alt_usr/alt_deg;

    printf("Quantidade de degraus necessarios : %.2f",alt_t);

    printf("\n*******************************************************\n");
    return 0;
}
*/

/*MAIN E43
int main(){
    printf("\n*******************************************************\n");

    float valor_t;

    printf("Digite o valor total:\n");
    scanf("%f",&valor_t);

    float val_desc = valor_t - (valor_t * 0.1);
    float val_par = valor_t/3;
    float val_comAV = val_desc * 0.05;
    float val_comPC = valor_t * 0.05;

    printf("Total + 10%% : R$ = %.2f\n", val_desc);
    printf("Parcelado 3x : R$ = %.2f\n", val_par);
    printf("Comissao a vista : R$ %.2f\n", val_comAV);
    printf("Comissao Parcelada : R$ %.2f\n", val_comPC);


    printf("\n*******************************************************\n");

    return 0;
}
*/

/*MAIN E42
int main(){
    printf("\n*******************************************************\n");

    float sal_b,sal_n;

    float gt = 0.05, imp = 0.07;

    printf("Digite o salario baase:\n");
    scanf("%f",&sal_b);

    sal_n = (sal_b + (sal_b*gt) - (sal_b*imp));

    printf("Salario a receber R$ = %.2f", sal_n);

    printf("\n*******************************************************\n");
    return 0;
}
*/

/*MAIN E41
int main(){
    printf("\n*******************************************************\n");

    float val_ht,horas_t,sal;

    printf("Digite o valor da hora de trabalho e o numero de horas trabalhada no mes:\n");
    scanf("%f %f", &val_ht, &horas_t);

    sal = (val_ht * horas_t) + (val_ht * horas_t)*0.1;

    printf("Valor a ser pago R$ = %.2f", sal);

    printf("\n*******************************************************\n");
    return 0;
}
*/

/*MAIN E40
int main(){
    printf("\n*******************************************************\n");

    #define imp 0.08

    int dt;
    float sal;

    printf("Numero de dias trabalhados:\n");
    scanf("%d",&dt);

    sal = ((dt*30) - (dt * 30)*imp);   

    printf("Quantia a ser paga R$ = %.2f",sal);


    printf("\n*******************************************************\n");

}
*/

/*MAIN E39
int main(){
    printf("\n*******************************************************\n");

    float total, g1, g2, g3;

    total = 780000;

    g1 = total * 0.46;
    g2 = (total - (total * 0.46)) * 0.32;
    g3 = total - (total * 0.78);

    printf("Ganhador 1 = %.2f\nGanhador 2 = %.2f\nGanhador 3 = %.2f",g1,g2,g3);

    printf("\n*******************************************************\n");
    return 0;
}
*/

/*MAIN E38
int main(){
    printf("\n*******************************************************\n");

    float sal,aum;

    printf(" Digite o salario:\n");
    scanf("%f",&sal);

    aum = sal + (sal * 0.25);
    
    printf("Novo salario: %.2f",aum);



     printf("\n*******************************************************\n");
    return 0;
}
*/

/*MAIN E37
int main (){
    printf("\n*******************************************************\n");

    #define desc 0.12

    float val;

    printf("Digite o valor do produto:\n");
    scanf("%f",&val);

    printf("Valor com Desconto = %.2f", val - (val * desc));

    printf("\n*******************************************************\n");
    return 0;
}

*/

/*MAIN E36
int main(){
    printf("\n*******************************************************\n");

    float alt, raio;

    printf(" ALTURA & RAIO :\n");
    scanf("%f %f", &alt, &raio);

    #define PI 3.141592
    
    float vol = PI * (raio*raio) * alt;

    printf("VOL. CILINDRO = %.2f", vol);


    printf("\n*******************************************************\n");
    return 0;
}
*/

/*MAIN E35
int main(){
    printf("\n*******************************************************\n");

    float a,b;

    printf("Digite os catetos (a e b) do triangulo:\n");
    scanf("%f %f", &a, &b);

    float hip = sqrt((a*a)+(b*b));

    printf("HIPOTENUSA = %.2f",hip);


    printf("\n*******************************************************\n");
    return 0;
}
*/

/*MAIN E34
int main(){
    printf("\n*******************************************************\n");

    #define PI 3.141592

    float R, A;

    printf("Raio :\n");
    scanf("%f",&R);

    A = PI * (R*R);

    printf("Area = %.2f",A);


    printf("\n*******************************************************\n");
    return 0;
}
*/

/*MAISN E32
int main(){
    printf("\n*******************************************************\n");

    int num, soma;

    printf("Digite um numero inteiro:\n");
    scanf("%d",&num);

    soma = ((num*3) + 1) + ((num*2) - 1);

    printf("Soma = %d", soma);


    printf("\n*******************************************************\n");
    return 0;
}
*/

/*MAIN E31
int main(){
    printf("\n*******************************************************\n");

    int num;

    printf("Digite um numero inteiro:\n");
    scanf("%d",&num);

    printf("Antecessor = %d | Sucessor = %d", num - 1, num + 1);


    printf("\n*******************************************************\n");
    return 0;
}
*/

/*MAIN E30
int main(){
    printf("\n*******************************************************\n");

    float rl,ct;

    printf("Digite o valor em real e a cotacao em dolares:\n");
    scanf("%f %f", &rl, &ct);

    float dol = rl / ct;

    printf("\nValor em dolares = %.2f", dol);


    printf("\n*******************************************************\n");
    return 0;
}
*/

/*MAIN E29
int main(){
    printf("\n*******************************************************\n");

    float n1,n2,n3;

    printf("Digite o valor das notas:\n");
    scanf("%f %f %f", &n1, &n2, &n3);

    float med = (n1 + n2 + n3)/3;

    for(int i = 0; i < 3; i++){
        printf("\nNota %d = %.2f\n", i + 1, n1 );
    }

    printf("\nMedia final = %.2f\n",med);


    printf("\n*******************************************************\n");
    return 0;
}
*/

/*MAIN E28
int main(){
    printf("\n*******************************************************\n");

    float v1,v2,v3,a1;

    printf("Digite 3 valores:\n");
    scanf("%f %f %f", &v1, &v2, &v3);

    a1 = (v1*v1) + (v2*v2) + (v3*v3);

    printf("Soma dos quadrados de %f, %f, %f = %.3f", v1, v2, v3, a1);

    printf("\n*******************************************************\n");
    return 0;
}
*/

/*MAIN E27
int main(){
    printf("\n*******************************************************\n");

    float mq, hct;

    printf("Hectares:\n");
    scanf("%f",&hct);

    mq = hct * 10000;

    printf("Metros Quadrados = %.3f", mq);


    printf("\n*******************************************************\n");
    return 0;
}
*/

/*MAIN E26
int main(){
    printf("\n*******************************************************\n");

    float mq, hct;

    printf("Metros Quadrados:\n");
    scanf("%f",&mq);

    hct = mq * 0.0001;

    printf("hectares = %.3f",hct);




    printf("\n*******************************************************\n");
    return 0;
}
*/

/*MAIN E25
int main(){
    printf("\n*******************************************************\n");

    float mq,ac;

    printf("Acres:\n");
    scanf("%f",&ac);

    mq = ac * 4048.58;

    printf("Metros Quadrados = %.3f", mq);



    printf("\n*******************************************************\n");
    return 0;
}
*/

/*MAIN E24
int main(){
    printf("\n*******************************************************\n");

    float mq,ac;

    printf("Metros quadrados:\n");
    scanf("%f",&mq);

    ac = mq * 0.000247;

    printf("Acres = %.3f",ac);



    printf("\n*******************************************************\n");
    return 0;
}
*/

/*MAIN E23
int main(){
    printf("\n*******************************************************\n");

    float mt,jd;

    printf("Digite o valor em metros:\n");
    scanf("%f",&mt);

    jd = mt/0.91;

    printf("Valor em jardas:\n%.2f", jd);





    printf("\n*******************************************************\n");
    return 0;
}
*/

/*MAIN E22
int main(){
    printf("\n*******************************************************\n");

    float jd, mt;
    printf("Valor de comprimento em jardas:\n");
    scanf("%f",&jd);

    mt = 0.91 * jd;

    printf("Valor em metros:\n%.2f", mt);




    printf("\n*******************************************************\n");
    return 0;
}
*/

/*MAIN E21
int main(){
    printf("\n*******************************************************\n");

    float kg,lb;

    printf("Valor em libras:\n");
    scanf("%f",&lb);

    kg = lb * 0.45;

    printf("Valor em quilogramas:\n%.2f", kg);



    printf("\n*******************************************************\n");
    return 0;
}
*/

/*MAIN E20
int main(){
    printf("\n*******************************************************\n");

    float kg,lb;

    printf("Valor em Quilogramas:");
    scanf("%f",&kg);

    lb = kg/0.45;

    printf("Valor em libras",lb);



    printf("\n*******************************************************\n");
    return 0;
}

*/

/*MAIN E19
int main(){

    printf("\n*******************************************************\n");

    float m3, lt;

    printf("Digite valor Litros:");
    scanf("%f",&lt);

    m3 = lt / 1000 ;

    printf("Valor em litros = %.4f", m3);
    


    printf("\n*******************************************************\n");
    printf("\n");
    printf("\n");
    return 0;

}
*/

/*MAIN E18
int main(){

    printf("\n*******************************************************\n");

    float m3, lt;

    printf("Digite valor m^3:");
    scanf("%f",&m3);

    lt = 1000 * m3;

    printf("Valor em litros = %.2f", lt);
    


    printf("\n*******************************************************\n");
    printf("\n");
    printf("\n");
    return 0;
}*/

/*MAIN E17
int main(){

    printf("\n*******************************************************\n");

    float pol, cent;

    printf("Centimetros:");
    scanf("%f",&pol);

    pol = cent / 2.54;

    printf("Polegadas = %.2f", cent);
    


    printf("\n*******************************************************\n");
    printf("\n");
    printf("\n");
    return 0
}
*/

/*MAIN E16
int main(){//inicio_main
    printf("\n*******************************************************\n");

    float pol, cent;

    printf("Polegadas:");
    scanf("%f",&pol);

    cent = pol * 2.54;

    printf(" Centimetros = %.2f", cent);
    


    printf("\n*******************************************************\n");
    printf("\n");
    printf("\n");
    return 0;
}//fim_main

*/

/*MAIN E15
int main(){
    printf("\n*******************************************************\n");

    float r,g;

    printf("Digite um numero em radianos:\n");
    scanf("%f",&g);

    g = (r*180)/PI;

    printf("Graus:%.2f\n", g);


    printf("\n*******************************************************\n");
    printf("\n");
    printf("\n");
    return 0;
}//fim_main
/********************************ANOTAÇÕES*****************************************

*/

/*MAIN E14
int main(){//inicio_main
    printf("\n*******************************************************\n");

    float a = 0;

    printf("Graus:\n");
    scanf("%f",&a);

    printf("Radianos:%.2f\n", a*PI/180);




    printf("\n*******************************************************\n");
    printf("\n");
    printf("\n");
    return 0;
}//fim_main
*/

/*MAIIN E13
int main(){//inicio_main
    printf("\n*******************************************************\n");

    float km;

    printf("Digite a distancia em km:\n");
    scanf("%f",&km);

    printf("A distancia em milhas eh: ¨%.2f", km/(1.61));

    printf("\n*******************************************************\n");
    printf("\n");
    printf("\n");
    return 0;
}//fim_main
*/

/*MAIN E12
#include <stdio.h>
#include <stdlib.h>

int main(){

    float ml,kmh;

    printf("Diite sua distancia em milhas:\n");
    scanf("%f",&ml);

    kmh = 1.61 * ml;

    printf("Distancia em Km/h: %.2f",kmh);



    return 0;
}
*/

/*MAIN E11
    int main(){

    float ms,kmh;
    
    ms_kmh(ms,kmh);


    return 0;
}
*/

/*MAIN E10
int main(){

    //declarando_variaveis
    float kmh,ms;

    //entrada_dados
    printf("Digite sua velocidade(km/h)");
    scanf("%f",&kmh);

    //processamento_dados
    ms = kmh/3.6;

    //saida_dados
    printf("Sua velocidade em m/s eh: %.3f",ms);


    return 0;
}
*/

/*MAIN E09
int main(){

    //declarando_variaveis
    float kel,cel;

    //entrada_dados
    printf("Digite sua temperatura em Celcius:\n");
    scanf("%f",&cel);

    //processamento_dados
    kel = cel + x;

    //saida_dados
    printf("Sua temperatura em Kelvin eh:\n %.2f",kel);


    return 0;
}
*/

/*MAIN E08

#define x 273.15

int main(){

    //declarando_variaveis
    float cel, kel;


    //entrada_dados
    printf("Digite sua temperatura em Kelvin:\n");
    scanf("%f",&kel);

    //processamento_dados
    cel = kel - x;

    //saida_dados
    printf("Sua temperatura em celcius eh: %.3f",cel);

    return 0;
}
*/

/*MAIN E07
int main(){

    //declarando_variaveis
    float c,f;
    
    //entrada_dados
    printf("Digite sua temperatura em Fahrenheit:\n");
    scanf("%f",&f);

    //processamento_dados
    c = 5*(f - 32)/9;

    //saida_dados
    printf("Sua temperatura em Celsius eh: %.2f",c);


    return 0;
}
*/

/*MAIN 06
int main(){

    //declarando_variaveis
    float temp, f;


    //entrada_dados
    printf("Digite a temperatura em Celcius:\n");
    scanf("%f",&temp);

    //processamento_dados
    f = (temp*9/5) + 32;

    //saida_dados
    printf("Sua temperatura em Fahrenheit eh: %.2f",f);


    return 0;
}
*/

/*MAIN 05
int main(){

    //declarando_variaveis
    double numero, quintap;

    //entrada_dados
    printf("Digite o numero real:\n");
    scanf("%lf",&numero);

    //processamento_dados

    quintap = numero * 1/5;

    //saida_dados
    printf("A quinta parte do numero %.3lf eh:\n %.3lf \n",numero, quintap);


    return 0;
}
*/

/*MAIN 04
    int main(){

    //declarando_variaveis
    float numero, quadrado;

    //entrada_dados
    printf("Digite um numero real:\n");
    scanf("%f",&numero);

    //processamento_dados
    quadrado = numero*numero;
    //saida_dados
    printf("O Quadrado do valor digitado eh: %.4f",quadrado);


    return 0;
}
*/

/*MAIN 03
#include <stdio.h>

int main(){

    //declarando_variaveis
    int valor1, valor2, valor3, i = 0,soma;

    //entrada_dados
    if (i < 3){
        printf("Digite 3 valores inteiros:\n");
        scanf("%d %d %d",&valor1,&valor2,&valor3);
        i++;
    }

    //processamento_dados
    soma = valor1 + valor2 + valor3;

    //saida_dados
    printf("A soma eh: %d",soma);


    return 0;
}
*/

/*MAIN 02
int main(){

    //declaração_variaveis
    float numero;

    //entrada_dados
    printf("Digite um numero:\n");
    scanf("%f",&numero);

    //processamento_dados

    //saida_dados
    printf("O Numero real digitado foi: %.4f",numero);


    return 0;
}
*/

/*MAIN 01
int main(){

    //declaração_variaveis
    int numero;

    //Entrada_dados
    printf("Digite um numero:\n");
    scanf("%d",&numero);

    //Processamento_dados

    //Saida_dados
    printf("O numero digitado foi: %d",&numero);

    return 0;
}
*/
