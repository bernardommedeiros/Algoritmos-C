#include <stdio.h>

int main() {
    char string[100];
    int comprimento = 0;

    printf("Digite uma string: ");
    scanf("%99s", string);

    while (string[comprimento] != '\0') {
        comprimento++;
    }

    printf("O comprimento da string é: %d", comprimento);

    return 0;
}