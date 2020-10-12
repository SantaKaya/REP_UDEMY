#include <stdio.h>
#include <stdlib.h>


#define TAMFILA 10

int fila[TAMFILA] = {0,0,0,0,0,0,0,0,0,0};
int head = 0;//proximo a ser atendido
int tail = 0;// ultimo da fila

void lista_elementos();
void enqueue();
void dequeue();
void clear();
void menu(int opcao);

int main(){//inicio_main
    printf("\n*******************************************************\n");

    int opcao = 0;

    do{
        printf("Selecione a opcao:\n");
        printf("[1] - Inserir (enqueue):\n");
        printf("[2] - Remover (dequeue):\n");
        printf("[3] - Listar:\n");
        printf("[4] - Limpar a fila:\n");
        printf("[-1] - Sair:\n");
        printf("\n\n");
        printf("Opcao: ");
        scanf("%d", &opcao);
        printf("\n******************************************************\n");

        switch (opcao)
        {
        case 1:
            enqueue();
            break;
        case 2:
            dequeue();
            break;
        case 3:
            lista_elementos();
            break;
        case 4:
            clear();
            break;
        
        default:
            printf("Opcao Invalida!\n");
        }


    }while(opcao != -1);

    printf("\n******************************************************\n");
    printf("\n");
    printf("\n");
    return 0;
}//fim_main
/*****************************FUNÇÕES************************************/

////////////////////////////////LISTAR_ELEMENTOS////////////////////////////////////////////
void lista_elementos(){
    printf("\n========================FILA ATUAL ===================\n");
    for (int i = 0; i < TAMFILA; i++){
        printf("-");
        printf("|%d|", fila[i]);
        printf("-");
    }
    printf("\nHead: %d\n", head);
    printf("\nTail: %d", tail);
    printf("\n======================================================\n\n");
};

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
};

///////////////////////////////REMOVER_ELEMENTOS////////////////////////////////////////////

void dequeue(){//temos que fazer uma verificação aqui, ver se o head é menor que o tail
    if(head < tail){
        fila[head] = 0;
        head++;
        lista_elementos();
    }else{
        printf("Fila vazia!\n");
    }
};

////////////////////////////////LIMPAR_ELEMENTOS////////////////////////////////////////////

void clear(){
    for (int i = 0; i < TAMFILA; i++){
        fila[i] = 0;
    }
    head = 0;
    tail = 0;
};


