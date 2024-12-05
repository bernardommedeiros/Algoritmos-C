#include <stdio.h>

struct Contato{
    char nome[50];
    int telefone[15];
    int endereço[15];
    char email[15];
};

int main(){
    struct Contato agenda[100];
    int numContatos;
    int choice;
    printf("Menu - Digite: 1 - Inserir contatos, 2 - Listar contatos, 3 - Atualizar contato, 4 - Remover contato, 5 - Sair");
    scanf("%d", choice);

    if (choice == 1){
        printf("Digite o número de contatos: ");
        scanf("%d", &numContatos);

        for (int i = 0; i < numContatos; i++) {
        printf("Digite o nome %d: ", i + 1);
        scanf("%s", agenda[i].nome);

        printf("Digite o telefone %d: ", i + 1);
        scanf("%s", agenda[i].telefone);

        printf("Digite o endereço %d: ", i + 1);
        scanf("%s", agenda[i].nome);

        printf("Digite o email %s: ", i + 1);
        scanf("%s", agenda[i].telefone);
    }
    }

        
     }
       
    else if (choice == 5){
        return 0;
    }

}

