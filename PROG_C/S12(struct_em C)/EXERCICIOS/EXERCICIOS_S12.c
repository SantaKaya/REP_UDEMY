#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include "STRUCT.h"




////////////////////////////////////////QUESTOES///////////////////////////////////////


/*MAIN E04
int main(){

    int M=0,m=0,M_n1 = 0;
    float soma = 0,M_m_g = 1,m_m_g = 100,M_nt1 = 1;
    struct alunos_curso gp1[5];

    for(int i = 0; i<=4;i++){

        printf("NUMERO DE MATRICULA\nDIGITE :\t");
        scanf("%d",&gp1[i].num_mat);

        printf("NOME\nDIGITE :\t");
        fflush(stdin);
        fgets(gp1[i].nome,100,stdin);

        printf("\nNOTA 1 : \t");
        scanf("%f",&gp1[i].nt1);
        if(gp1[i].nt1>M_nt1){
            M_nt1 = gp1[i].nt1;
            M_n1 = i;
        }

        printf("\nNOTA 2 : \t");
        scanf("%f",&gp1[i].nt2);

        printf("\nNOTA 3 : \t");
        scanf("%f",&gp1[i].nt3);

        soma = gp1[i].nt1 + gp1[i].nt2 + gp1[i].nt3;
        gp1[i].media = soma/3;
        printf("\nMEDIA = |%.2f|\n",gp1[i].media);

        if(gp1[i].media>M_m_g){
            M_m_g = gp1[i].media;
            M = i;
        }else if(gp1[i].media < m_m_g){
            m_m_g = gp1[i].media;
            m = i;
        }

        if(gp1[i].media>=6){
            gp1[i].status = 1;
        }else if(gp1[i].media<6){
            gp1[i].status = 0;
        }
    }

    printf("\n=======|STATUS ALUNOS GP1|=======\n");

    for(int j = 0; j<=4;j++){
        printf("\nNUMERO DE MATRICULA : |%d|\n",gp1[j].num_mat);
        printf("NOME : |%s|\n",strtok(gp1[j].nome,"\n"));
        if(gp1[j].status == 1){
            printf("STATUS = |APROVADO|\n");
        }else if(gp1[j].status == 0){
            printf("STATUS = |REPROVADO|");
        }
        
    }


    printf("\n\n=======|DADOS EXTRAS|========\n\n");

    printf("\n***MAIOR NOTA DA 1 PROVA***\n");
    printf("\nNOME : %s",strtok(gp1[M_n1].nome,"\n"));
    printf("\nNOTA = |%.2f|\n",gp1[M_n1].nt1);

    printf("\n***MAIOR MEDIA GERAL***\n");
    printf("\nNOME : %s",strtok(gp1[M].nome,"\n"));
    printf("\nNOTA = |%.2f|\n",gp1[M].media);

    printf("\n***MENOR MEDIA GERAL***\n");
    printf("\nNOME : %s",strtok(gp1[m].nome,"\n"));
    printf("\nNOTA = |%.2f|\n",gp1[m].media);

    return 0;
}
*/


/*MAIN E03
int main(){

    struct aluno grupo1[5];

    for(int i = 0; i<=4;i++){
        printf("NOME\nDIGITE :\t");
        fflush(stdin);
        fgets(grupo1[i].nome,100,stdin);

        printf("NUMERO DE MATRICULA\nDIGITE :\t");
        scanf("%d",&grupo1[i].num_mat);

        printf("CURSO\nDIGITE :\t");
        fflush(stdin);
        fgets(grupo1[i].curso,70,stdin);

    }

    printf("\n===============DADOS ALUNOS GRUPO 1================\n");

    for(int j = 0; j<=4; j++){
        printf("NOME : |%s|\n", strtok(grupo1[j].nome,"\n"));
        printf("NUMERO DE MATRICULA : |%d|\n",grupo1[j].num_mat);
        printf("CURSO : |%s|\n",strtok(grupo1[j].curso,"\n"));
    }
    return 0;
}
*/



/*MAIN E02
int main(){
    struct dados_pessoa dados;

    printf("NOME\nDIGITE:\t");
    fflush(stdin);
    fgets(dados.nome,100,stdin);

    printf("IDADE\nDIGITE :\t");
    scanf("%d",&dados.idade);
    fflush(stdin);
    printf("ENDEREÇO\nDIGITE :\t");
    fgets(dados.end,500,stdin);

    printf("\n=================DADOS ARMAZENADOS=========================\n");
    printf("NOME : %s\n ",strtok(dados.nome,"\n"));
    printf("IDADE : %d\n",dados.idade);
    printf("ENDEREÇO : %s\n",strtok(dados.end,"\n"));

}
*/


/*MAIN E01
int main(){

    struct agenda agenda1;
    
    
    printf("digite o horario[h,m,s]:\n");
    scanf("%d %d %d",&agenda1.hora_atual.hora,&agenda1.hora_atual.minuto,&agenda1.hora_atual.segundos);

    printf("digite a data [d,m,a]:\n");
    scanf("%d %d %d",&agenda1.data_atual.dia,&agenda1.data_atual.mes,&agenda1.data_atual.ano);

    printf("Digite a data do compromisso [d,m,a] :\n");
    scanf("%d %d %d",&agenda1.comp.data_compromisso.dia,&agenda1.comp.data_compromisso.mes,&agenda1.comp.data_compromisso.ano);

    printf("Digite o horario do compromisso[h,m,s] :\n");
    scanf("%d %d %d",&agenda1.comp.hora_compromisso.hora,&agenda1.comp.hora_compromisso.minuto,&agenda1.comp.hora_compromisso.segundos);
    fflush(stdin);
    printf("digite o descritivo do compromisso:\n=");
    fgets(agenda1.comp.texto,500,stdin);
    // fgets(agenda1.comp.texto,500,stdin);

    return 0;
}
*/