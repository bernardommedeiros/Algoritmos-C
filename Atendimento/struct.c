#include <stdio.h>

struct Atendimento{
    char nome[50];
    int idade;
    char tipoAtend[50];
    int preferencia;
// 1 se sim 2 se não, caso sim, 1, 2, 3 para idoso gestante ou deficiente
}

void inserirPreferencia(struct Atendimento){
    struct Atendimento filaPref[100];
         for (int i = 0; i < numContatos; i++) {
        printf("Digite o nome %d: ", i + 1);
        scanf("%s", filaPref[i].nome);

        printf("Digite a idade %d: ", i + 1);
        scanf("%s", filaPref[i].telefone);

        printf("Digite o tipo de atendimento %d: ", i + 1);
        scanf("%s", filaPref[i].nome);

        printf("Informe o seu tipo de preferencia %s: ", i + 1);
        scanf("%s", filaPref[i].telefone);
    }
} 
