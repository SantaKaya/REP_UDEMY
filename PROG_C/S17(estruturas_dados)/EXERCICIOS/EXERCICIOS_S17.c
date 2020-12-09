#include <stdio.h>
#include <stdlib.H>
#include <math.h>
#include "BBTK_S17.h"
#include <string.h>

/////// QUESTOES ///////////////

//MAIN 03
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


