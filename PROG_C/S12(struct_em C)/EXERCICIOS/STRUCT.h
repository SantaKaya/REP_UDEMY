#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>



////////////////// STRUCTS////////////////

struct dados_pessoa{
    char nome[100];
    int idade;
    char end[500];
};

struct horario{
    int hora,minuto,segundos
};

struct data{
    int dia,mes,ano;
};

struct compromisso{
    struct data data_compromisso;
    struct horario hora_compromisso;
    char texto[500];
};
struct agenda {
    struct horario hora_atual;
    struct data data_atual;
    struct compromisso comp;
};