#include <stdio.h>
#include <string.h>

struct st_contato{

    char nome[100];
    int ano_nascimento;
    char telefone[20];
    char email[100];

};//array 0...4

struct st_agenda{

    struct st_contato contatos[100];

}agenda;

int main(){

    //struct st_aluno alunos[5];

    for(int i = 0; i < 3; i++){

        printf("Informe o nome:\n");
        fgets(agenda.contatos[i].nome,100,stdin);

        printf("Informe o ano de nascimento:\n");
        scanf("%d",&agenda.contatos[i].ano_nascimento);
        getchar();

        printf("Informe o telefone:\n");
        fgets(agenda.contatos[i].telefone,50,stdin);

        printf("Informe O EMAIL:\n");
        fgets(agenda.contatos[i].email,100,stdin);
        

    }//fim_for

printf("===========================AGENDA DE CONTATO=====================\n");

    for(int i = 0; i < 3; i++){
    printf("===========================CONTATO: %d=====================\n",(i+1));
    printf("Nome :%s\n", strtok(agenda.contatos[i].nome,"\n"));
    printf("Telefone :%s\n", strtok(agenda.contatos[i].telefone,"\n"));
    printf("Email:%s\n", strtok(agenda.contatos[i].email,"\n"));
    printf("Ano de Nascimento:%d\n", strtok(agenda.contatos[i].ano_nascimento,"\n"));
    }
    
    return 0;
}