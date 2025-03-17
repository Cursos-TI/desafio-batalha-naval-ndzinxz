#include <stdio.h>

int main() {
    int tabuleiro[10][10] = {0};
    char colunas[10] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'};
    int navioHorizontal[3] = {3, 3, 3};
    int navioVertical[3] = {3, 3, 3};



    for (int i = 0; i < 3; i++) {
        tabuleiro[2][3 + i] = navioHorizontal[i];
    }

    for (int i = 0; i < 3; i++) {
        tabuleiro[5 + i][7] = navioVertical[i];
    }

    printf("  ");
    for (int i = 0; i < 10; i++) {
        printf("%c ", colunas[i]);
    }
    printf("\n");

    for (int i = 0; i < 10; i++) {
        printf("%d ", i + 1);
        for (int j = 0; j < 10; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }

    return 0;
}