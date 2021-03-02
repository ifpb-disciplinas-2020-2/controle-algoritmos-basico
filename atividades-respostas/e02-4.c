/* 
E02.4 Escreva um programa que leia um número e apresenta o valor do seu sucessor e
antecessor.
número=9
sucessor   -> próximo ao número  (10)
antecessor -> anterior ao número (8)
*/
#include <stdio.h>
int main(){
    int numero;
    int sucessor;
    int antecessor;
    // int numero, sucessor,antecessor;
    //ler um numero
    printf("Digite um numero: \n");
    scanf("%i", &numero);
    //calcular o sucessor
    sucessor = numero + 1;
    //calcular o antecessor
    antecessor = numero - 1;
    //apresentar o sucessor
    printf("O sucessor ao número %i é: %i \n", numero, sucessor);
    //apresetar o antecessor
    printf("O antecessor ao número %i é: %i \n", numero, antecessor);
    // printf("O antecessor ao número %i é: %i e o sucessor é: %i \n", numero, antecessor, sucessor);
    return 0;
}