#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include "STRUCT.h"




////////////////////////////////////////QUESTOES///////////////////////////////////////



//MAIN E03
int main(){



    return 0;
}




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