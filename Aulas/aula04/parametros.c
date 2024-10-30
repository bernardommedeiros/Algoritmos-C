// array passado como parametro de uma função, no exemplo, o array e lido como parametro e imprime seus elementos:

#include <stdio.h>

void imprimir(int numeros[], int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        printf("%d\n", numeros[i]);
    }
} 

    