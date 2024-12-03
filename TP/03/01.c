#include <stdio.h>

int obter_primeiro_elemento(int lista[], int tamanho) {
   return lista[0];
//    O(1) - pois o algoritmo depende apenas das operações pré fixadas e não da entrada.
}

int main() {
   int lista[] = {10, 20, 30, 40, 50};
   int tamanho = sizeof(lista) / sizeof(lista[0]);
   
   printf("Primeiro elemento: %d\n", obter_primeiro_elemento(lista, tamanho));
   
   return 0;
//  O(1) - pois o algoritmo sempre imprime um número constante, o primeiro do array
}