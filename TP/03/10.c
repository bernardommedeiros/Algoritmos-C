#include <stdio.h>

int main() {
    char str[100];
    int deslocamento, i = 0;
    char ch;

    printf("Digite uma string: ");
    scanf("%99s", str);
    printf("Digite o deslocamento: ");
    scanf("%d", &deslocamento);

    while (str[i] != '\0') {
        ch = str[i];
        if (ch >= 'a' && ch <= 'z') {
            ch = ch + deslocamento;
            if (ch > 'z') {
                ch = ch - 'z' + 'a' - 1;
            }
            str[i] = ch;
        } else if (ch >= 'A' && ch <= 'Z') {
            ch = ch + deslocamento;
            if (ch > 'Z') {
                ch = ch - 'Z' + 'A' - 1;
            }
            str[i] = ch;
        }
        i++;
    }

    printf("String criptografada: %s\n", str);

    return 0;
}