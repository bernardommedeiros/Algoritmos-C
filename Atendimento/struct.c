#include <stdio.h>
#include <string.h>
struct Cliente{
    char nome[50];
    int idade;
    char tipoAtend[50];
    int preferencia;
}

struct Fila{
    struct Cliente* clientes[10];
}

void inserirCliente(){
    struct Cliente obj;
    
    printf("Digite o nome %d: ", i + 1);
    scanf("%s", obj.nome);

    printf("Digite a idade %d: ", i + 1);
    scanf("%s", obj.idade);

    printf("Digite o tipo de atendimento %d: ", i + 1);
    scanf("%s", obj.tipoAtend);

    printf("O cliente é preferencial? Digite: 0 caso não, 1 para idoso, 2 para gestante e 3 para lactante%d: ", i + 1);
    scanf("%s", obj.preferencia);
    if (0){
        printf("Ola")
    }
    
}


void organizarFila



















int main(){
    struct Cliente cliente[10];
}
