#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Contato {
    int id;
    char nome[50];
    char telefone[15];
};

void inserir(struct Contato agenda[], int totalContatos){
    int id = 0;
    for (int i = 0; i < totalContatos; i++){
        if (agenda[i].id > id){
            id = agenda[i].id;
        }
    }
    agenda[totalContatos].id = id + 1;

    printf("Digite o nome do contato: ");
    scanf("%s", agenda[totalContatos].nome);

    printf("Digite o telefone do contato: ");
    scanf("%s", agenda[totalContatos].telefone);
}

void listar(struct Contato agenda[], int totalContatos){
    for (int j = 0; j < totalContatos; j++){
        printf("%d - ", agenda[j].id);
        printf("%s - ", agenda[j].nome);
        printf("%s\n", agenda[j].telefone);
    }
}

void atualizar(struct Contato agenda[], int totalContatos){
    listar(agenda, totalContatos);
    int contato = 0;
    printf("Qual contato vocé deseja atualizar as informações?");
    scanf("%d", &contato);

    int posicao;
    for (int i = 0; i < totalContatos - 1; i++){
        if (agenda[i].id == contato){
            posicao = i;
        }
    }

    printf("Digite o novo nome do contato: ");
    scanf("%s", agenda[posicao].nome);

    printf("Digite o novo telefone do contato: ");
    scanf("%s", agenda[posicao].telefone);
}

void excluir(struct Contato agenda[], int totalContatos){
    listar(agenda, totalContatos);
    int contato = 0;
    printf("Qual contato vocé deseja excluir?");
    scanf("%d", &contato);

    int posicao;
    for (int i = 0; i < totalContatos - 1; i++){
        if (agenda[i].id == contato){
            posicao = i;
        }
    }

    for (int i = posicao; i < totalContatos - 1; i++){
        agenda[i] = agenda[i + 1];
    }
}

int main() {
    struct Contato agenda[100];
    int totalContatos = 0;

    int op = 0;
    while (op != 5){
        printf("1 - Criar contato, 2 - Listar contatos, 3 - Atualizar contato, 4 - Excluir contato, 5 - Fim\n");
        printf("Informe sua opção: ");
        scanf("%d", &op);

        if (op == 1){
            inserir(agenda, totalContatos);
            totalContatos ++;
        } else if (op == 2){
            listar(agenda, totalContatos);
        } else if (op == 3){
            atualizar(agenda, totalContatos);
        } else if (op == 4){
            excluir(agenda, totalContatos);
            totalContatos --;
        } else {
            printf("Opção invalida!\n");
        }

    }

    return 0;
}