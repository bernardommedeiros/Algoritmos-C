//struct - semelhante as class
// & acesso a endereço de memória
struct Pessoa{
    char nome[50];
    int idade;
    float altura;
};

int main() {
    struct Pessoa pessoa1;

    printf("Nome:");
    scanf("%s", pessoa1.nome);

    printf("Nome:");
    scanf("%s", pessoa1.idade);

    printf("Altura:");
    scanf("%f", pessoa1.altura);
    
    printf("Nome: %s", pessoa1.nome)    
    printf("Nome: %d", pessoa1.idade)    
    printf("Nome: %f", pessoa1.altura)    
}

