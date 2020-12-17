#include <stdio.h>
#include <stdlib.H>
#include <math.h>
#include <string.h>
#include "pilha.h"
#include "funcoes_p3.c"
#include "FILA.h"
#include "funcoes_p2.c"


//////////////////////////////////// QUESTOES ///////////////////////////////////

/////////////////////// P3//////////////////////////////////////////////////////


/*MAIN E10
int main(){

    srand(time(NULL));

    tp_pilha pilha;

    inicializa_pilha(&pilha);

    int tam;
    
    printf("DIGITE O TAMANHO DA PILHA:\t");
    scanf("%d",&tam);

    for(int i = 0; i<=tam; i++){
        push(&pilha,1+rand()/10);
    }

    M_m_med(&pilha,tam);

    return 0;
}
*/



/*MAIN E09
int main(){

    int tam,aux;
    tp_pilha pilha;
    inicializa_pilha(&pilha);
    
    printf("DIGITE O TAMANHO DO ARRAY:\t");
    scanf("%d",&tam);
    
    int array[tam+1];
    array[0]=tam;
    
    for(int i =1; i<tam+1;i++){
        printf("ARRAY[%d] :\t",i);
        scanf("%d",&array[i]);
        push(&pilha,array[i]);
    }

    ordem_pilha(&pilha,array);
    

    int j = tam;
    for(j = 0; j<tam;j++){
        pop(&pilha,&aux);
    }

    return 0;
}
*/






/*MAIN E08
int main(){

    char string[100];
    tp_pilha pilha;

    printf("DIGITE A EXPRESSAO:\n");;
    fflush(stdin);
    fgets(string,100,stdin);

    inicializa_pilha(&pilha);

    cont_paranteses(&pilha,string);


    return 0;
}
*/



/*MAIN E07
int main(){

    tp_pilha pilha;

    char palavra[100];

    printf("DIGITE UMA PALAVRA:\n");
    fflush(stdin);
    fgets(palavra,100,stdin);

    inicializa_pilha(&pilha);

    palindromo(&pilha,palavra);

    return 0;
}
*/



/*MAIN E06
int main(){

    tp_pilha pilha;

    char texto[200];

    printf("DIGITE O TEXTO:\n");
    fflush(stdin);
    fgets(texto,200,stdin);

    inicializa_pilha(&pilha);

    
    embaralha(&pilha,texto);

    printf("\n|%s|",texto);


    return 0;
}
*/




/*MAIN E05
int main(){


    tp_pilha pilha;
    tp_item aux;
    int tam;
    
    printf("DIGITE O TAMANHO DA STRING:\n");
    scanf("%d",&tam);
    if(tam%2!=0){
        printf("\nSTRING PRECISA SER PAR!\tREPITA!\n");
        printf("DIGITE O TAMANHO DA STRING:\n");
        scanf("%d",&tam);
    }

    char string[tam+1];
    string[0] = tam;

    
    for(int i = 1; i<=tam;i++){
        printf("DIGITE A STRING :\n");
        fflush(stdin);
        scanf("%c",&string[i]);
    }
    

    inicializa_pilha(&pilha);
    
    forma_xy(&pilha,string);

    printf("\n[===============| FIM PILHA |==============]\n");
    return 0;
}
*/




//MAIN E04
/**
 * @brief    ja na biblioteca, verificação se a pilha esta vazia o
 * ou nao.
 */


/*MAIN E03
int main(){


    tp_pilha pilha;
    tp_item aux;
    int cnt_add=0,cnt_rmv = 0;
    

    int op=0;

    inicializa_pilha(&pilha);
    

    do{
        printf("\n\n");
        printf("SELECIONE A OPCAO:\n");
        printf("\n\n[========== |MENU| ==========]\n\n");
        printf("[1] - PUSH (INSERIR):\n");
        printf("[2] - POP (REMOVER):\n");
        printf("[3] - TOP (TOPO):\n");
        printf("[4] - LEIGHT (ALTURA):\n");
        printf("[5] - CLEAR (LIMPAR):\n");
        printf("[-1] - SAIR:\n");
        printf("OPCAO : \t");
        scanf("%d",&op);
        printf("\n\n");


        switch (op){
            case 1:
                printf("\nVALOR :\t");
                scanf("%d",&aux);
                push(&pilha,aux);
                //printf("VALOR TOPO = |%d|\n",pilha.item[pilha.topo]);
                cnt_add++;
                break;
            case 2:
                pop(&pilha,&aux);
                cnt_rmv++;
                break;
            case 3:
                top(&pilha,&aux);
                break;
            case 4:
                printf("LEIGHT = |%d|\n",altura_pilha(&pilha));
                break;
            case 5:
                clear(&pilha);
                break;
            case -1:
                break;
            default:
                printf("OPCAO INVALIDA!");
        }

    }while(op!=-1);

    cnt_add = cnt_add - altura_pilha(&pilha);
    printf("QTD INS = |%d|\n",cnt_add);
    printf("QTD RMV = |%d|\n",cnt_rmv);

    printf("\n[===============| FIM PILHA |==============]\n");
    return 0;
}
*/



