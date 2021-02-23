/* 
Arquivo contendo um algoritmos que leia um número inteiro 
e apresente a metade deste número.
A saída precisa estar no formato com uma casa decimal.
*/
#include <stdio.h> 
int main(void){ 
    int numero;
    float metade;
    printf("Digite um número: \n");
    scanf("%i", &numero); 
    metade = (float) numero / 2; // int > cast para o tipo float
    printf("A metade é: %.1f \n",metade);
    return 0;
}