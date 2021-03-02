/* 
E02.7 Escreva um programa que leia 
o número de questões que um candidato acertou em
uma prova, 
calcule e exiba o percentual de acertos. 
Considerando que a prova possuía 50 questões.

10 , 100 -> 10%; 100x = 1000 -> x=1000/100 -> x=10%
10  ->  x
100 -> 100


1, 50 -> 2% ; 50x = 100 -> x = 100/50 -> x=2%
1  -> x
50 -> 100

 (1/50)*100

*/
#include <stdio.h>
#define total_questoes 100 //constante

int main(){
    // const int total_questoes = 50;
    int questoes;
    float percentual;
    // ler o numero de questoes certas
    printf("Digite o número de questões corretas: \n");
    scanf("%d", &questoes);
    // calcular o percentual
    percentual  = (float)  questoes*100/total_questoes;
    // percentual = percentual * 100;
    // exibir o percentual
    printf("O candidato acertou: %.1f%% \n", percentual);
   return 0;
}