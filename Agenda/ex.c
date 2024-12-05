#include <stdio.h>

struct Contato {
    char nome[50];
    char telefone[15];
};

int main() {
    struct Contato agenda[100];
    int num_contatos;

    printf("Digite o número de contatos: ");
    scanf("%d", &num_contatos);

    for (int i = 0; i < num_contatos; i++) {
        printf("Digite o nome do contato %d: ", i + 1);
        scanf("%s", agenda[i].nome);

        printf("Digite o telefone do contato %d: ", i + 1);
        scanf("%s", agenda[i].telefone);
    }

    printf("Contatos:\n");

    for (int i = 0; i < num_contatos; i++) {
        printf("Nome: %s\n", agenda[i].nome);
        printf("Telefone: %s\n", agenda[i].telefone);
    }

    return 0;
}