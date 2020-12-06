#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include "STRUCT.h"
#include "funcoes.h"




////////////////////////////////////////QUESTOES///////////////////////////////////////

//MAIN E11
int main(){


    



    return 0;
}



/*MAIN E10
int main(){


    tps_dados pessoas[3];

    for(int i = 0; i<=2;i++){
        printf("NOME\nDIGITE : \t");
        fflush(stdin);
        fgets(pessoas[i].nome,100,stdin);

        printf("ENDERECO\nDIGITE :\t");
        fflush(stdin);
        fgets(pessoas[i].end,500,stdin);

        printf("TELEFONE\nDIGITE :\t");
        fflush(stdin);
        fgets(pessoas[i].tel,15,stdin);

    }
    printf("\n=================== AGENDA ============\n");

    for(int j = 0; j<=2;j++){
        printf("NOME = |%s|\n",strtok(pessoas[j].nome,"\n"));
        printf("TELEFONE = |%s|\n",strtok(pessoas[j].tel,"\n"));
        printf("ENDEREÇO = |%s|\n",strtok(pessoas[j].end,"\n"));
        printf("|****************************************|\n");
    }
    return 0;
}
*/

/*MAIN E09
int main(){

    num_complex z,w;

    printf("1 NUMERO COMPLEXO[A+BI]\nDIGITE A :\t");
    scanf("%f",&z.real);
    printf("DIGITE B :\t");
    scanf("%f",&z.imag);
    printf("\n");
    printf("2 NUMERO COMPLEXO[C+DI]\nDIGITE C:\t");
    scanf("%f",&w.real);
    printf("DIGITE d :\t");
    scanf("%f",&w.imag);

    printf("\n====================================\n");
    soma_struct(&z,&w);
    printf("\n====================================\n");
    sub_struct(&z,&w);
    printf("\n====================================\n");
    prod_struct(&z,&w);
    printf("\n====================================\n");
    mod_struct(&z,&w);
    printf("\n====================================\n");

    return 0;
}
*/





/*MAIN E08
int main(){

    struct func_empresa gp;

    printf("NOME\nDIGITE:\t");
    fflush(stdin);
    fgets(gp.nome,100,stdin);

    printf("IDADE\nDIGITE :\t");
    scanf("%d",&gp.idade);

    printf("SEXO\nDIGITE :\t");
    fflush(stdin);
    scanf("%c",&gp.sexo);

    printf("CPF\nDIGITE :\t");
    fflush(stdin);
    fgets(gp.cpf,15,stdin);

    printf("DATA DE NASCIMENTO\nDIGITE :\t");
    scanf("%d %d %d",&gp.dat_n.dia,&gp.dat_n.mes,&gp.dat_n.ano);

    printf("CODIGO DO SETOR\nDIGITE :\t");
    scanf("%d",&gp.cod);

    printf("CARGO\nDIGITE :\t");
    fflush(stdin);
    fgets(gp.cargo,30,stdin);

    printf("SALARIO\nDIGITE :\t");
    scanf("%f",&gp.salario);


    printf("\n************** DADOS DO FUNCIONARIO ***************\n");

    printf("NOME =  |%s|\n",strtok(gp.nome,"\n"));
    printf("IDADE = |%d|\n",gp.idade);
    printf("SEXO = |%c|\n",gp.sexo);
    printf("CPF = |%s|\n",strtok(gp.cpf,"\n"));
    printf("DATA DE NASCIMENTO = [%d|%d|%d]\n",gp.dat_n.dia,gp.dat_n.mes,gp.dat_n.ano);
    printf("CODIGO DO SETOR = |%d|\n",gp.cod);
    printf("CARGO = |%s|\n",strtok(gp.cargo,"\n"));
    printf("SALARIO = |%.2f|\n",gp.salario);



    return 0;
}
*/




/*MAIN E07
void conv_pola_cart(struct cod_polar cod){
    struct cod_cart codf;
    codf.x = (cod.raio * cos(cod.arg));
    codf.y = (cod.raio * sin(cod.arg));

    printf("CORDENADA POLA = [ %.2f |%.2f |\n",cod.raio,cod.arg);
    printf("COORDENADA CARTESIANA = [ %.2f | %.2f ]\n",codf.x,codf.y);
}


int main(){

    struct cod_polar cod;

    printf("DIGITE A COORDENADA POLAR[raio,arg]: \n");
    scanf("%f %f",&cod.raio,&cod.arg);

    conv_pola_cart(cod);

    return 0;
}
*/

/*MAIN E06
int main(){

    float soma = 0;
    struct dados_alunos gp1[5];

    for(int i = 0; i<=4;i++){
        printf("NUMERO DE MATRICULA\nDIGITE :\t");
        scanf("%d",&gp1[i].num_mat);

        printf("NOME\nDIGITE :\t");
        fflush(stdin);
        fgets(gp1[i].nome,100,stdin);

        printf("CODIGO DA DISCIPLINA\nDIGITE :\t");
        scanf("%d",&gp1[i].cod_disp);

        printf("NOTA 1\nDIGITE :\t");
        scanf("%f",&gp1[i].n1);

        printf("NOTA 2\nDIGITE :\t");
        scanf("%f",&gp1[i].n2);

        soma = ((gp1[i].n1)*1) + ((gp1[i].n2)*2);
        gp1[i].media = soma/3;
    }

    for(int j = 0; j<=4; j++){
        printf("NUMERO DE MATRICULA : |%d|\n",gp1[j].num_mat);
        printf("CODIGO DA DISCIPLINA : |%d|\n",gp1[j].cod_disp);
        printf("NOME = |%s|\n",strtok(gp1[j].nome,"\n"));
        printf("MEDIA  = |%.2f|\n",gp1[j].media);
    }

    return 0;
}
*/



/*MAIN E05

void soma_2vet(struct vetor v3[2]){
    struct vetor soma_vet;
    for(int i = 0; i<2;i++){
        printf("VALOR DE |X| VETOR |%d|\nDIGITE :\t",i+1);
        scanf("%f",&v3[i].x);
        printf("VALOR DE |Y| VETOR |%d|\nDIGITE :\t",i+1);
        scanf("%f",&v3[i].y);
        printf("VALOR DE |Z| VETOR |%d|\nDIGITE :\t",i+1);
        scanf("%f",&v3[i].z);
    }

    soma_vet.x = v3[0].x + v3[1].x;
    soma_vet.y = v3[0].y + v3[1].y;
    soma_vet.z = v3[0].z + v3[1].z;

    printf("\nVETOR R^3 = ( %.0f | %.0f | %.0f )",soma_vet.x,soma_vet.y,soma_vet.z);

}

int main(){

    struct vetor v3[2];

    soma_2vet(v3);

    return 0;
}
*/

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