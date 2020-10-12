#include <stdio.h>
#include <stdlib.h>
//FUNÇÕES_FILA
/////////////////////////////////DECLARAÇÃO_INICIALIZAÇÃO///////////////////////////////////
void inicializa_fila()
#define TAMFILA 10

int fila[TAMFILA] = {0,0,0,0,0,0,0,0,0,0};
int head = 0;//proximo a ser atendido
int tail = 0;// ultimo da fila

////////////////////////////////MENU_COMANDOS///////////////////////////////////////////////
void menu(int x){
    printf("Selecione a opcao:\n");
    printf("[1] - Inserir (enqueue):\n");
    printf("[2] - Remover (dequeue):\n");
    printf("[3] - Listar:\n");
    printf("[4] - Limpar a fila:\n");
    printf("[-1] - Sair:\n");
    printf("\n\n");
    printf("Opcao: ");
    scanf("%d", &x);
}

////////////////////////////////LISTAR_ELEMENTOS////////////////////////////////////////////
void lista_elementos(){
    printf("\n=============FILA ATUAL ==============\n");
    for (int i = 0; i < TAMFILA; i++){
        printf("-");
        printf("|%d|", fila[i]);
        printf("-");
    }
    printf("\nHead: %d\n", head);
    printf("\nTail: %d", tail);
    printf("\n======================================\n");
}

////////////////////////////////ADICIONAR_ELEMENTOS/////////////////////////////////////////
void enqueue(){

    int val;

    if(tail < TAMFILA){//varificando se a fila esta cheia
        printf("Informe o elemento para adicionar na fila:\n");
        scanf("%d", &val);
        fila[tail] = val;
        tail++;
        lista_elementos();
    }else{
        printf("A fila esta cheia!\n");
    }
}

///////////////////////////////REMOVER_ELEMENTOS////////////////////////////////////////////

void dequeue(){//temos que fazer uma verificação aqui, ver se o head é menor que o tail
    if(head < tail){
        fila[head] = 0;
        head++;
        lista_elementos();
    }else{
        printf("Fila vazia!\n");
    }
}

////////////////////////////////LIMPAR_ELEMENTOS////////////////////////////////////////////

void clear(){
    for (int i = 0; i < TAMFILA; i++){
        fila[i] = 0;
    }
    head = 0;
    tail = 0;
}
