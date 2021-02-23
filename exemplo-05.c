/* 
Arquivo contendo alguns exemplos de variáveis do tipo char 
e o processo de cast. 
A sintaxe do cast segue o seguinte padrão:
    (tipo) variável
    (tipo) expressão
Exemplos: 
int numero;
float soma = (float) numero;
float media = (float) numero / 2;
*/
#include <stdio.h> 
int main(void){
    char letra; // A, a, f, H
    printf("Digite uma letra: "); 
    scanf("%c",&letra);
    // CAST --> char em int ASC II
    printf("Seus dados: %c %i %x \n", letra, letra,letra);
    // char -> int 'Q' -> 81; 'q' -> 113
    // char -> hexadecimal
    // idade <---> 105 100 97 100 101
    return 0;
}