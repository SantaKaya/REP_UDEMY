 #include <stdio.h>
 //FILE == ARQUIVO


 int main(){

     FILE *arq;  

    //fopen(nome-do-arquivo, forma-de-abertura);
    //w - abrir o arquivo para escrita
    //r - abrir o arquivo para leitura (não podemos editar)
    //wa - abrir o arquivo para adição de conteudo (existir - conteudo add nas linhas abaixo.)
    arq = fopen("arquivo.txt","w");

    //Sempre que finalizarmos a manipulação de um arquivo, devemos fecha-lo.
    //fclose(nome-da-variavel)
    fclose(arq);


     return 0;
 }