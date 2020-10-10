#include <stdio.h>
#include <string.h>//acesso as funções de string


// A union separa e utiliza apenas o espaço da maior variavel.
union pessoa{
    char nome[100];// 1 char  = 1 byte ->1 * 100 = 100 bytes
    int idade;// 4 bytes 
    //-> total de 104 bytes.
};

int main(){
    printf("\n");

    union pessoa pes;//union(nome[100],idade)

    strcpy(pes.nome, "Angelina Jolie"); //copiando a string para a variavel pes.nome
    printf("Dados de %s\n",pes.nome);

    pes.idade = 39;
    printf("Ela tem %d anos\n",pes.idade);

    printf("Dados de %s\n",pes.nome);


    printf("\nTAMANHO MEMORIA(pes) : %ld bytes",sizeof(pes));


    printf("\n");
    printf("\n");
    return 0;
}