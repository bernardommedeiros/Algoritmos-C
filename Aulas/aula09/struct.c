#include <stdio.h>
// struct semelhante a class
// & acessa endereço de memória
struct Pessoa {
    char nome[50];
    int idade;
    float altura;
};

int main() {
    struct Pessoa pessoa1;

    printf("Digite o nome da pessoa: ");
    scanf("%s", pessoa1.nome);

    printf("Digite a idade da pessoa: ");
    scanf("%d", &pessoa1.idade);

    printf("Digite a altura da pessoa: ");
    scanf("%f", &pessoa1.altura);

    printf("Nome: %s\n", pessoa1.nome);
    printf("Idade: %d\n", pessoa1.idade);
    printf("Altura: %.2f\n", pessoa1.altura);

    return 0;
}