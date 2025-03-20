#include <stdio.h>

void aplicarHabilidade(int tabuleiro[10][10], int habilidade[5][5], int origemX, int origemY) {
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            int x = origemX + i - 2;
            int y = origemY + j - 2;
            if (x >= 0 && x < 10 && y >= 0 && y < 10 && habilidade[i][j] == 1) {
                tabuleiro[x][y] = 5;
            }
        }
    }
}

int main() {
    int tabuleiro[10][10] = {0};
    char linha[10] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'};
    int navio_h[3] = {3, 3, 3};
    int navio_v[3] = {3, 3, 3};
    int navio_d1[3] = {3, 3, 3};
    int navio_d2[3] = {3, 3, 3};

    for (int i = 0; i < 3; i++) {
        tabuleiro[3][4 + i] = navio_h[i];
    }
    for (int i = 0; i < 3; i++) {
        tabuleiro[6 + i][2] = navio_v[i];
    }
    for (int i = 0; i < 3; i++) {
        tabuleiro[0 + i][0 + i] = navio_d1[i];
    }
    for (int i = 0; i < 3; i++) {
        tabuleiro[7 + i][7 + i] = navio_d2[i];
    }

    int cone[5][5] = {
        {0, 0, 1, 0, 0},
        {0, 1, 1, 1, 0},
        {1, 1, 1, 1, 1},
        {0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0}
    };

    int cruz[5][5] = {
        {0, 0, 1, 0, 0},
        {0, 0, 1, 0, 0},
        {1, 1, 1, 1, 1},
        {0, 0, 1, 0, 0},
        {0, 0, 1, 0, 0}
    };

    int octaedro[5][5] = {
        {0, 0, 1, 0, 0},
        {0, 1, 1, 1, 0},
        {1, 1, 1, 1, 1},
        {0, 1, 1, 1, 0},
        {0, 0, 1, 0, 0}
    };

    aplicarHabilidade(tabuleiro, cone, 2, 2);
    aplicarHabilidade(tabuleiro, cruz, 5, 5);
    aplicarHabilidade(tabuleiro, octaedro, 7, 7);

    printf("  ");
    for (int i = 1; i <= 10; i++) {
        printf("%d ", i);
    }
    printf("\n");

    for (int i = 0; i < 10; i++) {
        printf("%c ", linha[i]);
        for (int j = 0; j < 10; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }

    return 0;
}