# Algoritmos - Conceitos básicos

Este projeto está estruturado com os assuntos relacionados aos conceitos básicos de entrada e saída, e os seus respectivos comendos na Linguagem de Programação C.

**Aulas**

*[Aula 1 - Fluxogramas ](https://github.com/ifpb-disciplinas-2020-2/controle-algoritmos-basico/commit/cc7eef7dfc90fb8a9dcde73412e8306daacd5f41)*

*[Aula 2 - Conceitos básicos - comandos de entrada e saída](https://github.com/ifpb-disciplinas-2020-2/controle-algoritmos-basico/commit/3bf1365fa7cf73c666840ab7f530c5a10619f38a)*


# Ambientes de Desenvolvimento

Na disciplina poderemos usar dois ambientes de programação. O primeiro será utilizado de __off-line__, no computador. Por sua vez, o segundo utilizará de um serviço online para gerenciarmos os processos de criação, compilação e execução dos algoritmos.

Nos primeiro ambiente será utilizando o [Visual Studio Code](https://code.visualstudio.com/download) como nosso Editor de código-fonte. E o [GNU Compiler Collection](https://gcc.gnu.org/install/binaries.html) como Compilador.

O segundo ambiente será com o serviço __rel.it__.
O [repl.it](https://repl.it/) fornece um conjunto de funcionalidades para codificação, compilação e execução do código-fonte, sem a necessidade de instalação prévia.


# Atividade prática

Na pasta `atividades` temos a nossa segunda lista de exercício. Desenvolva, para cada item, um algoritmo correspondente.
Os arquivos devem ser compiláveis (sem problemas para compilar) e atenderem ao solicitado em cada questão.

## Metodologia

Esta atividade prática está planejada em um conjunto de algoritmos e para ser desenvolvida individualmente ou coletivamente. 
Cada aluno deve fazer o __fork__ deste projeto e implementar sua própria solução. 

Caso surja alguma dúvida no desenvolvimento, falar de imediato via [Slack](https://ifpb20202algo-ca55489.slack.com/archives/C01PE7ZKX41). 

> Lembrete: Não guardem dúvidas, elas são como as dívidas. Acumulam-se e nos prejudicam :)

### Compilação

Lembrem-se que após a criação do algotimos, o arquivo `.c` precisa ser compilado.

```
// main.c     -- Linguagem de programação C
// compilação -- compilador (sintaxe, léxico)
// main       -- executável
```

Seguimos os passos:
*1. compilar o código-fonte (gerar um arquivo executável)*
*2. executar o executável (gerado no passo 1)*

Passo 1: `gcc exemplo-01.c -o exemplo-01`.
Passo 2: `./exemplo-01`.