#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <math.h>

#define PI 3.14
///////////////////////////////variaveis//////////////////////////////////

//MAIN E40
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



