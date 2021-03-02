/* 
E02.9 Escreva um programa que leia uma temperatura em graus Célsius e apresente-a
convertida em graus Fahrenheit. 
Considerando a fórmula: 𝐹 = (9 * 𝐶 + 160)/5.
*/
#include <stdio.h>

int main(){
   float celsius, fahrenheit;
   // ler a temperatura em gras celsius
   printf("Digite a temperatura em graus Celsius:  ");
   scanf("%f", &celsius);
   //calcular a temperatura em Fahrenheit - fórmula: 𝐹 = (9 * 𝐶 + 160)/5.
   fahrenheit = (9 * celsius + 160) / 5;
   // apresentar a a temperatura em Fahrenheit
   printf("A temperatura em fahrenheit é: %.2f \n", fahrenheit);
   return 0;
}