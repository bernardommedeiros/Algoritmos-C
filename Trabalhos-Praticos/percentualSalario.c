#include <stdio.h>

int main() {
    float salario;
    float percentual;
    printf("Digite o salário: ");
    scanf("%f", &salario);
    printf("Digite o percentual de aumento(número de 0-100): ");
    scanf("%f", &percentual);
    float aumento = salario * (percentual / 100);
    printf("O aumento salarial foi de R$ %.2f", aumento);
    return 0;
}