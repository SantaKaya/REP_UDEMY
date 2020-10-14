#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAMPILHA 10

int pilha[TAMPILHA] = {0,0,0,0,0,0,0,0,0,0};
int topo = 0;

///////PROTOTIPOS
void lista_elementos();
void push();
void pop();
void clear();



int main(){//inicio_main
    printf("\n*******************************************************\n");

    int opcao = 0;

    do{
        printf("Selecione a opcao:\n\n");
        printf("[1] - inserir(push):\n");
        printf("[2] - Remover(pop):\n");
        printf("[3] - Listar Elementos:\n");
        printf("[4] - Limpar a pilha:\n");
        printf("[-1] - Sair:\n");
        printf("OPCAO: ");
        scanf("%d",&opcao);

        switch (opcao)
        {
        case 1:
            push();
            break;
        case 2:
            pop();
            break;
        case 3:
            lista_elementos();
            break;
        case 4:
            clear();
            break;
        case -1:
            break;
    
        default:
            printf("Opcao invalida");
        }

    }while(opcao != -1);//condição de parada.


    printf("\n*******************************************************\n");
    printf("\n\n");
    return 0;
}//fim_main
/********************************FUNÇÕES**************************************/
//LISTANDO ELEMENTOS
void lista_elementos(){
    printf("\n==================PILHA ATUAL============================\n");
    for(int i = 0; i < TAMPILHA; i++){
        printf("-");
        printf("|%d|",pilha[i]);
        printf("-");
    }
    printf("\n|Topo| = %d",topo);
    printf("\n==========================================================\n");
}//fim_lista_elementos

//INSERINDO NA PILHA
void push(){
    
    int val;
    printf("Informe o valor:\n");
    scanf("%d",&val);

    if(topo < TAMPILHA){
        pilha[topo] = val;
        topo++;
        lista_elementos();
    }else{
        printf("Pilha Cheia!\n");
        }

}// fim_ push

//REMOVENDO DA PILHA

void pop(){
    if(topo >= 0 ){
        pilha[topo-1] = 0;
        topo--;
        lista_elementos(); 
    }else{
        printf("Pilha Vazia! Favor limpe a pilha[4] ou [-1] para sair.");
        }
}

//LIMPANDO PILHA
void clear(){
    for(int i = 0; i < TAMPILHA; i++){
        pilha[i] = 0;
    }
    topo = 0;
    lista_elementos();
}