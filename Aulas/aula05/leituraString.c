#include <stdio.h>
// para leitura de strings na matriz, é necessário utilizar a função fgets
// stdin é um ponteiro que indica a leitura do teclado, lê até o \n
// fgets lê uma linha de texto do arquivo de entrada e armazena na matriz
int main() {
    char nomes[3][50];

    for (int i = 0; i < 3; i++) {
        printf("Digite o nome: ");
        fgets(nomes[i], 50, stdin);
    }
// diferença fgets e scanf: scanf lê até um espaço em branco, já o fgets lê até uma nova linha, sendo mais apropriado para leitura de str
    for (int i = 0; i < 3; i++) {
        printf("%s", nomes[i]);
    }

    return 0;
}