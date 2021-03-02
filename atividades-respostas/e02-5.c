/* 
E02.5 Escreva um programa que 
leia dois valores inteiros A e B, 
realizar a troca dos valores e
imprimir o resultado após a troca.
*/
#include <stdio.h>
int main(){
    int a, b;
    int intermediaria;
    // leia dois valores inteiros A e B
    printf("Digite dois números: ");
    scanf("%i %i", &a, &b); 
    // realizar a troca dos valores
    intermediaria = b;
    b = a;
    a = intermediaria;
    // imprimir o resultado após a troca
    printf("a: %i; b: %i; intermediaria: %i \n", a, b, intermediaria);
    return 0;
}