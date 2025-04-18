#include <stdio.h>
int main() {

    int racao;
    int consumoA;
    int consumoB;
    int totalR;
    int totalC;
    int resultado;
    int media;
    printf("Kilos de racao: ");
    scanf("%d", &racao);
    totalR = racao * 1000;
    printf("consumo A: ");
    scanf("%d", &consumoA);
    printf("consumo B: ");
    scanf("%d", &consumoB);
    totalC = (consumoA+consumoB)*5;
    resultado = totalR - totalC;
    printf("%d", resultado);
    return 0;
}