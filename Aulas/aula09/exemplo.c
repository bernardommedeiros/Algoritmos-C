// malloc - atribui ao endereço de memoria
// free - libera/zera a memória do ponteiro indicado, quando não for mais utiliza-lo

#include <stdio.h>

struct Pessoa {
    char nome[50];
    int idade;
    float altura;
};

struct Pessoa* criar_pessoa(char nome[], int idade, float altura) {
    struct Pessoa* pessoa = (struct Pessoa*) malloc(sizeof(struct Pessoa));

    strcpy(pessoa->nome, nome);
    pessoa->idade = idade;
    pessoa->altura = altura;

    return pessoa;
}

int main() {
    struct Pessoa* pessoa1 = criar_pessoa("João", 30, 1.75);

    printf("Nome: %s\n", pessoa1->nome);
    printf("Idade: %d\n", pessoa1->idade);
    printf("Altura: %.2f\n", pessoa1->altura);

    free(pessoa1);

    return 0;
}