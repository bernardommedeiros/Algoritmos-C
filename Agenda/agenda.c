#include <stdio.h>

struct Contato {
    char nome[50];
    char telefone[15];
    char email[50];
    char endereco[50];
};

void inserirContato() {
    if (indice == numContatos) {
        printf("Limite da agenda alcançado.\n");
    } else {
        printf("Digite o nome: ");
        scanf("%s", agenda[indice].nome);
        printf("Digite o telefone: ");
        scanf("%s", agenda[indice].telefone);
        printf("Digite o email: ");
        scanf("%s", agenda[indice].email);
        printf("Digite o endereço: ");
        scanf("%s", agenda[indice].endereco);
        indice = indice + 1;
    }
}

void listarContatos() {
    for (int i = 0; i < indice; i++) {
        printf("Nome: %s Telefone: %s Email: %s Endereço: %s\n", agenda[i].nome, agenda[i].telefone, agenda[i].email, agenda[i].endereco);
    }
}

void atualizarContato() {
    int i;
    printf("Digite o índice do contato: ");
    scanf("%d", &i);
    printf("Atualize o nome: ");
    scanf("%s", agenda[i].nome);
    printf("Atualize o telefone: ");
    scanf("%s", agenda[i].telefone);
    printf("Atualize o email: ");
    scanf("%s", agenda[i].email);
    printf("Atualize o endereço: ");
    scanf("%s", agenda[i].endereco);
}

void deletarContato() {
    int i;
    printf("Digite o índice do contato: ");
    scanf("%d", &i);
    for (int j = i; j < indice - 1; j++) {
        agenda[j] = agenda[j + 1];
    }
    indice = indice - 1;
}

int main() {
    printf("Digite o número de contatos desejado para a agenda: ");
    scanf("%d", &numContatos);
    struct Contato agenda[numContatos];

    int run = 1;
    while (run) {
        int choice = 0;
        printf("1-Inserir contato\n2-Listar contatos\n3-Atualizar contato\n4-Deletar contato\n5-Sair\n");
        printf("Digite a opção desejada: ");
        scanf("%d", &choice);

        if (choice == 1) {
            inserirContato();
        } 
        else if (choice == 2) {
            listarContatos();
        } 
        else if (choice == 3) {
            atualizarContato();
        } 
        else if (choice == 4) {
            deletarContato();
        } 
        else if (choice == 5) {
            printf("Fim do programa.\n");
            run = 0;
        } else {
            printf("Opção inválida.\n");
        }
    }

    return 0;
}
