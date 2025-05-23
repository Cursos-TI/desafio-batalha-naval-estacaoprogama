#include <stdio.h>

int main() {

    char linha[10] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'}; // declara a coluna

    // 1. Criando o tabuleiro (matriz 10 x 10)
    int tabuleiro[10][10];

    // Inicializa o tabuleiro com 0 (água)
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            tabuleiro[i][j] = 0;
        }
    }

    // 2. Posiciona os navios
    int posicao_navio = 3; // declara o tamanho do navio 

    // Navio 1: Posição horizontal (começa em [2][3]), (linha 3, coluna 4 (D))
    for (int j = 3; j < 3 + posicao_navio; j++) {  
        tabuleiro[2][j] = 3;
    }

    // Navio 2: Posição vertical (começa em [5][7]), (linha 6, coluna 8 (H))
    for (int i = 5; i < 5 + posicao_navio; i++) { 
        tabuleiro[i][7] = 3; 
    }

    // 4. Exibindo o tabuleiro
    printf("TABULEIRO BATALHA NAVAL\n\n");
    printf("   "); // Espaço para alinhar com as letras das colunas
    for (int j = 0; j < 10; j++) {
        printf("%c ", linha[j]); // Imprime as letras das colunas com um espaço após o caracter para efeito de alinhamento visual
    }
    printf("\n"); // Nova linha após as letras das colunas

    for (int i = 0; i < 10; i++) {
        printf("%2d ", i + 1); // Imprime o número da linha (1 a 10) int com 2 digitos e espaçao para efeito de alinhamento visual
        for (int j = 0; j < 10; j++) {
            printf("%d ", tabuleiro[i][j]); // Imprime o conteúdo da célula ( 0 )
        }
        printf("\n"); // Nova linha após cada linha do tabuleiro
    }

    return 0;
}

