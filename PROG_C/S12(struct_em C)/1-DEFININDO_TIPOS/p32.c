#include <stdio.h>
#include <string.h>

struct st_aluno{
    char matricula[10]; 
    char nome[100];
    char curso[50];
    int ano_nascimento;
}alunos[5];//array 0...4

int main(){

    //struct st_aluno alunos[5];

    for(int i = 0; i < 5; i++){
        printf("Informe a matricula do aluno:\n");
        fgets(alunos[i].matricula,10,stdin);

        printf("Informe o nome do aluno:\n");
        fgets(alunos[i].nome,100,stdin);

        printf("Informe o curso do aluno:\n");
        fgets(alunos[i].curso,50,stdin);

        printf("Informe o ano de nascimento do aluno:\n");
        scanf("%d",&alunos[i].ano_nascimento);
        getchar();

    }//fim_for

    for(int i = 0; i < 5; i++){
    printf("===========================Dados do aluno  %d=====================\n",(i+1));
    printf("Matricula :%s\n", alunos[i].matricula);
    printf("Nome do Aluno:%s\n", alunos[i].nome);
    printf("Curso :%s\n", alunos[i].curso);
    printf("Ano de Nascimento:%d\n", alunos[i].ano_nascimento);
    }
    
    return 0;
}