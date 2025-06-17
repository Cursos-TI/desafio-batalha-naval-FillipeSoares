#include <stdio.h>

// Desafio Batalha Naval - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de Batalha Naval.
// Siga os comentários para implementar cada parte do desafio.


    // Nível Novato - Posicionamento dos Navios
    // Sugestão: Declare uma matriz bidimensional para representar o tabuleiro (Ex: int tabuleiro[5][5]
    // Sugestão: Posicione dois navios no tabuleiro, um verticalmente e outro horizontalmente.
    // Sugestão: Utilize `printf` para exibir as coordenadas de cada parte dos navios.

    void exibirtabuleiro5x5(){
        char colunas[5] = {'A','B','C','D','E'};
        int tabuleiro[5][5];

    // 🔸 Inicializa o tabuleiro com 0 (água)
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            tabuleiro[i][j] = 0;
        }
    }

    // 🔸 Posiciona navio vertical (coluna 'A', linhas 2, 3 e 4)
    for (int i = 0; i <= 2; i++) {
        tabuleiro[i][0] = 3;
    }

    // 🔸 Posiciona navio horizontal (linha 5, colunas C, D, E)
    for (int j = 2; j <= 4; j++) {
        tabuleiro[4][j] = 3;
    }

    // 🔸 Impressão do cabeçalho das colunas
    printf("\n   ");
    for (int i = 0; i < 5; i++) {
        printf("%c ", colunas[i]);
    }
    printf("\n");

    // 🔸 Impressão do tabuleiro
    for (int i = 0; i < 5; i++) {
        printf("%d  ", i + 1);
        for (int j = 0; j < 5; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }
}
    // Nível Aventureiro - Expansão do Tabuleiro e Posicionamento Diagonal
    // Sugestão: Expanda o tabuleiro para uma matriz 10x10.
    // Sugestão: Posicione quatro navios no tabuleiro, incluindo dois na diagonal.
    // Sugestão: Exiba o tabuleiro completo no console, mostrando 0 para posições vazias e 3 para posições ocupadas.

    void exibirtabuleiro10x10(){
        char colunas[10] = {'A','B','C','D','E','F', 'G', 'H', 'I', 'J'};
        int tabuleiro[10][10];

    // 🔸 Inicializa o tabuleiro com 0 (água)
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            tabuleiro[i][j] = 0;
        }
    }

    // 🔸 Posiciona navio vertical (coluna 'B', linhas 2, 3 e 4)
    for (int i = 0; i <= 2; i++) {
        tabuleiro[i][0] = 3;
    }

    // 🔸 Posiciona navio horizontal (linha 5, colunas C, D, E)
    for (int j = 7; j <= 9; j++) {
        tabuleiro[9][j] = 3;
    }

    // 🔸 Impressão do cabeçalho das colunas
    printf("\n   ");
    for (int i = 0; i < 10; i++) {
        printf("%c ", colunas[i]);
    }
    printf("\n");

    // 🔸 Impressão do tabuleiro
    for (int i = 0; i < 10; i++) {
        printf("%2d  ", i + 1); // O "%2d" foi usado para a ultima linha não ficar deslocada por conta do 10 ter dois digitos.
        for (int j = 0; j < 10; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }

}
    int main() {
        exibirtabuleiro5x5();
        exibirtabuleiro10x10();

    return 0;
}

    // Nível Mestre - Habilidades Especiais com Matrizes
    // Sugestão: Crie matrizes para representar habilidades especiais como cone, cruz, e octaedro.
    // Sugestão: Utilize estruturas de repetição aninhadas para preencher as áreas afetadas por essas habilidades no tabuleiro.
    // Sugestão: Exiba o tabuleiro com as áreas afetadas, utilizando 0 para áreas não afetadas e 1 para áreas atingidas.

    // Exemplos de exibição das habilidades:
    // Exemplo para habilidade em cone:
    // 0 0 1 0 0
    // 0 1 1 1 0
    // 1 1 1 1 1
    
    // Exemplo para habilidade em octaedro:
    // 0 0 1 0 0
    // 0 1 1 1 0
    // 0 0 1 0 0

    // Exemplo para habilidade em cruz:
    // 0 0 1 0 0
    // 1 1 1 1 1
    // 0 0 1 0 0


