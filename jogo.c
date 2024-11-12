#include <stdio.h>

int main() {
    int jogo[5][5] = {
        {0, -1, -1, 0, 0}, // -1 -> bomba
        {-1, 0, 0, -1, 0}, // 0 -> não-bomba
        {0, 0, 0, -1, -1},
        {0, -1, 0, 0, -1},
        {-1, 0, -1, 0, 0}
    };

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            if (jogo[i][j] == -1) {
                if (i == 0) {
                    if (j == 0) {
                        if (jogo[i][j+1] != -1) {jogo[i][j]++;};
                        if (jogo[i+1][j] != -1) {jogo[i+1][j]++;};
                        if (jogo[i+1][j+1] != -1) {jogo[i+1][j+1]++;};
                    } else if (j == 4) {
                        if (jogo[i][j-1] != -1) {jogo[i][j-1]++;};
                        if (jogo[i+1][j] != -1) {jogo[i+1][j]++;};
                        if (jogo[i+1][j-1] != -1) {jogo[i+1][j-1]++;};
                    } else {
                        if (jogo[i][j+1] != -1) {jogo[i][j+1]++;};
                        if (jogo[i][j-1] != -1) {jogo[i][j-1]++;};
                        if (jogo[i+1][j] != -1) {jogo[i+1][j]++;};
                        if (jogo[i+1][j+1] != -1) {jogo[i+1][j+1]++;};
                        if (jogo[i+1][j-1] != -1) {jogo[i+1][j-1]++;};
                    }
                } else if (i == 4) {
                    if (j == 0) {
                        if (jogo[i][j+1] != -1) {jogo[i][j+1]++;};
                        if (jogo[i-1][j] != -1) {jogo[i-1][j]++;};
                        if (jogo[i-1][j+1] != -1) {jogo[i-1][j+1]++;};
                    } else if (j == 4) {
                        if (jogo[i][j-1] != -1) {jogo[i][j-1]++;};
                        if (jogo[i-1][j] != -1) {jogo[i-1][j]++;};
                        if (jogo[i-1][j-1] != -1) {jogo[i-1][j-1]++;};
                    } else {
                        if (jogo[i][j+1] != -1) {jogo[i][j+1]++;};
                        if (jogo[i][j-1] != -1) {jogo[i][j-1]++;};
                        if (jogo[i-1][j] != -1) {jogo[i-1][j]++;};
                        if (jogo[i-1][j+1] != -1) {jogo[i-1][j+1]++;};
                        if (jogo[i-1][j-1] != -1) {jogo[i-1][j-1]++;};
                    }
                } else if (j == 0) {
                    if (jogo[i-1][j] != -1) {jogo[i-1][j]++;};
                    if (jogo[i+1][j] != -1) {jogo[i+1][j]++;};
                    if (jogo[i][j+1] != -1) {jogo[i][j+1]++;};
                    if (jogo[i-1][j+1] != -1) {jogo[i-1][j+1]++;};
                    if (jogo[i+1][j+1] != -1) {jogo[i+1][j+1]++;};
                } else if (j == 4) {
                    if (jogo[i-1][j] != -1) {jogo[i-1][j]++;};
                    if (jogo[i+1][j] != -1) {jogo[i+1][j]++;};
                    if (jogo[i][j-1] != -1) {jogo[i][j-1]++;};
                    if (jogo[i-1][j-1] != -1) {jogo[i-1][j-1]++;};
                    if (jogo[i+1][j-1] != -1) {jogo[i+1][j-1]++;};
                } else {
                    if (jogo[i][j-1] != -1) {jogo[i][j-1]++;};
                    if (jogo[i][j+1] != -1) {jogo[i][j+1]++;};
                    if (jogo[i-1][j] != -1) {jogo[i-1][j]++;};
                    if (jogo[i+1][j] != -1) {jogo[i+1][j]++;};
                    if (jogo[i+1][j+1] != -1) {jogo[i+1][j+1]++;};
                    if (jogo[i+1][j-1] != -1) {jogo[i+1][j-1]++;};
                    if (jogo[i-1][j+1] != -1) {jogo[i-1][j+1]++;};
                    if (jogo[i-1][j-1] != -1) {jogo[i-1][j-1]++;};
                }
            }
        }
    }
    int row;
    int col;
    int verificador;
    int op;
    int cont = 0;
    char aux[5][5] = {
        {'?', '?', '?', '?', '?'},
        {'?', '?', '?', '?', '?'},
        {'?', '?', '?', '?', '?'},
        {'?', '?', '?', '?', '?'},
        {'?', '?', '?', '?', '?'}
    };
    while (1) {
        verificador = 0;
        op = 0;
        printf("Digite a linha: ");
        scanf("%d", &row);
        printf("Digite a coluna: ");
        scanf("%d", &col);
        while (1) {
            if ((row < 0 || row > 4) || (col < 0 || col > 4)) {
                printf("Posição inválida.\n");
                printf("Digite a linha: ");
                scanf("%d", &row);
                printf("Digite a coluna: ");
                scanf("%d", &col);
            } else if (aux[row][col] != '?') {
                printf("Posição já aberta.\n");
                printf("Digite a linha: ");
                scanf("%d", &row);
                printf("Digite a coluna: ");
                scanf("%d", &col);
            } else {
                break;
            }
        }
        if (jogo[row][col] == -1) {
            aux[row][col] = '*';
            verificador = 1;
        } else {
            char caractere[2];
            sprintf(caractere, "%d", jogo[row][col]);
            aux[row][col] = caractere[0];
            cont++;
        }
        if (cont != 15) {
            for (int i = 0; i < 5; i++) {
                for (int j = 0; j < 5; j++) {
                    printf("%c ", aux[i][j]);
                }
                printf("\n");
            }
        }
        if (verificador == 1) {
            printf("GAME OVER! VOCÊ PERDEU!\n");
            printf("Digite 1 para jogar novamente ou qualquer tecla para encerrar: ");
            scanf("%d", &op);
            cont = 0;
        }
        if (op == 1) {
            for (int i = 0; i < 5; i++) {
                for (int j = 0; j < 5; j++) {
                    aux[i][j] = '?';
                }
            }
        } else if (verificador == 1) {
            printf("FIM DE JOGO.\n");
            break;
        }
        if (cont == 15) {
            printf("PARABÉNS! VOCÊ VENCEU!\n");
            for (int i = 0; i < 5; i++) {
                for (int j = 0; j < 5; j++) {
                    if (aux[i][j] == '?') {
                        aux[i][j] = '*';
                    }
                    printf("%c ", aux[i][j]);
                }
                printf("\n");
            }
            break;
        }

    }
    return 0;
}