#include <stdio.h>

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

    
    printf("  ");  
    for (int i = 0; i < 10; i++) {
        printf("%c ", linha[i]);  
    }
    printf("\n");

    for (int i = 0; i < 10; i++) {
        printf("%2d ", i + 1);  
        for (int j = 0; j < 10; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }

    return 0;
}
