#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>



////////////////// STRUCTS////////////////



typedef struct{
    char nome[100];
    char end [500];
    char tel[15];
}tps_dados;


typedef struct{
    float real;
    float imag;
}num_complex;

/*
struct cod_cart{
    float x,y;
};


struct cod_polar{
    float raio,arg;
};

struct dados_alunos{
    int num_mat, cod_disp;
    char nome[100];
    float n1,n2;
    float media;
};

struct vetor{
    float x,y,z;
};

struct alunos_curso{
    int num_mat;
    char nome[100];
    float nt1,nt2,nt3;
    float media;
    int status;
};

struct aluno{
    char nome[100];
    int num_mat;
    char curso[70];
};
struct dados_pessoa{
    char nome[100];
    int idade;
    char end[500];
};

struct horario{
    int hora,minuto,segundos;
};

struct data{
    int dia,mes,ano;
};

struct compromisso{
    struct data data_compromisso;
    struct horario hora_compromisso;
    char texto[500];
};
struct agenda{
    struct horario hora_atual;
    struct data data_atual;
    struct compromisso comp;
};

struct func_empresa{
    char nome[100];
    int idade;
    char sexo;
    char cpf[15];

    struct data dat_n;

    int cod;
    char cargo[30];
    float salario;
};
*/