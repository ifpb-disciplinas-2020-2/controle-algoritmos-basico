/* 
Arquivo contendo os comandos printf e scanf.
Os comandos responsáveis pela saída e entrada de dados.

Para leitura ou exibição dos dados, usamos as seguintes formatações:
%c    Caractere
%d   Inteiros decimais com sinal
%u   Inteiros decimais sem sinal
%i    Inteiros (octal, decimal e hexadecimal)
%f    Números float
%lf   Números double
%e   Notação científica
%x   Números em hexadecimal
%s   Cadeia de caracteres (strings)

*/
#include <stdio.h> 
int main(){
    // Imprimir dados de saída        
    printf("Estou no curso de Engenharia de Controle!!! \n"); 
    // printf("Meu nome é Ricardo. \n");
    
    // Ler dados de entrada
    int idade; 
    printf("Digite sua idade: \n"); 
    scanf("%d",&idade);
    printf("Que legal, sua idade é: %d \n", idade);
    return 0;
}