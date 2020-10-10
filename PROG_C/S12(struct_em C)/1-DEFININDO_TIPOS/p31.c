#include <stdio.h>
#include <string.h>

struct st_aluno{
    char matricula[10]; 
    char nome[100];
    char curso[50];
    int ano_nascimento;
}aluno1;

int main(){

    

    printf("Informe a matricula do aluno:\n");
    fgets(aluno1.matricula,10,stdin);

    printf("Informe o nome do aluno:\n");
    fgets(aluno1.nome,100,stdin);

    printf("Informe o curso do aluno:\n");
    fgets(aluno1.curso,50,stdin);

    printf("Informe o ano de nascimento do aluno:\n");
    scanf("%d",&aluno1.ano_nascimento);

    printf("===========================Dados do aluno=====================\n");
    printf("Matricula :%s\n", aluno1.matricula);
    printf("Nome do Aluno:%s\n", aluno1.nome);
    printf("Curso :%s\n", aluno1.curso);
    printf("Ano de Nascimento:%d\n", aluno1.ano_nascimento);
    
    
    return 0;
}