//MAIN E02
/**
 * @brief A pilha pode ser utilizada em funções recursivas em compiladores
 * mecanismos de desfazer/refazer em editores de textos, navegação entre
 * pagisnas webs.    
 */


//MAIN E01
/**
 * @brief A pilha é uma estrutura de dados que obedece a ordem LIFO
 * last in first out, o acesso aos itens se da pelo elemento do topo
 * e somente por ele.
 * 
 */





//////////////////////// P2 ////////////////////////////////////////////////////

//MAIN E12
int main(){




    return 0;
}


/*MAIN E11
int main(){

    tp_fila fila;
    tp_item tam=1, op;

    inicializa_fila(&fila);


    do{
        printf("FILA |%d| \nDIGITE(-1 SAIR) :\t",tam);
        scanf("%d",&op);
        if(op == -1){
            break;
        }

        insere_fila(&fila,op);
        tam++;

    }while(op!=-1);

    valores_par(&fila);

    return 0;
}
*/



/*MAIN E10
int main(){

    tp_fila fila;
    tp_item tam=1, op;

    inicializa_fila(&fila);


    do{
        printf("FILA |%d| \nDIGITE(-1 SAIR) :\t",tam);
        scanf("%d",&op);
        if(op == -1){
            break;
        }

        insere_fila(&fila,op);
        tam++;

    }while(op!=-1);

    valores_impar(&fila);


    return 0;
}
*/


/*MAIN E09
int main(){

    int a;
    tp_fila fila;
    inicializa_fila(&fila);

    srand(time(NULL));

    a = 1 + rand()/10;

    for(int i = 0; i<=9; i++){
        a = 1 + rand()%10;
        insere_fila(&fila, a);
    }
    imprime_fila(fila);

}
*/

/*MAIN E08
int main(){

    tp_fila f1,f2,f3;
    tp_item op1;

    inicializa_fila(&f1);
    inicializa_fila(&f2);
    inicializa_fila(&f3);

    printf("\n[==============|FILA 1|==============]\n");

    do{
        printf("FILA 1\nDIGITE(-1 SAIR) :\t");
        scanf("%d",&op1);
        if(op1 == -1){
            break;
        }

        insere_fila(&f1,op1);
    }while (op1!=-1);

    printf("\n[==============|FILA 2|==============]\n");

    do{
        printf("FILA 2\nDIGITE(-1 SAIR) :\t");
        scanf("%d",&op1);
        if(op1 == -1){
            break;
        }

        insere_fila(&f2,op1);
    }while (op1!=-1);


    f3_f2f1_cres(&f1,&f2,&f3);

    imprime_fila(f3);

    return 0;
}
*/



/*MAIN E07
int main(){

    tp_fila fila;
    int op,tam=1;

    inicializa_fila(&fila);

    do{
        printf("FILA |%d| \nDIGITE(-1 SAIR) :\t",tam);
        scanf("%d",&op);
        if(op == -1){
            break;
        }

        insere_fila(&fila,op);
        tam++;

    }while(op!=-1);

    rem_neg(&fila);

    imprime_fila(fila);

    return 0;
}
*/





/*MAIN E06
int main(){


    tp_fila F1,F2;
    int op1;

    inicializa_fila(&F1);
    inicializa_fila(&F2);


    printf("\n[==============|FILA 1|==============]\n");

    do{
        printf("FILA 1\nDIGITE(-1 SAIR) :\t");
        scanf("%d",&op1);
        if(op1 == -1){
            break;
        }

        insere_fila(&F1,op1);
    }while (op1!=-1);

    printf("\n[==============|FILA 2|==============]\n");

    do{
        printf("FILA 2\nDIGITE(-1 SAIR) :\t");
        scanf("%d",&op1);
        if(op1 == -1){
            break;
        }

        insere_fila(&F2,op1);
    }while (op1!=-1);

    maior_fila(&F1,&F2);



    return 0;
}
*/




