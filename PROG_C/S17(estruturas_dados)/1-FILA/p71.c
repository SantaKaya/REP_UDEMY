#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAMFILA 10

// FILA / QUEUE
int fila[TAMFILA] = {0,0,0,0,0,0,0,0,0,0};
int head = 0;//proximo a ser atendido
int tail = 0;// ultimo da fila

// função para listar os elementos da fila.
void lista_elementos(){
    printf("\n=============FILA ATUAL ==============\n");
    for (int i = 0; i < TAMFILA; i++){
        printf("-");
        printf("|%d|", fila[i]);
        printf("-");
    }
    printf("\nHead: %d\n", head);
    printf("\nTail: %d", tail);
    printf("\n\n");
}

//Função para adicionar da fila.
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

// Função para remover da fila..

void dequeue(){//temos que fazer uma verificação aqui, ver se o head é menor que o tail
    if(head < tail){
        fila[head] = 0;
        head++;
        lista_elementos();
    }else{
        printf("Fila vazia!\n");
    }
}

//limpar fila clear, tbm temos que zerar o head e o tail se não eles continuam incrementados.

void clear(){
    for (int i = 0; i < TAMFILA; i++){
        fila[i] = 0;
    }
    head = 0;
    tail = 0;
}

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
            clear();;
            break;
        
        default:
            printf("Opcao Invalida!\n");
        }


    }while(opcao != -1);




    printf("\n*******************************************************\n");
    printf("\n");
    printf("\n");
    return 0;
}//fim_main
/********************************ANOTAÇÕES*****************************************
//declarando_variaveis
//entrada_dados
//processamento_dados
//saida_dados


*/
