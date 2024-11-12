// ponteiro = armazena o endereço de memória 
// são utilizados para acessar e manipular variáveis indiretamente
// &var para atribuir o endereço de memória de uma variavel ao ponteiro
// *ponteiro para acessar o valor da variavel através do ponteiro 

#include <stdio.h>

int main() {
    int numeros[5] = {10, 20, 30, 40, 50};
    int *ponteiro = &numeros[0];

    for (int i = 0; i < 5; i++) {
        printf("%d ", *(ponteiro + i));
    }

    return 0;
}



