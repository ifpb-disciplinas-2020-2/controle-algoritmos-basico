/* 
Arquivo contendo os comandos puts e gets.
Os comandos responsáveis pela saída e entrada de dados em texto.
*/
#include <stdio.h> // incluindo uma biblioteca padrão
// Ler dados de entrada
int main(void){ // declaração função 
    char nome[50];  //texto
    puts("Digite seu nome com até 50 caracteres:"); 
    gets(nome); 
    printf("Seu nome: %s \n",nome);
    return 0;
}