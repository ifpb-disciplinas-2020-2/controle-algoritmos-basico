/* 
Arquivo contendo alguns exemplos de variáveis, 
com seus tipos e nomes.
A declaração de uma variável segue o seguinte padrão:
    <tipo> <nome> 
*/
#include <stdio.h> 
int main(void){ 
    // <tipo> <nome> variavel
    int idade;  // 1, 4, 2, 5, 6, 3
    double nota; // 10.2,33.2, 12.21111
    char nome;
    short float_;
    long a; //long altura;
    double h;

    printf("Digite sua idade e nota: \n"); 
    scanf("%d",&idade);
    scanf("%lf",&nota);
    printf(
        "seus dados: %d e %.2lf %.10lf \n", 
        idade, nota, nota
    );
    return 0;
}