/*MAIN E05
int main(){


    tp_fila fila;
    int op,tam=1;

    inicializa_fila(&fila);

    do{
        printf("FILA |%d| \nDIGITE(-1 SAIR) :\t",tam);
        scanf("%d",&op);
        if(op == -1){
            break;
        }

        insere_fila(&fila,op);
        tam++;
    }while (op!=-1);

    M_m_med_fila(&fila);

    return 0;
}
*/

/*MAIN E 04
int main(){

    tp_fila fila;
    int op,tam=1;;

    inicializa_fila(&fila);

    do{
        printf("FILA |%d| \nDIGITE(-1 SAIR) :\t",tam);
        scanf("%d",&op);
        if(op== -1){
            break;
        }

        insere_fila(&fila,op);
        tam++;
    }while (op!=-1);


    ordem_fila(&fila);

    imprime_fila(fila);


    return 0;
}
*/




/*MAIN E03
int main(){

    int tam;
    tp_fila fila;
    tp_item e;

    inicializa_fila(&fila);
    
    srand(time(NULL));

    printf("TAMANHO DE ELEMENTOS DA FILA:\t");
    scanf("%d",&tam);

    while(tam>=0){
        int e = 1 + rand()/10;
        insere_fila(&fila,e);
        tam--;
    }
    imprime_fila(fila);

    reverso_fila(&fila);

    imprime_fila(fila);

    return 0;
}
*/




/*MAIN TESTE BIBLIOTECA

int main(){

    tp_fila fila;
    tp_item e;

    inicializa_fila(&fila);

    insere_fila(&fila,10);
    insere_fila(&fila,20);
    insere_fila(&fila,30);

    imprime_fila(fila);

    remove_fila(&fila,&e);
    remove_fila(&fila,&e);

    imprime_fila(fila);
    
    return 0;
}
*/


//MAIN E02
/**
 * A fila pode ser utilizada num fila de banco, armazenamento ordenado
 * de dados, etc...
 * 
 */


//MAIN 01
/**
 * Uma estrutura do tipo fila funciona de maneira FIFO, first in first out,
 * ou seja, eh uma estrutura "sequencial" onde o 1 a entrar eh o primeiro
 * a sair, e ao ser adicionado elemento, sempre será posicionado na ultima
 * posição disponivel.
 * 
 */



////////////////////////////// P1 ////////////////////////////////////////////////
//MAIN 05
/**
 * ALOCAÇÃO ESTATICA:
 *  - O espaço de memoria é definido durante o processo de compilação;
 * 
 * ALOCAÇÃO DINAMICA:
 *  - O espaço de memoria é alocado durante a execução.
 */


//MAIN 04
/**
 * VANTAGENS:
 *  - A inserção e remoção de elementos podem ser feitas sem deslocar os itens seguintes da lista.
 *  - Não ha necessidade de previsão do numero de elementos da lista; o espaço necessario é alocado em tempo de execução;
 *  - Facilita o gerenciamento de varias listas (fusão, divisão).
 * 
 * DESVANTAGENS:
 *  - Acesso indireto aos elementos;
 *  - Tempo variavel para acessar os elementos (depende da posição do elemento);
 *  - Gasto de memoria maior pela necessidade de um novo campo para o ponteiro.
 */

//MAIN 03
/**
 * Na alocação sequencial temos dificuldade na inserção e remoção de elementos quando
 * comparada com a alocação encadeada onde os elementos possuem campos com informações
 * referentes ao seu antecessor e sucessor, assim não seria preciso percorrer todos os 
 * dados atras do local/ valor requerido, o espaço alocado não eh necessariamente adjacente
 * na memoria.
 */


//MAIN E02
/**
 * O espaço de memoria que será utilizado para todos os elementos do conjunto
 * é dimensionado previamente.
 * Esse espaço dpermanecerá reservado durante toda a execução do progama, mesmo que 
 * o mesmo não esteja sendo efetivamente utilizado por completo.
 * 
 */



//MAIN E01
/**
 * Os elementos alocados ficam necessariamente em posições de memoria sequenciais(adjacentes)
 * 
 */


